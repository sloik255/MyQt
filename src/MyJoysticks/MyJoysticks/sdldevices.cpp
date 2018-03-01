#include "sdldevices.h"

SdlDevices::SdlDevices()
{
    SDL_Init(SDL_INIT_GAMECONTROLLER);

    QFile genericMappingFile(":/MyJoysticks/resources/GenericMappings/Windows.txt");
    if (genericMappingFile.open (QFile::ReadOnly)) {
        genericMapping = QString::fromUtf8 (genericMappingFile.readAll());
        genericMappingFile.close();
    }
    this->start();
}

SdlDevices::~SdlDevices()
{
    SDL_Quit();
}

void SdlDevices::run()
{
    while (true)
    {
        while (SDL_PollEvent (&sdl_event))
        {
            switch (sdl_event.type)
            {
            case SDL_JOYDEVICEADDED:
                addDevice();
                break;
            case SDL_JOYDEVICEREMOVED:
                removeDevice();
                break;
            case SDL_CONTROLLERAXISMOTION:
                getAxisEvent();
                break;
            case SDL_JOYBUTTONUP:
                getButtonEvent();
                break;
            case SDL_JOYBUTTONDOWN:
                getButtonEvent();
                break;
            case SDL_JOYHATMOTION:
                getHatEvent();
                break;
            }
        }
        msleep(10);
    }
}

void SdlDevices::getAxisEvent()
{
    axis_event.axis = sdl_event.caxis.axis;
    axis_event.value = ((qreal)sdl_event.caxis.value)/32767;
    axis_event.joystick = getDevice (sdl_event.cdevice.which);

    emit axisEventOccured(*pointer);
}
void SdlDevices::getHatEvent()
{
    SHatEvent hat_event;
    const SHatEvent *pointer = &hat_event;

    hat_event.hat = sdl_event.jhat.hat;

    switch (sdl_event.jhat.value)
    {
        case SDL_HAT_RIGHTUP:
            hat_event.angle = 45;
            break;
        case SDL_HAT_RIGHTDOWN:
            hat_event.angle = 135;
            break;
        case SDL_HAT_LEFTDOWN:
            hat_event.angle = 225;
            break;
        case SDL_HAT_LEFTUP:
            hat_event.angle = 315;
            break;
        case SDL_HAT_UP:
            hat_event.angle = 0;
            break;
        case SDL_HAT_RIGHT:
            hat_event.angle = 90;
            break;
        case SDL_HAT_DOWN:
            hat_event.angle = 180;
            break;
        case SDL_HAT_LEFT:
            hat_event.angle = 270;
            break;
        default:
            hat_event.angle = -1;
            break;
    }

    hat_event.joystick = getDevice(sdl_event.jdevice.which);

    emit hatEventOccured(*pointer);
}
void SdlDevices::getButtonEvent()
{
    SButtonEvent button_event;
    const SButtonEvent *pointer = &button_event;

    button_event.button = sdl_event.jbutton.button;
    button_event.pressed = sdl_event.jbutton.state == SDL_PRESSED;
    button_event.joystick = getDevice (sdl_event.jdevice.which);

    emit buttonEventOccured(*pointer);
}

SDevice* SdlDevices::getDevice (int id)
{
    SDevice* joystick = devicesList.at(id);

    return joystick;
}

void SdlDevices::addDevice()
{
    static int counter = 0;

    if (!SDL_IsGameController (sdl_event.cdevice.which)) {
        SDL_Joystick* device = SDL_JoystickOpen (sdl_event.jdevice.which);

        if (device) {
            char id [1024];
            SDL_JoystickGetGUIDString (SDL_JoystickGetGUID (device), id, sizeof(id));

            QString mapping = QString(id) + QString(SDL_JoystickName(device)) + genericMapping;

            SDL_GameControllerAddMapping(mapping.toStdString().c_str());
            SDL_JoystickClose (device);
        }
    }

    SDL_GameControllerOpen(sdl_event.cdevice.which);

    SDevice* joystick = new SDevice;
    SDL_Joystick* sdl_joystick = SDL_JoystickOpen(sdl_event.jdevice.which);

    joystick->id = counter;
    joystick->valid = false;

    if (sdl_joystick) {
        joystick->name = SDL_JoystickName(sdl_joystick);
        joystick->valid = true;

        /* Get joystick properties */
        joystick->hats = SDL_JoystickNumHats(sdl_joystick);
        joystick->axes = SDL_JoystickNumAxes(sdl_joystick);
        joystick->buttons = SDL_JoystickNumButtons(sdl_joystick);

        qDebug() << "Added new device at position: " + QString::number(counter);

        devicesList.append(joystick);

        counter++;
    }

    else
        qWarning() << "Cannot add new device.";

}

void SdlDevices::removeDevice(int id)
{
    SDevice* joystick;
    if (id == -1)
        joystick = devicesList.at(sdl_event.jdevice.which);
    else
        joystick = devicesList.at(id);

    joystick->name = "Removed";
    joystick->valid = false;

    SDL_Joystick *tempJoy;
    tempJoy = SDL_JoystickOpen(joystick->id);
    SDL_JoystickClose(tempJoy);
}

QList<SDevice *> SdlDevices::getDevicesList() const
{
    return devicesList;
}

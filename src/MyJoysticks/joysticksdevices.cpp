#include "joysticksdevices.h"

JoyDevices::JoyDevices(QObject *parent) : QObject(parent)
{
    qRegisterMetaType<SDevice>("SDevice");
    qRegisterMetaType<SHatEvent>("SHatEvent");
    qRegisterMetaType<SAxisEvent>("SAxisEvent");
    qRegisterMetaType<SButtonEvent>("SButtonEvent");

    activeDevice = new SDevice();
    activeDevice->valid = false;
    devices = new QList<SDevice*>();

    sdlDevices = new SdlDevices();
    connect(sdlDevices, &SdlDevices::hatEventOccured, this, &JoyDevices::onHatEvent);
    connect(sdlDevices, &SdlDevices::axisEventOccured, this, &JoyDevices::onAxisEvent);
    connect(sdlDevices, &SdlDevices::buttonEventOccured, this, &JoyDevices::onButtonEvent);

//    virtualJoystick = new VirtualJoystick (this);
//    connect (virtualJoystick, &VirtualJoystick::hatEventOccured, this, &MyJoysticks::onHatEvent);
//    connect (virtualJoystick, &VirtualJoystick::axisEventOccured, this, &MyJoysticks::onAxisEvent);
//    connect (virtualJoystick, &VirtualJoystick::buttonEventOccured, this, &MyJoysticks::onButtonEvent);

}

JoyDevices::~JoyDevices()
{

}

QStringList JoyDevices::getDevicesByName() const
{
    devices->clear();
    devices->append(sdlDevices->getDevicesList());
    //devices->append(virtualJoystick->getDevice());

    QStringList list;

    for (SDevice *d : *devices)
    {
        if (d->valid)
        {
            list.append(d->name);
        }
    }
    return list;
}

void JoyDevices::onHatEvent (const SHatEvent &event)
{
    if ( (activeDevice->valid) & (event.joystick->id == activeDevice->id) )
        emit hatChanged (event.hat, event.angle);
}

void JoyDevices::onAxisEvent (const SAxisEvent &event)
{
    if ( (activeDevice->valid) & (event.joystick->id == activeDevice->id) )
        emit axisChanged(event.axis, event.value);
}

void JoyDevices::onButtonEvent (const SButtonEvent &event)
{
    if ( (activeDevice->valid) & (event.joystick->id == activeDevice->id) )
        emit buttonChanged(event.button, event.pressed);
}

SDevice *JoyDevices::getActiveDevice() const
{
    return activeDevice;
}

QString JoyDevices::getActiveDeviceName()
{
    return activeDevice->name;
}

void JoyDevices::setActiveDeviceByName(QString name)
{
    for (SDevice *d : *devices){
        if (d->name == name)
        {
            activeDevice = d;
            return;
        }
    }
}


#include <math.h>
#include "keyboard.h"

VirtualJoystick::VirtualJoystick(QObject* parent) : QObject (parent)
{
    axisRange = 1;

    device = new SDevice();

    device->axes = 4;
    device->hats = 1;
    device->buttons = 9;
    device->name = "Keyboard";
    device->id = -1;
    device->valid = true;

//    virtualKeyboard = new QDialog();
//    virtualKeyboard->setGeometry(100,100,250,50);
//    virtualKeyboard->setWindowTitle("Virtual Joystick - type here");
//    virtualKeyboard->show();
//    virtualKeyboard->installEventFilter(virtualKeyboard);
    qApp->installEventFilter(this);

}

SDevice* VirtualJoystick::getDevice()
{
    return device;
}

void VirtualJoystick::readAxes (int key, bool pressed)
{
    int axis = -1;
    qreal value = axisRange * (pressed ? 1 : 0);

    /* Horizontal axis on thumb 1 */
    if (key == Qt::Key_D)
        axis = 0;
    else if (key == Qt::Key_A) {
        axis = 0;
        value *= -1;
    }

    /* Vertical axis on thumb 1 */
    if (key == Qt::Key_S)
        axis = 1;
    else if (key == Qt::Key_W) {
        axis = 1;
        value *= -1;
    }

    /* Trigger 1 */
    if (key == Qt::Key_E)
        axis = 2;
    else if (key == Qt::Key_Q) {
        axis = 2;
        value *= -1;
    }

    /* Trigger 2 */
    if (key == Qt::Key_O)
        axis = 3;
    else if (key == Qt::Key_U) {
        axis = 3;
        value *= -1;
    }

    /* Horizontal axis on thumb 2 */
    if (key == Qt::Key_L)
        axis = 4;
    else if (key == Qt::Key_J) {
        axis = 4;
        value *= -1;
    }

    /* Vertical axis on thumb 2 */
    if (key == Qt::Key_I)
        axis = 5;
    else if (key == Qt::Key_K) {
        axis = 5;
        value *= -1;
    }

    if (axis != -1) {
        SAxisEvent event;
        event.axis     = axis;
        event.value    = value;
        //event.joystick = joystick();

        emit axisEventOccured (event);
    }
}

/**
 * Polls the keyboard events and if required, reports a change in the POV/hat
 * values of the virtual joystick device.
 */
void VirtualJoystick::readPOVs (int key, bool pressed)
{
    int angle = 0;

    if (key == Qt::Key_Up)
        angle = 360;
    else if (key == Qt::Key_Right)
        angle = 90;
    else if (key == Qt::Key_Left)
        angle = 270;
    else if (key == Qt::Key_Down)
        angle = 180;

    if (!pressed)
        angle = 0;

    SHatEvent event;
    event.hat      = 0;
    event.angle    = angle;

    emit hatEventOccured (event);
}

/**
 * Polls the keyboard events and if required, reports a change in the button
 * values of the virtual joystick device.
 */
void VirtualJoystick::readButtons (int key, bool pressed)
{
    int button = -1;

    if (key == Qt::Key_0)
        button = 0;
    else if (key == Qt::Key_1)
        button = 1;
    else if (key == Qt::Key_2)
        button = 2;
    else if (key == Qt::Key_3)
        button = 3;
    else if (key == Qt::Key_4)
        button = 4;
    else if (key == Qt::Key_5)
        button = 5;
    else if (key == Qt::Key_6)
        button = 6;
    else if (key == Qt::Key_7)
        button = 7;
    else if (key == Qt::Key_8)
        button = 8;
    else if (key == Qt::Key_9)
        button = 9;

    if (button != -1) {
        SButtonEvent event;
        event.button   = button;
        event.pressed  = pressed;
        //event.joystick = joystick();

        emit buttonEventOccured (event);
    }
}

bool VirtualJoystick::eventFilter(QObject *, QEvent *event)
{
    QKeyEvent *e;
    switch (event->type()) {
    case QEvent::KeyPress:
        e = static_cast <QKeyEvent*> (event);
        readPOVs (e->key(), true);
        readAxes (e->key(), true);
        readButtons (e->key(), true);
        break;
    case QEvent::KeyRelease:
        e = static_cast <QKeyEvent*> (event);
        readPOVs (e->key(), false);
        readAxes (e->key(), false);
        readButtons (e->key(), false);
        break;
    default:
        break;
    }

    return true;
}


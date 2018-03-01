#ifndef JOYDEVICES_H
#define JOYDEVICES_H

#include <QObject>
#include <QStringList>
#include "./MyJoysticks/keyboard.h"
#include "./MyJoysticks/sdldevices.h"
#include "./MyJoysticks/structs.h"

class JoyDevices : public QObject
{
    Q_OBJECT
public:
    explicit JoyDevices(QObject *parent = 0);
    ~JoyDevices();

public:
    QStringList getDevicesByName() const;
    SDevice *getActiveDevice() const;
    QString getActiveDeviceName();
    void setActiveDeviceByName(QString name);

signals:
    void hatChanged(const int hat, const int angle);
    void axisChanged(const int axis, const double value);
    void buttonChanged(const int button, const bool pressed);

private slots:
    void onHatEvent(const SHatEvent &event);
    void onAxisEvent(const SAxisEvent &event);
    void onButtonEvent(const SButtonEvent &event);

private:
    SdlDevices *sdlDevices;
    VirtualJoystick *virtualJoystick;

    QList<SDevice*> *devices;
    SDevice *activeDevice;
};

#endif

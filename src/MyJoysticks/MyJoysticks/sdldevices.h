#ifndef SDLDEVICES_H
#define SDLDEVICES_H

#include <QObject>
#include <QThread>
#include <QList>
#include <SDL.h>
#include "structs.h"

class SdlDevices : public QThread
{
    Q_OBJECT
public:
    SdlDevices();
    ~SdlDevices();
    QList<SDevice *> getDevicesList() const;
protected:
    virtual void run();
signals:
    void hatEventOccured (const SHatEvent& event);
    void axisEventOccured (const SAxisEvent& event);
    void buttonEventOccured (const SButtonEvent& event);

private:
    SDL_Event sdl_event;
    SAxisEvent axis_event;
    const SAxisEvent *pointer = &axis_event;
    QList<SDevice*> devicesList;

    QString genericMapping;

    void getAxisEvent();
    void getHatEvent();
    void getButtonEvent();

    void addDevice();
    void removeDevice(int id=-1);
    SDevice *getDevice(int id);
};

#endif // SDLDEVICES_H

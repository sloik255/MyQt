/*
 * Copyright (c) 2015-2017 Alex Spataru <alex_spataru@outlook.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef COMMON_H
#define COMMON_H

#include <QString>
#include <QList>
#include <QtCore>

#include <QDebug>

typedef struct {
    qint32  id;
    QString name;
    uint    hats;
    uint    axes;
    uint    buttons;
    bool    valid;
} SDevice;

typedef struct {
    qint32      hat;
    qint32      angle;
    SDevice* joystick;
} SHatEvent;

typedef struct {
    qint32      axis;
    qreal       value;
    SDevice* joystick;
} SAxisEvent;


typedef struct {
    qint32 button;
    bool pressed;
    SDevice* joystick;
} SButtonEvent;

Q_DECLARE_METATYPE(SDevice)
Q_DECLARE_METATYPE(SHatEvent)
Q_DECLARE_METATYPE(SAxisEvent)
Q_DECLARE_METATYPE(SButtonEvent)

struct QJoystickDevice {
    qint32          id;
    QString         name;
    QList<qint32>   povs;
    QList<qreal>    axes;
    QList<bool>     buttons;
    bool            blacklisted;
};

struct QJoystickRumble {
    quint32     length;
    qreal       strength;
    QJoystickDevice* joystick;
};

struct QJoystickPOVEvent {
    qint32      pov;
    qint32      angle;
    QJoystickDevice* joystick;
};

struct QJoystickAxisEvent {
    qint32      axis;
    qreal       value;
    QJoystickDevice* joystick;
};

struct QJoystickButtonEvent {
    qint32 button;
    bool pressed;
    QJoystickDevice* joystick;
};

#endif

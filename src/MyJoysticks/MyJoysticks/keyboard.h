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

#ifndef VIRTUALJOYSTICK_H
#define VIRTUALJOYSTICK_H

#include <QWidget>
#include <QKeyEvent>
#include <QApplication>
#include <QKeyEvent>
#include <QDialog>
#include "structs.h"

class VirtualJoystick : public QObject
{
    Q_OBJECT
public:
    VirtualJoystick(QObject* parent = Q_NULLPTR);

    SDevice *getDevice();

protected:
    virtual bool eventFilter (QObject* object, QEvent* event);
signals:
    void hatEventOccured (const SHatEvent& event);
    void axisEventOccured (const SAxisEvent& event);
    void buttonEventOccured (const SButtonEvent& event);

private:
    qreal axisRange;
    SDevice *device;
    QDialog *virtualKeyboard;
    void readButtons(int key, bool pressed);
    void readPOVs(int key, bool pressed);
    void readAxes(int key, bool pressed);
};

#endif

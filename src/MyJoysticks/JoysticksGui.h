#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include <QTimer>
#include <QTextEdit>
#include <joysticksdevices.h>

namespace Ui {
class JoysticksGui;
}

class JoysticksGui : public QDialog
{
    Q_OBJECT
public:
    explicit JoysticksGui(QWidget *parent = 0);
    ~JoysticksGui();

public:
    QString getActiveDeviceName();

signals:
    void joystickRefreshed();
    void joystickHatEvent(const int hat, const int angle);
    void joystickAxisEvent(const int axis, const double value);
    void joystickButtonEvent(const int button, const bool pressed);

public slots:
    void hatChanged(const int hat, const int angle);
    void axisChanged(const int axis, const qreal value);
    void buttonChanged(const int button, const bool pressed);

private slots:
    void updateJoysticks();
    void nameChanged(QString name);

private:
    Ui::JoysticksGui *ui;
    JoyDevices* myJoysticks;
    int currentJoystick = 0;
    QString currentJoystickName;
    QTextEdit *txt;


};

#endif // SETTINGSDIALOG_H

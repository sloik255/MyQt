#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <JoysticksGui.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void joystickRefreshed();
    void joystickHatEvent(const int hat, const int angle);
    void joystickAxisEvent(const int axis, const double value);
    void joystickButtonEvent(const int button, const bool pressed);

private:
    Ui::MainWindow *ui;
    JoysticksGui *joysticks;
};

#endif // MAINWINDOW_H

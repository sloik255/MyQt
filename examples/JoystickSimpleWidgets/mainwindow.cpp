#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    joysticks = new JoysticksGui(this);
    connect(joysticks, &JoysticksGui::joystickRefreshed, this, &MainWindow::joystickRefreshed);
    connect(joysticks, &JoysticksGui::joystickHatEvent, this, &MainWindow::joystickHatEvent);
    connect(joysticks, &JoysticksGui::joystickAxisEvent, this, &MainWindow::joystickAxisEvent);
    connect(joysticks, &JoysticksGui::joystickButtonEvent, this, &MainWindow::joystickButtonEvent);
    joysticks->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::joystickRefreshed()
{

}

void MainWindow::joystickHatEvent(const int hat, const int angle)
{

}

void MainWindow::joystickAxisEvent(const int axis, const double value)
{

}

void MainWindow::joystickButtonEvent(const int button, const bool pressed)
{

}

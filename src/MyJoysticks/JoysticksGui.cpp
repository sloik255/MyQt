#include "JoysticksGui.h"
#include "ui_joysticksgui.h"

JoysticksGui::JoysticksGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JoysticksGui)
{
    ui->setupUi(this);
    this->setWindowTitle("Joystick Settings");
    connect(ui->pushButton, &QPushButton::clicked, this, &JoysticksGui::updateJoysticks);
    connect(ui->joysticks_list, &QComboBox::currentTextChanged, this, &JoysticksGui::nameChanged);

    txt = new QTextEdit(this);

    ui->log_layout->addWidget(txt);
    myJoysticks = new JoyDevices();

    connect(myJoysticks, &JoyDevices::buttonChanged, this, &JoysticksGui::buttonChanged);
    connect(myJoysticks, &JoyDevices::axisChanged, this, &JoysticksGui::axisChanged);
    connect(myJoysticks, &JoyDevices::hatChanged, this, &JoysticksGui::hatChanged);
}

JoysticksGui::~JoysticksGui()
{
    delete ui;
}

QString JoysticksGui::getActiveDeviceName()
{
    return currentJoystickName;
}

void JoysticksGui::updateJoysticks()
{
    ui->joysticks_list->clear();
    currentJoystickName = "None";

    QString name;

    QStringList sl = myJoysticks->getDevicesByName();
    QString t = "Znaleziono " + QString::number(sl.size()) + " urządzeń: ";
    for (QString s : sl) {
        t.append(s);
        name = s;
        if (t.endsWith(" "))
            t.chop(1);
        t.append(", ");
    }
    t.chop(2);
    t.append(".");
    txt->append(t);

    ui->joysticks_list->addItems(sl);
    ui->joysticks_list->setCurrentIndex(0);

    myJoysticks->setActiveDeviceByName(name);
}

void JoysticksGui::nameChanged(QString name)
{
    myJoysticks->setActiveDeviceByName(name);
    currentJoystickName = name;
    emit joystickRefreshed();
}

void JoysticksGui::hatChanged(const int hat, const int angle)
{
    switch (hat) {
    case 0:
        ui->spinBox_hat->setValue(angle);
        break;
    default:
        break;
    }

    emit joystickHatEvent(hat, angle);
}

void JoysticksGui::axisChanged(const int axis, const qreal value)
{
    switch (axis) {
    case 0:
        ui->doubleSpinBox_0->setValue(value);
        ui->bar_axis_0->setValue(ui->doubleSpinBox_0->value()*100.0+100);
        break;
    case 1:
        ui->doubleSpinBox_1->setValue(value);
        ui->bar_axis_1->setValue(ui->doubleSpinBox_1->value()*100.0+100);
        break;
    case 2:
        ui->doubleSpinBox_2->setValue(value);
        ui->bar_axis_2->setValue(ui->doubleSpinBox_2->value()*100.0+100);
        break;
    case 4:
        ui->doubleSpinBox_3->setValue(value);
        ui->bar_axis_3->setValue(ui->doubleSpinBox_3->value()*100.0+100);
        break;
    default:
        break;
    }

    emit joystickAxisEvent(axis, value);

//    txt->append("Joystick changed AXIS " + QString::number(axis) +
//                    " Value to " + QString::number(value));
}

void JoysticksGui::buttonChanged(const int button, const bool pressed)
{
    if (pressed)
        ui->spinBox_buttons->setValue(button);
    else
        ui->spinBox_buttons->setValue(-1);

    emit joystickButtonEvent(button, pressed);
//    txt->append("Joystick changed BUTTON " + QString::number(button) +
//                    " State to " + QString::number(pressed));
}

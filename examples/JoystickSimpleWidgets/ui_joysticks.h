/********************************************************************************
** Form generated from reading UI file 'joysticks.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOYSTICKS_H
#define UI_JOYSTICKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_JoysticksGui
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *joysticks_list;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_1;
    QLabel *label_1;
    QDoubleSpinBox *doubleSpinBox_0;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_12;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QLabel *label_9;
    QSpinBox *spinBox_buttons;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_7;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *spinBox_hat;
    QProgressBar *bar_axis_0;
    QProgressBar *bar_axis_1;
    QProgressBar *bar_axis_2;
    QProgressBar *bar_axis_3;

    void setupUi(QDialog *JoysticksGui)
    {
        if (JoysticksGui->objectName().isEmpty())
            JoysticksGui->setObjectName(QStringLiteral("JoysticksGui"));
        JoysticksGui->resize(279, 362);
        gridLayout = new QGridLayout(JoysticksGui);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        joysticks_list = new QComboBox(JoysticksGui);
        joysticks_list->setObjectName(QStringLiteral("joysticks_list"));

        horizontalLayout_8->addWidget(joysticks_list);

        pushButton = new QPushButton(JoysticksGui);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        groupBox = new QGroupBox(JoysticksGui);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_9, 11, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 8, 0, 1, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setDecimals(3);
        doubleSpinBox_3->setMinimum(-1);
        doubleSpinBox_3->setMaximum(1);

        gridLayout_5->addWidget(doubleSpinBox_3, 11, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_5->addWidget(label_5, 5, 0, 1, 1);

        doubleSpinBox_1 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_1->setObjectName(QStringLiteral("doubleSpinBox_1"));
        doubleSpinBox_1->setDecimals(3);
        doubleSpinBox_1->setMinimum(-1);
        doubleSpinBox_1->setMaximum(1);

        gridLayout_5->addWidget(doubleSpinBox_1, 5, 2, 1, 1);

        label_1 = new QLabel(groupBox);
        label_1->setObjectName(QStringLiteral("label_1"));

        gridLayout_5->addWidget(label_1, 0, 0, 1, 1);

        doubleSpinBox_0 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_0->setObjectName(QStringLiteral("doubleSpinBox_0"));
        doubleSpinBox_0->setDecimals(3);
        doubleSpinBox_0->setMinimum(-1);
        doubleSpinBox_0->setMaximum(1);

        gridLayout_5->addWidget(doubleSpinBox_0, 0, 2, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setDecimals(3);
        doubleSpinBox_2->setMinimum(-1);
        doubleSpinBox_2->setMaximum(1);

        gridLayout_5->addWidget(doubleSpinBox_2, 8, 2, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_5->addWidget(label_8, 11, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_10, 8, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_11, 0, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_12, 5, 1, 1, 1);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_6->addWidget(label_9, 0, 0, 1, 1);

        spinBox_buttons = new QSpinBox(groupBox_4);
        spinBox_buttons->setObjectName(QStringLiteral("spinBox_buttons"));
        spinBox_buttons->setReadOnly(true);
        spinBox_buttons->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_buttons->setMinimum(-1);
        spinBox_buttons->setValue(-1);

        gridLayout_6->addWidget(spinBox_buttons, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 14, 0, 1, 3);

        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_7 = new QGridLayout(groupBox_5);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_7->addWidget(label_10, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        spinBox_hat = new QSpinBox(groupBox_5);
        spinBox_hat->setObjectName(QStringLiteral("spinBox_hat"));
        spinBox_hat->setReadOnly(true);
        spinBox_hat->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_hat->setMinimum(-1);
        spinBox_hat->setMaximum(360);
        spinBox_hat->setValue(-1);

        gridLayout_7->addWidget(spinBox_hat, 0, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_5, 15, 0, 1, 3);

        bar_axis_0 = new QProgressBar(groupBox);
        bar_axis_0->setObjectName(QStringLiteral("bar_axis_0"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bar_axis_0->sizePolicy().hasHeightForWidth());
        bar_axis_0->setSizePolicy(sizePolicy1);
        bar_axis_0->setMaximumSize(QSize(16777215, 10));
        bar_axis_0->setStyleSheet(QStringLiteral("QProgressBar { border: 1px solid grey; border-radius: 0px; text-align: center; } QProgressBar::chunk {background-color: rgb(0, 170, 255); width: 1px;}"));
        bar_axis_0->setMinimum(0);
        bar_axis_0->setMaximum(200);
        bar_axis_0->setValue(100);
        bar_axis_0->setTextVisible(false);
        bar_axis_0->setInvertedAppearance(false);

        gridLayout_5->addWidget(bar_axis_0, 1, 1, 1, 2);

        bar_axis_1 = new QProgressBar(groupBox);
        bar_axis_1->setObjectName(QStringLiteral("bar_axis_1"));
        sizePolicy1.setHeightForWidth(bar_axis_1->sizePolicy().hasHeightForWidth());
        bar_axis_1->setSizePolicy(sizePolicy1);
        bar_axis_1->setMaximumSize(QSize(16777215, 10));
        bar_axis_1->setStyleSheet(QStringLiteral("QProgressBar { border: 1px solid grey; border-radius: 0px; text-align: center; } QProgressBar::chunk {background-color: rgb(0, 170, 255); width: 1px;}"));
        bar_axis_1->setMinimum(0);
        bar_axis_1->setMaximum(200);
        bar_axis_1->setValue(100);
        bar_axis_1->setTextVisible(false);
        bar_axis_1->setInvertedAppearance(false);

        gridLayout_5->addWidget(bar_axis_1, 6, 1, 1, 2);

        bar_axis_2 = new QProgressBar(groupBox);
        bar_axis_2->setObjectName(QStringLiteral("bar_axis_2"));
        sizePolicy1.setHeightForWidth(bar_axis_2->sizePolicy().hasHeightForWidth());
        bar_axis_2->setSizePolicy(sizePolicy1);
        bar_axis_2->setMaximumSize(QSize(16777215, 10));
        bar_axis_2->setStyleSheet(QStringLiteral("QProgressBar { border: 1px solid grey; border-radius: 0px; text-align: center; } QProgressBar::chunk {background-color: rgb(0, 170, 255); width: 1px;}"));
        bar_axis_2->setMinimum(0);
        bar_axis_2->setMaximum(200);
        bar_axis_2->setValue(100);
        bar_axis_2->setTextVisible(false);
        bar_axis_2->setInvertedAppearance(false);

        gridLayout_5->addWidget(bar_axis_2, 9, 1, 1, 2);

        bar_axis_3 = new QProgressBar(groupBox);
        bar_axis_3->setObjectName(QStringLiteral("bar_axis_3"));
        sizePolicy1.setHeightForWidth(bar_axis_3->sizePolicy().hasHeightForWidth());
        bar_axis_3->setSizePolicy(sizePolicy1);
        bar_axis_3->setMaximumSize(QSize(16777215, 10));
        bar_axis_3->setStyleSheet(QStringLiteral("QProgressBar { border: 1px solid grey; border-radius: 0px; text-align: center; } QProgressBar::chunk {background-color: rgb(0, 170, 255); width: 1px;}"));
        bar_axis_3->setMinimum(0);
        bar_axis_3->setMaximum(200);
        bar_axis_3->setValue(100);
        bar_axis_3->setTextVisible(false);
        bar_axis_3->setInvertedAppearance(false);

        gridLayout_5->addWidget(bar_axis_3, 12, 1, 1, 2);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);


        retranslateUi(JoysticksGui);

        QMetaObject::connectSlotsByName(JoysticksGui);
    } // setupUi

    void retranslateUi(QDialog *JoysticksGui)
    {
        JoysticksGui->setWindowTitle(QApplication::translate("JoysticksGui", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("JoysticksGui", "odswie\305\274 list\304\231", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("JoysticksGui", "Axes", Q_NULLPTR));
        label_4->setText(QApplication::translate("JoysticksGui", "Axis 2", Q_NULLPTR));
        label_5->setText(QApplication::translate("JoysticksGui", "Axis 1", Q_NULLPTR));
        label_1->setText(QApplication::translate("JoysticksGui", "Axis 0", Q_NULLPTR));
        label_8->setText(QApplication::translate("JoysticksGui", "Axis 3", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("JoysticksGui", "Buttons", Q_NULLPTR));
        label_9->setText(QApplication::translate("JoysticksGui", "Button pressed:", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("JoysticksGui", "Hats", Q_NULLPTR));
        label_10->setText(QApplication::translate("JoysticksGui", "     Hat 0 angle:", Q_NULLPTR));
        spinBox_hat->setSuffix(QApplication::translate("JoysticksGui", " deg.", Q_NULLPTR));
        bar_axis_0->setFormat(QString());
        bar_axis_1->setFormat(QString());
        bar_axis_2->setFormat(QString());
        bar_axis_3->setFormat(QString());
    } // retranslateUi

};

namespace Ui {
    class JoysticksGui: public Ui_JoysticksGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOYSTICKS_H

/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

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

class Ui_SettingsDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *joysticks_2;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_5;
    QLabel *label_1;
    QDoubleSpinBox *doubleSpinBox_6;
    QDoubleSpinBox *doubleSpinBox_7;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_12;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QLabel *label_9;
    QSpinBox *spinBox_buttons_2;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_7;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *spinBox_hat_2;
    QProgressBar *bar_axis_4;
    QProgressBar *bar_axis_5;
    QProgressBar *bar_axis_6;
    QProgressBar *bar_axis_7;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->resize(279, 362);
        gridLayout = new QGridLayout(SettingsDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        joysticks_2 = new QComboBox(SettingsDialog);
        joysticks_2->setObjectName(QStringLiteral("joysticks_2"));

        horizontalLayout_8->addWidget(joysticks_2);

        pushButton_2 = new QPushButton(SettingsDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        groupBox = new QGroupBox(SettingsDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_9, 11, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 8, 0, 1, 1);

        doubleSpinBox_4 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));
        doubleSpinBox_4->setDecimals(3);
        doubleSpinBox_4->setMinimum(-1);
        doubleSpinBox_4->setMaximum(1);

        gridLayout_5->addWidget(doubleSpinBox_4, 11, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_5->addWidget(label_5, 5, 0, 1, 1);

        doubleSpinBox_5 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_5->setObjectName(QStringLiteral("doubleSpinBox_5"));
        doubleSpinBox_5->setDecimals(3);
        doubleSpinBox_5->setMinimum(-1);
        doubleSpinBox_5->setMaximum(1);

        gridLayout_5->addWidget(doubleSpinBox_5, 5, 2, 1, 1);

        label_1 = new QLabel(groupBox);
        label_1->setObjectName(QStringLiteral("label_1"));

        gridLayout_5->addWidget(label_1, 0, 0, 1, 1);

        doubleSpinBox_6 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_6->setObjectName(QStringLiteral("doubleSpinBox_6"));
        doubleSpinBox_6->setDecimals(3);
        doubleSpinBox_6->setMinimum(-1);
        doubleSpinBox_6->setMaximum(1);

        gridLayout_5->addWidget(doubleSpinBox_6, 0, 2, 1, 1);

        doubleSpinBox_7 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_7->setObjectName(QStringLiteral("doubleSpinBox_7"));
        doubleSpinBox_7->setDecimals(3);
        doubleSpinBox_7->setMinimum(-1);
        doubleSpinBox_7->setMaximum(1);

        gridLayout_5->addWidget(doubleSpinBox_7, 8, 2, 1, 1);

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

        spinBox_buttons_2 = new QSpinBox(groupBox_4);
        spinBox_buttons_2->setObjectName(QStringLiteral("spinBox_buttons_2"));
        spinBox_buttons_2->setReadOnly(true);
        spinBox_buttons_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_buttons_2->setMinimum(-1);
        spinBox_buttons_2->setValue(-1);

        gridLayout_6->addWidget(spinBox_buttons_2, 0, 1, 1, 1);

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

        spinBox_hat_2 = new QSpinBox(groupBox_5);
        spinBox_hat_2->setObjectName(QStringLiteral("spinBox_hat_2"));
        spinBox_hat_2->setReadOnly(true);
        spinBox_hat_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_hat_2->setMinimum(-1);
        spinBox_hat_2->setMaximum(360);
        spinBox_hat_2->setValue(-1);

        gridLayout_7->addWidget(spinBox_hat_2, 0, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_5, 15, 0, 1, 3);

        bar_axis_4 = new QProgressBar(groupBox);
        bar_axis_4->setObjectName(QStringLiteral("bar_axis_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bar_axis_4->sizePolicy().hasHeightForWidth());
        bar_axis_4->setSizePolicy(sizePolicy1);
        bar_axis_4->setMaximumSize(QSize(16777215, 10));
        bar_axis_4->setStyleSheet(QStringLiteral("QProgressBar { border: 1px solid grey; border-radius: 0px; text-align: center; } QProgressBar::chunk {background-color: rgb(0, 170, 255); width: 1px;}"));
        bar_axis_4->setMinimum(0);
        bar_axis_4->setMaximum(200);
        bar_axis_4->setValue(100);
        bar_axis_4->setTextVisible(false);
        bar_axis_4->setInvertedAppearance(false);

        gridLayout_5->addWidget(bar_axis_4, 1, 1, 1, 2);

        bar_axis_5 = new QProgressBar(groupBox);
        bar_axis_5->setObjectName(QStringLiteral("bar_axis_5"));
        sizePolicy1.setHeightForWidth(bar_axis_5->sizePolicy().hasHeightForWidth());
        bar_axis_5->setSizePolicy(sizePolicy1);
        bar_axis_5->setMaximumSize(QSize(16777215, 10));
        bar_axis_5->setStyleSheet(QStringLiteral("QProgressBar { border: 1px solid grey; border-radius: 0px; text-align: center; } QProgressBar::chunk {background-color: rgb(0, 170, 255); width: 1px;}"));
        bar_axis_5->setMinimum(0);
        bar_axis_5->setMaximum(200);
        bar_axis_5->setValue(100);
        bar_axis_5->setTextVisible(false);
        bar_axis_5->setInvertedAppearance(false);

        gridLayout_5->addWidget(bar_axis_5, 6, 1, 1, 2);

        bar_axis_6 = new QProgressBar(groupBox);
        bar_axis_6->setObjectName(QStringLiteral("bar_axis_6"));
        sizePolicy1.setHeightForWidth(bar_axis_6->sizePolicy().hasHeightForWidth());
        bar_axis_6->setSizePolicy(sizePolicy1);
        bar_axis_6->setMaximumSize(QSize(16777215, 10));
        bar_axis_6->setStyleSheet(QStringLiteral("QProgressBar { border: 1px solid grey; border-radius: 0px; text-align: center; } QProgressBar::chunk {background-color: rgb(0, 170, 255); width: 1px;}"));
        bar_axis_6->setMinimum(0);
        bar_axis_6->setMaximum(200);
        bar_axis_6->setValue(100);
        bar_axis_6->setTextVisible(false);
        bar_axis_6->setInvertedAppearance(false);

        gridLayout_5->addWidget(bar_axis_6, 9, 1, 1, 2);

        bar_axis_7 = new QProgressBar(groupBox);
        bar_axis_7->setObjectName(QStringLiteral("bar_axis_7"));
        sizePolicy1.setHeightForWidth(bar_axis_7->sizePolicy().hasHeightForWidth());
        bar_axis_7->setSizePolicy(sizePolicy1);
        bar_axis_7->setMaximumSize(QSize(16777215, 10));
        bar_axis_7->setStyleSheet(QStringLiteral("QProgressBar { border: 1px solid grey; border-radius: 0px; text-align: center; } QProgressBar::chunk {background-color: rgb(0, 170, 255); width: 1px;}"));
        bar_axis_7->setMinimum(0);
        bar_axis_7->setMaximum(200);
        bar_axis_7->setValue(100);
        bar_axis_7->setTextVisible(false);
        bar_axis_7->setInvertedAppearance(false);

        gridLayout_5->addWidget(bar_axis_7, 12, 1, 1, 2);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);


        retranslateUi(SettingsDialog);

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Dialog", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SettingsDialog", "odswie\305\274 list\304\231", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SettingsDialog", "Axes", Q_NULLPTR));
        label_4->setText(QApplication::translate("SettingsDialog", "Axis 2", Q_NULLPTR));
        label_5->setText(QApplication::translate("SettingsDialog", "Axis 1", Q_NULLPTR));
        label_1->setText(QApplication::translate("SettingsDialog", "Axis 0", Q_NULLPTR));
        label_8->setText(QApplication::translate("SettingsDialog", "Axis 3", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("SettingsDialog", "Buttons", Q_NULLPTR));
        label_9->setText(QApplication::translate("SettingsDialog", "Button pressed:", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("SettingsDialog", "Hats", Q_NULLPTR));
        label_10->setText(QApplication::translate("SettingsDialog", "     Hat 0 angle:", Q_NULLPTR));
        spinBox_hat_2->setSuffix(QApplication::translate("SettingsDialog", " deg.", Q_NULLPTR));
        bar_axis_4->setFormat(QString());
        bar_axis_5->setFormat(QString());
        bar_axis_6->setFormat(QString());
        bar_axis_7->setFormat(QString());
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'wiimoteform.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIIMOTEFORM_H
#define UI_WIIMOTEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WiimoteForm
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *powerButton;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *accButton;
    QToolButton *irButton;
    QToolButton *rumbleButton;
    QSpacerItem *horizontalSpacer_5;
    QProgressBar *powerBar;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *xEdit;
    QLineEdit *yEdit;
    QLineEdit *zEdit;
    QSpacerItem *verticalSpacer_5;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_10;
    QToolButton *leftButton;
    QToolButton *rightButton;
    QToolButton *downButton;
    QToolButton *upButton;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *verticalLayout_2;
    QToolButton *aButton;
    QToolButton *bButton;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_8;
    QToolButton *minusButton;
    QToolButton *homeButton;
    QToolButton *plusButton;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout;
    QToolButton *oneButton;
    QToolButton *twoButton;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_14;
    QToolButton *led1Button;
    QSpacerItem *horizontalSpacer;
    QToolButton *led2Button;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *led3Button;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *led4Button;
    QSpacerItem *horizontalSpacer_15;

    void setupUi(QWidget *WiimoteForm)
    {
        if (WiimoteForm->objectName().isEmpty())
            WiimoteForm->setObjectName(QStringLiteral("WiimoteForm"));
        WiimoteForm->resize(199, 517);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WiimoteForm->sizePolicy().hasHeightForWidth());
        WiimoteForm->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(WiimoteForm);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        powerButton = new QToolButton(WiimoteForm);
        powerButton->setObjectName(QStringLiteral("powerButton"));
        powerButton->setEnabled(false);
        powerButton->setCheckable(true);
        powerButton->setChecked(true);

        horizontalLayout_3->addWidget(powerButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        accButton = new QToolButton(WiimoteForm);
        accButton->setObjectName(QStringLiteral("accButton"));
        accButton->setCheckable(true);

        horizontalLayout_3->addWidget(accButton);

        irButton = new QToolButton(WiimoteForm);
        irButton->setObjectName(QStringLiteral("irButton"));
        irButton->setCheckable(true);

        horizontalLayout_3->addWidget(irButton);

        rumbleButton = new QToolButton(WiimoteForm);
        rumbleButton->setObjectName(QStringLiteral("rumbleButton"));
        rumbleButton->setCheckable(true);

        horizontalLayout_3->addWidget(rumbleButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_3);

        powerBar = new QProgressBar(WiimoteForm);
        powerBar->setObjectName(QStringLiteral("powerBar"));
        powerBar->setValue(0);

        verticalLayout_3->addWidget(powerBar);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        xEdit = new QLineEdit(WiimoteForm);
        xEdit->setObjectName(QStringLiteral("xEdit"));

        horizontalLayout_6->addWidget(xEdit);

        yEdit = new QLineEdit(WiimoteForm);
        yEdit->setObjectName(QStringLiteral("yEdit"));

        horizontalLayout_6->addWidget(yEdit);

        zEdit = new QLineEdit(WiimoteForm);
        zEdit->setObjectName(QStringLiteral("zEdit"));

        horizontalLayout_6->addWidget(zEdit);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 1, 0, 1, 1);

        leftButton = new QToolButton(WiimoteForm);
        leftButton->setObjectName(QStringLiteral("leftButton"));
        leftButton->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leftButton->sizePolicy().hasHeightForWidth());
        leftButton->setSizePolicy(sizePolicy1);
        leftButton->setCheckable(true);

        gridLayout->addWidget(leftButton, 1, 1, 1, 1);

        rightButton = new QToolButton(WiimoteForm);
        rightButton->setObjectName(QStringLiteral("rightButton"));
        rightButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(rightButton->sizePolicy().hasHeightForWidth());
        rightButton->setSizePolicy(sizePolicy1);
        rightButton->setCheckable(true);

        gridLayout->addWidget(rightButton, 1, 3, 1, 1);

        downButton = new QToolButton(WiimoteForm);
        downButton->setObjectName(QStringLiteral("downButton"));
        downButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(downButton->sizePolicy().hasHeightForWidth());
        downButton->setSizePolicy(sizePolicy1);
        downButton->setCheckable(true);

        gridLayout->addWidget(downButton, 2, 2, 1, 1);

        upButton = new QToolButton(WiimoteForm);
        upButton->setObjectName(QStringLiteral("upButton"));
        upButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(upButton->sizePolicy().hasHeightForWidth());
        upButton->setSizePolicy(sizePolicy1);
        upButton->setCheckable(true);

        gridLayout->addWidget(upButton, 0, 2, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_11, 1, 4, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        aButton = new QToolButton(WiimoteForm);
        aButton->setObjectName(QStringLiteral("aButton"));
        aButton->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(aButton->sizePolicy().hasHeightForWidth());
        aButton->setSizePolicy(sizePolicy2);
        aButton->setCheckable(true);

        verticalLayout_2->addWidget(aButton);

        bButton = new QToolButton(WiimoteForm);
        bButton->setObjectName(QStringLiteral("bButton"));
        bButton->setEnabled(true);
        sizePolicy2.setHeightForWidth(bButton->sizePolicy().hasHeightForWidth());
        bButton->setSizePolicy(sizePolicy2);
        bButton->setCheckable(true);

        verticalLayout_2->addWidget(bButton);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_13);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        minusButton = new QToolButton(WiimoteForm);
        minusButton->setObjectName(QStringLiteral("minusButton"));
        minusButton->setEnabled(true);
        minusButton->setCheckable(true);

        horizontalLayout_2->addWidget(minusButton);

        homeButton = new QToolButton(WiimoteForm);
        homeButton->setObjectName(QStringLiteral("homeButton"));
        homeButton->setEnabled(true);
        homeButton->setCheckable(true);

        horizontalLayout_2->addWidget(homeButton);

        plusButton = new QToolButton(WiimoteForm);
        plusButton->setObjectName(QStringLiteral("plusButton"));
        plusButton->setEnabled(true);
        plusButton->setCheckable(true);

        horizontalLayout_2->addWidget(plusButton);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        oneButton = new QToolButton(WiimoteForm);
        oneButton->setObjectName(QStringLiteral("oneButton"));
        oneButton->setEnabled(true);
        oneButton->setCheckable(true);

        verticalLayout->addWidget(oneButton);

        twoButton = new QToolButton(WiimoteForm);
        twoButton->setObjectName(QStringLiteral("twoButton"));
        twoButton->setEnabled(true);
        twoButton->setCheckable(true);

        verticalLayout->addWidget(twoButton);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_14);

        led1Button = new QToolButton(WiimoteForm);
        led1Button->setObjectName(QStringLiteral("led1Button"));
        led1Button->setCheckable(true);

        horizontalLayout->addWidget(led1Button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        led2Button = new QToolButton(WiimoteForm);
        led2Button->setObjectName(QStringLiteral("led2Button"));
        led2Button->setCheckable(true);

        horizontalLayout->addWidget(led2Button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        led3Button = new QToolButton(WiimoteForm);
        led3Button->setObjectName(QStringLiteral("led3Button"));
        led3Button->setCheckable(true);

        horizontalLayout->addWidget(led3Button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        led4Button = new QToolButton(WiimoteForm);
        led4Button->setObjectName(QStringLiteral("led4Button"));
        led4Button->setCheckable(true);

        horizontalLayout->addWidget(led4Button);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_15);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(WiimoteForm);

        QMetaObject::connectSlotsByName(WiimoteForm);
    } // setupUi

    void retranslateUi(QWidget *WiimoteForm)
    {
        WiimoteForm->setWindowTitle(QApplication::translate("WiimoteForm", "Form", 0));
        powerButton->setText(QApplication::translate("WiimoteForm", "Power", 0));
        accButton->setText(QApplication::translate("WiimoteForm", "ACC", 0));
        irButton->setText(QApplication::translate("WiimoteForm", "IR", 0));
        rumbleButton->setText(QApplication::translate("WiimoteForm", "Rumble", 0));
        leftButton->setText(QApplication::translate("WiimoteForm", "Left", 0));
        rightButton->setText(QApplication::translate("WiimoteForm", "Right", 0));
        downButton->setText(QApplication::translate("WiimoteForm", "Down", 0));
        upButton->setText(QApplication::translate("WiimoteForm", "Up", 0));
        aButton->setText(QApplication::translate("WiimoteForm", "A", 0));
        bButton->setText(QApplication::translate("WiimoteForm", "B", 0));
        minusButton->setText(QApplication::translate("WiimoteForm", "-", 0));
        homeButton->setText(QApplication::translate("WiimoteForm", "Home", 0));
        plusButton->setText(QApplication::translate("WiimoteForm", "+", 0));
        oneButton->setText(QApplication::translate("WiimoteForm", "1", 0));
        twoButton->setText(QApplication::translate("WiimoteForm", "2", 0));
        led1Button->setText(QApplication::translate("WiimoteForm", "...", 0));
        led2Button->setText(QApplication::translate("WiimoteForm", "...", 0));
        led3Button->setText(QApplication::translate("WiimoteForm", "...", 0));
        led4Button->setText(QApplication::translate("WiimoteForm", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class WiimoteForm: public Ui_WiimoteForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIIMOTEFORM_H

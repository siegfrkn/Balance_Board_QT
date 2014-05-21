#include "wiimoteform.h"
#include "ui_wiimoteform.h"

WiimoteForm::WiimoteForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WiimoteForm)
{
    ui->setupUi(this);
}

WiimoteForm::~WiimoteForm()
{
    delete ui;
}

void WiimoteForm::setUpButton(bool isSet)
{
  ui->upButton->setChecked(isSet);
}

void WiimoteForm::setDownButton(bool  isSet)
{
  ui->downButton->setChecked(isSet);
}

void WiimoteForm::setRightButton(bool  isSet)
{
  ui->rightButton->setChecked(isSet);
}

void WiimoteForm::setLeftButton(bool isSet)
{
  ui->leftButton->setChecked(isSet);
}

void WiimoteForm::setAButton(bool isSet)
{
  ui->aButton->setChecked(isSet);
}

void WiimoteForm::setBButton(bool isSet)
{
  ui->bButton->setChecked(isSet);
}

void WiimoteForm::setMinusButton(bool isSet)
{
  ui->minusButton->setChecked(isSet);
}

void WiimoteForm::setPlusButton(bool isSet)
{
  ui->plusButton->setChecked(isSet);
}

void WiimoteForm::setHomeButton(bool isSet)
{
  ui->homeButton->setChecked(isSet);
}

void WiimoteForm::setOneButton(bool isSet)
{
  ui->oneButton->setChecked(isSet);
}

void WiimoteForm::setTwoButton(bool isSet)
{
  ui->twoButton->setChecked(isSet);
}

void WiimoteForm::setXAcc(double val)
{
  ui->xEdit->setText(QString::number(val));
}

void WiimoteForm::setYAcc(double val)
{
  ui->yEdit->setText(QString::number(val));
}

void WiimoteForm::setZAcc(double val)
{
  ui->zEdit->setText(QString::number(val));
}

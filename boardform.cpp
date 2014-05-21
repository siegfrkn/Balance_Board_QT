#include "BoardForm.h"
#include "ui_BoardForm.h"

BoardForm::BoardForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BoardForm)
{
    ui->setupUi(this);
}

BoardForm::~BoardForm()
{
    delete ui;
}


// Initialize and set all variables to null and default values
void BoardForm::setUpButton(bool isSet)
{
  //ui->upButton->setChecked(isSet);
}

void BoardForm::setDownButton(bool  isSet)
{
  //ui->downButton->setChecked(isSet);
}

void BoardForm::setRightButton(bool  isSet)
{
  //ui->rightButton->setChecked(isSet);
}

void BoardForm::setLeftButton(bool isSet)
{
  //ui->leftButton->setChecked(isSet);
}

void BoardForm::setAButton(bool isSet)
{
  //ui->aButton->setChecked(isSet);
}

void BoardForm::setBButton(bool isSet)
{
  //ui->bButton->setChecked(isSet);
}

void BoardForm::setMinusButton(bool isSet)
{
  //ui->minusButton->setChecked(isSet);
}

void BoardForm::setPlusButton(bool isSet)
{
  //ui->plusButton->setChecked(isSet);
}

void BoardForm::setHomeButton(bool isSet)
{
  //ui->homeButton->setChecked(isSet);
}

void BoardForm::setOneButton(bool isSet)
{
  //ui->oneButton->setChecked(isSet);
}

void BoardForm::setTwoButton(bool isSet)
{
  //ui->twoButton->setChecked(isSet);
}

void BoardForm::setXAcc(double val)
{
  //ui->XAcc->setText(QString::number(val));
}

void BoardForm::setYAcc(double val)
{
  //ui->YAcc->setText(QString::number(val));
}

void BoardForm::setZAcc(double val)
{
  //ui->zEdit->setText(QString::number(val));
}

void BoardForm::setxEdit(double val)
{
    ui->xEdit->setText(QString::number(val));
}

void BoardForm::setyEdit(double val)
{
  ui->yEdit->setText(QString::number(val));
}



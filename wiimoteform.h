#ifndef WIIMOTEFORM_H
#define WIIMOTEFORM_H

#include <QWidget>

namespace Ui {
class WiimoteForm;
}

class WiimoteForm : public QWidget
{
    Q_OBJECT

public:
    explicit WiimoteForm(QWidget *parent = 0);
    ~WiimoteForm();

public slots:
  void setUpButton(bool);
  void setDownButton(bool);
  void setRightButton(bool);
  void setLeftButton(bool);
  void setAButton(bool);
  void setBButton(bool);
  void setMinusButton(bool);
  void setPlusButton(bool);
  void setHomeButton(bool);
  void setOneButton(bool);
  void setTwoButton(bool);
  void setXAcc(double);
  void setYAcc(double);
  void setZAcc(double);


public:
    Ui::WiimoteForm *ui;
};

#endif // WIIMOTEFORM_H

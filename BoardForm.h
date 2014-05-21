#ifndef boardform_H
#define boardform_H

#include <QWidget>

namespace Ui {
class BoardForm;
}

class BoardForm : public QWidget
{
    Q_OBJECT

public:
    explicit BoardForm(QWidget *parent = 0);
    ~BoardForm();

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
  void setxEdit(double str);
  void setyEdit(double);

public:
    Ui::BoardForm *ui;
};

#endif // boardform_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "wiiuse.h"
#include "boardform.h"

class QTimer;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

  void initPlot();
  void updatePlot(double x, double y, double z, double radiusnew);

  void handle_event(struct wiimote_t* wm);


public slots:
    void setLEDs();
    void setRumble();
    void trackAcc();

    void polling();


private slots:
    void on_QuitPUSHBUTTON_clicked();


    void on_ClearDataPUSHBUTTON_clicked();

//    void on_yEdit_linkActivated(const QString &link);

//    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    wiimote** wiimotes;
    BoardForm* form;
    QTimer* timer;
};

#endif // MAINWINDOW_H

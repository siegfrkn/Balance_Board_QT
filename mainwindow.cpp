#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_boardform.h"
#include "qcustomplot.h"
#include "boardform.h"

#include <QTimer>
#include <iostream>
#include <fstream>
using namespace std;
double radius = 20;  //define the radius globally


#define USE_WIIMOTE

#define MAX_WIIMOTES				4
/**
 *	@brief Callback that handles an event.
 *
 *	@param wm		Pointer to a wiimote_t structure.
 *
 *	This function is called automatically by the wiiuse library when an
 *	event occurs on the specified wiimote.
 */
void MainWindow::handle_event(struct wiimote_t* wm) {
    printf("\n\n--- EVENT [id %i] ---\n", wm->unid);

    /* if a button is pressed, report it */
    if (IS_JUST_PRESSED(wm, WIIMOTE_BUTTON_A)) {
        form->setAButton(true);
    }
    if (IS_RELEASED(wm,WIIMOTE_BUTTON_A)) {
      form->setAButton(false);
    }

    if (IS_JUST_PRESSED(wm, WIIMOTE_BUTTON_B)) {
        form->setBButton(true);
    }
    if (IS_RELEASED(wm,WIIMOTE_BUTTON_B)) {
      form->setBButton(false);
    }

    if (IS_JUST_PRESSED(wm, WIIMOTE_BUTTON_UP)) {
        form->setUpButton(true);
    }
    if (IS_RELEASED(wm,WIIMOTE_BUTTON_UP)) {
      form->setUpButton(false);
    }

    if (IS_JUST_PRESSED(wm, WIIMOTE_BUTTON_DOWN)) {
        form->setDownButton(true);
    }
    if (IS_RELEASED(wm,WIIMOTE_BUTTON_DOWN)) {
      form->setDownButton(false);
    }

    if (IS_JUST_PRESSED(wm, WIIMOTE_BUTTON_LEFT)) {
        form->setLeftButton(true);
    }
    if (IS_RELEASED(wm,WIIMOTE_BUTTON_LEFT)) {
      form->setLeftButton(false);
    }

    if (IS_JUST_PRESSED(wm, WIIMOTE_BUTTON_RIGHT)) {
        form->setRightButton(true);
    }
    if (IS_RELEASED(wm,WIIMOTE_BUTTON_RIGHT)) {
      form->setRightButton(false);
    }

    if (IS_JUST_PRESSED(wm, WIIMOTE_BUTTON_MINUS)) {
        form->setMinusButton(true);
    }
    if (IS_RELEASED(wm,WIIMOTE_BUTTON_MINUS)) {
      form->setMinusButton(false);
    }

    if (IS_JUST_PRESSED(wm, WIIMOTE_BUTTON_PLUS)) {
        form->setPlusButton(true);
    }
    if (IS_RELEASED(wm,WIIMOTE_BUTTON_PLUS)) {
      form->setPlusButton(false);
    }

    if (IS_JUST_PRESSED(wm, WIIMOTE_BUTTON_ONE)) {
        form->setOneButton(true);
    }
    if (IS_RELEASED(wm,WIIMOTE_BUTTON_ONE)) {
      form->setOneButton(false);
    }

    if (IS_JUST_PRESSED(wm, WIIMOTE_BUTTON_TWO)) {
        form->setTwoButton(true);
    }
    if (IS_RELEASED(wm,WIIMOTE_BUTTON_TWO)) {
      form->setTwoButton(false);
    }

    if (IS_JUST_PRESSED(wm, WIIMOTE_BUTTON_HOME)) {
        form->setHomeButton(true);
    }
    if (IS_RELEASED(wm,WIIMOTE_BUTTON_HOME)) {
      form->setHomeButton(false);
}





#ifdef USE_WIIMOTE
    if (IS_JUST_PRESSED(wm, WIIMOTE_BUTTON_UP)) {
        wiiuse_set_ir(wm, 1);
    }
    if (IS_JUST_PRESSED(wm, WIIMOTE_BUTTON_DOWN)) {
        wiiuse_set_ir(wm, 0);
    }
#endif


    /* if the accelerometer is turned on then print angles */
    if (WIIUSE_USING_ACC(wm)) {
      form->setXAcc(wm->accel.x);
      form->setYAcc(wm->accel.y);
//      form->setZAcc(wm->accel.z);

      form->setXAcc(wm->gforce.x);
      form->setYAcc(wm->gforce.y);
      form->setZAcc(wm->gforce.z);
      //updatePlot(wm->gforce.x,wm->gforce.y,wm->gforce.z);
    }

    /*
     *	If IR tracking is enabled then print the coordinates
     *	on the virtual screen that the wiimote is pointing to.
     *
     *	Also make sure that we see at least 1 dot.
     */
    if (WIIUSE_USING_IR(wm)) {
        int i = 0;

        /* go through each of the 4 possible IR sources */
        for (; i < 4; ++i) {
            /* check if the source is visible */
            if (wm->ir.dot[i].visible) {
                printf("IR source %i: (%u, %u)\n", i, wm->ir.dot[i].x, wm->ir.dot[i].y);
            }
        }

        printf("IR cursor: (%u, %u)\n", wm->ir.x, wm->ir.y);
        printf("IR z distance: %f\n", wm->ir.z);
    }

    /* show events specific to supported expansions */
    if (wm->exp.type == EXP_NUNCHUK || wm->exp.type == EXP_MOTION_PLUS_NUNCHUK) {
        /* nunchuk */
        struct nunchuk_t* nc = (nunchuk_t*)&wm->exp.nunchuk;

        if (IS_PRESSED(nc, NUNCHUK_BUTTON_C)) {
            printf("Nunchuk: C pressed\n");
        }
        if (IS_PRESSED(nc, NUNCHUK_BUTTON_Z)) {
            printf("Nunchuk: Z pressed\n");
        }

        printf("nunchuk roll  = %f\n", nc->orient.roll);
        printf("nunchuk pitch = %f\n", nc->orient.pitch);
        printf("nunchuk yaw   = %f\n", nc->orient.yaw);

        printf("nunchuk joystick angle:     %f\n", nc->js.ang);
        printf("nunchuk joystick magnitude: %f\n", nc->js.mag);
    } else if (wm->exp.type == EXP_CLASSIC) {
        /* classic controller */
        struct classic_ctrl_t* cc = (classic_ctrl_t*)&wm->exp.classic;

        if (IS_PRESSED(cc, CLASSIC_CTRL_BUTTON_ZL)) {
            printf("Classic: ZL pressed\n");
        }
        if (IS_PRESSED(cc, CLASSIC_CTRL_BUTTON_B)) {
            printf("Classic: B pressed\n");
        }
        if (IS_PRESSED(cc, CLASSIC_CTRL_BUTTON_Y)) {
            printf("Classic: Y pressed\n");
        }
        if (IS_PRESSED(cc, CLASSIC_CTRL_BUTTON_A)) {
            printf("Classic: A pressed\n");
        }
        if (IS_PRESSED(cc, CLASSIC_CTRL_BUTTON_X)) {
            printf("Classic: X pressed\n");
        }
        if (IS_PRESSED(cc, CLASSIC_CTRL_BUTTON_ZR)) {
            printf("Classic: ZR pressed\n");
        }
        if (IS_PRESSED(cc, CLASSIC_CTRL_BUTTON_LEFT)) {
            printf("Classic: LEFT pressed\n");
        }
        if (IS_PRESSED(cc, CLASSIC_CTRL_BUTTON_UP)) {
            printf("Classic: UP pressed\n");
        }
        if (IS_PRESSED(cc, CLASSIC_CTRL_BUTTON_RIGHT)) {
            printf("Classic: RIGHT pressed\n");
        }
        if (IS_PRESSED(cc, CLASSIC_CTRL_BUTTON_DOWN)) {
            printf("Classic: DOWN pressed\n");
        }
        if (IS_PRESSED(cc, CLASSIC_CTRL_BUTTON_FULL_L)) {
            printf("Classic: FULL L pressed\n");
        }
        if (IS_PRESSED(cc, CLASSIC_CTRL_BUTTON_MINUS)) {
            printf("Classic: MINUS pressed\n");
        }
        if (IS_PRESSED(cc, CLASSIC_CTRL_BUTTON_HOME)) {
            printf("Classic: HOME pressed\n");
        }
        if (IS_PRESSED(cc, CLASSIC_CTRL_BUTTON_PLUS)) {
            printf("Classic: PLUS pressed\n");
        }
        if (IS_PRESSED(cc, CLASSIC_CTRL_BUTTON_FULL_R)) {
            printf("Classic: FULL R pressed\n");
        }

        printf("classic L button pressed:         %f\n", cc->l_shoulder);
        printf("classic R button pressed:         %f\n", cc->r_shoulder);
        printf("classic left joystick angle:      %f\n", cc->ljs.ang);
        printf("classic left joystick magnitude:  %f\n", cc->ljs.mag);
        printf("classic right joystick angle:     %f\n", cc->rjs.ang);
        printf("classic right joystick magnitude: %f\n", cc->rjs.mag);
    } else if (wm->exp.type == EXP_GUITAR_HERO_3) {
        /* guitar hero 3 guitar */
        struct guitar_hero_3_t* gh3 = (guitar_hero_3_t*)&wm->exp.gh3;

        if (IS_PRESSED(gh3, GUITAR_HERO_3_BUTTON_STRUM_UP)) {
            printf("Guitar: Strum Up pressed\n");
        }
        if (IS_PRESSED(gh3, GUITAR_HERO_3_BUTTON_STRUM_DOWN))	{
            printf("Guitar: Strum Down pressed\n");
        }
        if (IS_PRESSED(gh3, GUITAR_HERO_3_BUTTON_YELLOW)) {
            printf("Guitar: Yellow pressed\n");
        }
        if (IS_PRESSED(gh3, GUITAR_HERO_3_BUTTON_GREEN)) {
            printf("Guitar: Green pressed\n");
        }
        if (IS_PRESSED(gh3, GUITAR_HERO_3_BUTTON_BLUE)) {
            printf("Guitar: Blue pressed\n");
        }
        if (IS_PRESSED(gh3, GUITAR_HERO_3_BUTTON_RED)) {
            printf("Guitar: Red pressed\n");
        }
        if (IS_PRESSED(gh3, GUITAR_HERO_3_BUTTON_ORANGE)) {
            printf("Guitar: Orange pressed\n");
        }
        if (IS_PRESSED(gh3, GUITAR_HERO_3_BUTTON_PLUS)) {
            printf("Guitar: Plus pressed\n");
        }
        if (IS_PRESSED(gh3, GUITAR_HERO_3_BUTTON_MINUS)) {
            printf("Guitar: Minus pressed\n");
        }

        printf("Guitar whammy bar:          %f\n", gh3->whammy_bar);
        printf("Guitar joystick angle:      %f\n", gh3->js.ang);
        printf("Guitar joystick magnitude:  %f\n", gh3->js.mag);
    } else if (wm->exp.type == EXP_WII_BOARD) {
        /* wii balance board */
        struct wii_board_t* wb = (wii_board_t*)&wm->exp.wb;
        float total = wb->tl + wb->tr + wb->bl + wb->br;
        float x = ((wb->tr + wb->br) / total) * 2 - 1;
        float y = ((wb->tl + wb->tr) / total) * 2 - 1;
        printf("Weight: %f kg @ (%f, %f)\n", total, x, y);
        updatePlot(x,y,total,radius);
        printf("Interpolated weight: TL:%f  TR:%f  BL:%f  BR:%f\n", wb->tl, wb->tr, wb->bl, wb->br);
        printf("Raw: TL:%d  TR:%d  BL:%d  BR:%d\n", wb->rtl, wb->rtr, wb->rbl, wb->rbr);
    }

    if (wm->exp.type == EXP_MOTION_PLUS ||
            wm->exp.type == EXP_MOTION_PLUS_NUNCHUK) {
        printf("Motion+ angular rates (deg/sec): pitch:%03.2f roll:%03.2f yaw:%03.2f\n",
               wm->exp.mp.angle_rate_gyro.pitch,
               wm->exp.mp.angle_rate_gyro.roll,
               wm->exp.mp.angle_rate_gyro.yaw);
    }
}


//Write to CSV text file
void savetoCSV(struct wiimote_t*wm, float x, float y, float total)
{
    wm->exp.type == EXP_WII_BOARD;
    struct wii_board_t* wb = (wii_board_t*)&wm->exp.wb;
    QDateTime namefile = QDateTime::currentDateTime();
    //std::string name = namefile("ddd-MMMM-d-yy_h:m:s_ap");
    ofstream myfile;
    myfile.open("example.csv");
    myfile <<"Weight: %f kg @ (%f, %f)\n", total, x, y;
    myfile <<"Interpolated weight: TL:%f  TR:%f  BL:%f  BR:%f\n", wb->tl, wb->tr, wb->bl, wb->br;
    myfile <<"Raw: TL:%d  TR:%d  BL:%d  BR:%d\n", wb->rtl, wb->rtr, wb->rbl, wb->rbr;
    myfile.close();
}


/**
 *	@brief Callback that handles a read event.
 *
 *	@param wm		Pointer to a wiimote_t structure.
 *	@param data		Pointer to the filled data block.
 *	@param len		Length in bytes of the data block.
 *
 *	This function is called automatically by the wiiuse library when
 *	the wiimote has returned the full data requested by a previous
 *	call to wiiuse_read_data().
 *
 *	You can read data on the wiimote, such as Mii data, if
 *	you know the offset address and the length.
 *
 *	The \a data pointer was specified on the call to wiiuse_read_data().
 *	At the time of this function being called, it is not safe to deallocate
 *	this buffer.
 */
void handle_read(struct wiimote_t* wm, byte* data, unsigned short len)
{
    int i = 0;

    printf("\n\n--- DATA READ [wiimote id %i] ---\n", wm->unid);
    printf("finished read of size %i\n", len);
    for (; i < len; ++i) {
        if (!(i % 16)) {
            printf("\n");
        }
        printf("%x ", data[i]);
    }
    printf("\n\n");
}

/**
 *	@brief Callback that handles a controller status event.
 *
 *	@param wm				Pointer to a wiimote_t structure.
 *	@param attachment		Is there an attachment? (1 for yes, 0 for no)
 *	@param speaker			Is the speaker enabled? (1 for yes, 0 for no)
 *	@param ir				Is the IR support enabled? (1 for yes, 0 for no)
 *	@param led				What LEDs are lit.
 *	@param battery_level	Battery level, between 0.0 (0%) and 1.0 (100%).
 *
 *	This occurs when either the controller status changed
 *	or the controller status was requested explicitly by
 *	wiiuse_status().
 *
 *	One reason the status can change is if the nunchuk was
 *	inserted or removed from the expansion port.
 */
void handle_ctrl_status(struct wiimote_t* wm) {
    printf("\n\n--- CONTROLLER STATUS [wiimote id %i] ---\n", wm->unid);

    printf("attachment:      %i\n", wm->exp.type);
    printf("speaker:         %i\n", WIIUSE_USING_SPEAKER(wm));
    printf("ir:              %i\n", WIIUSE_USING_IR(wm));
    printf("leds:            %i %i %i %i\n", WIIUSE_IS_LED_SET(wm, 1), WIIUSE_IS_LED_SET(wm, 2), WIIUSE_IS_LED_SET(wm, 3), WIIUSE_IS_LED_SET(wm, 4));
    printf("battery:         %f %%\n", wm->battery_level);
}


/**
 *	@brief Callback that handles a disconnection event.
 *
 *	@param wm				Pointer to a wiimote_t structure.
 *
 *	This can happen if the POWER button is pressed, or
 *	if the connection is interrupted.
 */
void handle_disconnect(wiimote* wm) {
    printf("\n\n--- DISCONNECTED [wiimote id %i] ---\n", wm->unid);
}


void test(struct wiimote_t* wm, byte* data, unsigned short len) {
  (void) wm;
    printf("test: %i [%x %x %x %x]\n", len, data[0], data[1], data[2], data[3]);
}

short any_wiimote_connected(wiimote** wm, int wiimotes) {
    int i;
    if (!wm) {
        return 0;
    }

    for (i = 0; i < wiimotes; i++) {
        if (wm[i] && WIIMOTE_IS_CONNECTED(wm[i])) {
            return 1;
        }
    }

    return 0;
}


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    int found=0, connected;

        /*
         *	Initialize an array of wiimote objects.
         *
         *	The parameter is the number of wiimotes I want to create.
         */
#ifdef USE_WIIMOTE
    wiimotes =  wiiuse_init(MAX_WIIMOTES);
    found = wiiuse_find(wiimotes, MAX_WIIMOTES, 5);
    connected = wiiuse_connect(wiimotes, MAX_WIIMOTES);
#endif
    form = ui->boardform;

    //form->ui->XAcc->setText("Set");
    //form->ui->YAcc->setText(QString::number(found));

   // connect(form->ui->led1Button,SIGNAL(clicked()),this,SLOT(setLEDs()));
   // connect(form->ui->led2Button,SIGNAL(clicked()),this,SLOT(setLEDs()));
   // connect(form->ui->led3Button,SIGNAL(clicked()),this,SLOT(setLEDs()));
   // connect(form->ui->led4Button,SIGNAL(clicked()),this,SLOT(setLEDs()));

   // connect(form->ui->rumbleButton,SIGNAL(clicked()),this,SLOT(setRumble()));

   // connect(form->ui->accButton,SIGNAL(clicked()),this,SLOT(trackAcc()));

    timer = new QTimer(this);

    initPlot();

    timer->setSingleShot(false);
    connect(timer,SIGNAL(timeout()),this,SLOT(polling()));
    timer->start(0);


}

MainWindow::~MainWindow()
{
    delete ui;
#ifdef USE_WIIMOTE
    wiiuse_cleanup(wiimotes, MAX_WIIMOTES);
#endif
}



void MainWindow::initPlot()
{
  QCustomPlot* customPlot = ui->customPlot;
  //QCPScatterStyle myScatter;
  //customPlot->addGraph(); // blue line
  //customPlot->graph(0)->setPen(QPen(Qt::blue));
  //customPlot->graph(0)->setAntialiasedFill(false);
  //customPlot->graph(0)->setLineStyle(QCPGraph::lsNone);
  //customPlot->graph(0)->setScatterStyle(QCPScatterStyle::ssDisc);
  //customPlot->graph(0)->setScatterStyle(QCPScatterStyle);
  customPlot->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, Qt::blue, Qt::transparent, radius));

  customPlot->xAxis->setRange(-1,1);
  customPlot->yAxis->setRange(-1,1);

  // make left and bottom axes transfer their ranges to right and top axes:
  //connect(customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->xAxis2, SLOT(setRange(QCPRange)));
  //connect(customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->yAxis2, SLOT(setRange(QCPRange)));
}

void MainWindow::updatePlot(double x, double y, double total, double radius)
{
  //Define variables to help remove old data
  //double key = QDateTime::currentDateTime().toMSecsSinceEpoch()/1000.0;
  double current = QDateTime::currentDateTime().toMSecsSinceEpoch();

  ui->customPlot->graph(0)->addData(x, y);
  //ui->customPlot->graph(1)->addData(key, y);
  //ui->customPlot->graph(2)->addData(key, total);

  // remove data of lines that's outside visible range:
  //ui->customPlot->graph(0)->removeDataBefore(current+count);
  //ui->customPlot->graph(0)->removeDataBefore(key-1000);
  //ui->customPlot->graph(1)->removeDataBefore(key-8);
  //ui->customPlot->graph(2)->removeDataBefore(key-8);
  // rescale value (vertical) axis to fit the current data:
  //ui->customPlot->graph(0)->rescaleValueAxis();
  //ui->customPlot->graph(1)->rescaleValueAxis(true);
  //ui->customPlot->graph(2)->rescaleValueAxis(true);

  //ui->customPlot->xAxis->setRange(-1, 1, Qt::AlignRight);
  double radiusnew = 40*total/330;  //adjust the radius based on the maximum weight limit with maxiumum size 40
  ui->customPlot->replot();
  ui->customPlot->graph(0)->removeDataBefore(current);
}



void MainWindow::setLEDs()
{
  int leds = 0;
  //if (form->ui->led1Button->isChecked()) leds|=WIIMOTE_LED_1;
  //if (form->ui->led2Button->isChecked()) leds|=WIIMOTE_LED_2;
  //if (form->ui->led3Button->isChecked()) leds|=WIIMOTE_LED_3;
  //if (form->ui->led4Button->isChecked()) leds|=WIIMOTE_LED_4;
#ifdef USE_WIIMOTE
  wiiuse_set_leds(wiimotes[0],leds);
#endif
}

void MainWindow::setRumble()
{
#ifdef USE_WIIMOTE
    //wiiuse_rumble(wiimotes[0],form->ui->rumbleButton->isChecked());
#endif
}

void MainWindow::trackAcc()
{
#ifdef USE_WIIMOTE
 // wiiuse_motion_sensing(wiimotes[0], form->ui->accButton->isChecked());
#endif
}


void MainWindow::polling()
{
#ifdef USE_WIIMOTE
  if (any_wiimote_connected(wiimotes, MAX_WIIMOTES)
          && wiiuse_poll(wiimotes, MAX_WIIMOTES))
#else
  if (any_wiimote_connected(wiimotes, MAX_WIIMOTES))
#endif
  {
      form->ui->powerBar->setValue((int)( wiimotes[0]->battery_level*100));
      int i = 0;
                  for (; i < MAX_WIIMOTES; ++i) {
                      switch (wiimotes[i]->event) {
                          case WIIUSE_EVENT:
                              /* a generic event occurred */
                              handle_event(wiimotes[i]);
                              break;

                          case WIIUSE_STATUS:
                              /* a status event occurred */
                              handle_ctrl_status(wiimotes[i]);
                              break;

                          case WIIUSE_DISCONNECT:
                          case WIIUSE_UNEXPECTED_DISCONNECT:
                              /* the wiimote disconnected */
                              handle_disconnect(wiimotes[i]);
                              break;

                          case WIIUSE_READ_DATA:
                              /*
                               *	Data we requested to read was returned.
                               *	Take a look at wiimotes[i]->read_req
                               *	for the data.
                               */
                              break;

                          case WIIUSE_NUNCHUK_INSERTED:
                              /*
                               *	a nunchuk was inserted
                               *	This is a good place to set any nunchuk specific
                               *	threshold values.  By default they are the same
                               *	as the wiimote.
                               */
                              /* wiiuse_set_nunchuk_orient_threshold((struct nunchuk_t*)&wiimotes[i]->exp.nunchuk, 90.0f); */
                              /* wiiuse_set_nunchuk_accel_threshold((struct nunchuk_t*)&wiimotes[i]->exp.nunchuk, 100); */
                              printf("Nunchuk inserted.\n");
                              break;

                          case WIIUSE_CLASSIC_CTRL_INSERTED:
                              printf("Classic controller inserted.\n");
                              break;

                          case WIIUSE_WII_BOARD_CTRL_INSERTED:
                              printf("Balance board controller inserted.\n");
                              break;

                          case WIIUSE_GUITAR_HERO_3_CTRL_INSERTED:
                              /* some expansion was inserted */
                              handle_ctrl_status(wiimotes[i]);
                              printf("Guitar Hero 3 controller inserted.\n");
                              break;

                          case WIIUSE_MOTION_PLUS_ACTIVATED:
                              printf("Motion+ was activated\n");
                              break;

                          case WIIUSE_NUNCHUK_REMOVED:
                          case WIIUSE_CLASSIC_CTRL_REMOVED:
                          case WIIUSE_GUITAR_HERO_3_CTRL_REMOVED:
                          case WIIUSE_WII_BOARD_CTRL_REMOVED:
                          case WIIUSE_MOTION_PLUS_REMOVED:
                              /* some expansion was removed */
                              handle_ctrl_status(wiimotes[i]);
                              printf("An expansion was removed.\n");
                              break;

                          default:
                              break;
                      }
                  }
  }
}




//BoardForm Widgets

//Quit application when quit button is pushed
void MainWindow::on_QuitPUSHBUTTON_clicked()
{
    qApp->quit();
}


void MainWindow::on_ClearDataPUSHBUTTON_clicked()
{
    ui->customPlot->graph(0)->clearData();
}

//void MainWindow::on_yEdit_linkActivated(const QString &link)
//{
    //ui->boardform->yEdit->setText("%f cm\n", y);
//}

//void MainWindow::on_pushButton_clicked()
//{

//}

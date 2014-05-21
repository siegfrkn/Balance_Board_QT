/********************************************************************************
** Form generated from reading UI file 'boardform.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARDFORM_H
#define UI_BOARDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoardForm
{
public:
    QGroupBox *datasummaryGROUPBOX;
    QLabel *xEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *YRangeLABEL;
    QLabel *COPmeanOutputLABEL;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *XRangeLABEL;
    QLabel *yEdit;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *RangeLABEL;
    QLabel *yEdit_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *COPmeanLABEL;
    QLabel *COPmeanOutputLABEL_2;
    QGroupBox *DataRecordingGROUPBOX;
    QPushButton *StartPUSHBUTTON;
    QPushButton *StopPUSHBUTTON;
    QCheckBox *SaveCHECKBOX;
    QFrame *HeaderFRAME;
    QLabel *MainLABEL;
    QGroupBox *DataReplayGROUPBOX;
    QPushButton *LoadPUSHBUTTON;
    QPushButton *PlayPUSHBUTTON;
    QPushButton *PausePUSHBUTTON;
    QPushButton *ClearDataPUSHBUTTON;
    QPushButton *QuitPUSHBUTTON;
    QProgressBar *powerBar;

    void setupUi(QWidget *BoardForm)
    {
        if (BoardForm->objectName().isEmpty())
            BoardForm->setObjectName(QStringLiteral("BoardForm"));
        BoardForm->resize(240, 559);
        datasummaryGROUPBOX = new QGroupBox(BoardForm);
        datasummaryGROUPBOX->setObjectName(QStringLiteral("datasummaryGROUPBOX"));
        datasummaryGROUPBOX->setGeometry(QRect(10, 420, 221, 81));
        xEdit = new QLabel(datasummaryGROUPBOX);
        xEdit->setObjectName(QStringLiteral("xEdit"));
        xEdit->setGeometry(QRect(124, 59, 46, 16));
        xEdit->setOpenExternalLinks(false);
        layoutWidget = new QWidget(datasummaryGROUPBOX);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 53, 63, 15));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        YRangeLABEL = new QLabel(layoutWidget);
        YRangeLABEL->setObjectName(QStringLiteral("YRangeLABEL"));

        horizontalLayout->addWidget(YRangeLABEL);

        COPmeanOutputLABEL = new QLabel(layoutWidget);
        COPmeanOutputLABEL->setObjectName(QStringLiteral("COPmeanOutputLABEL"));

        horizontalLayout->addWidget(COPmeanOutputLABEL);

        layoutWidget1 = new QWidget(datasummaryGROUPBOX);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(140, 21, 64, 15));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        XRangeLABEL = new QLabel(layoutWidget1);
        XRangeLABEL->setObjectName(QStringLiteral("XRangeLABEL"));

        horizontalLayout_2->addWidget(XRangeLABEL);

        yEdit = new QLabel(layoutWidget1);
        yEdit->setObjectName(QStringLiteral("yEdit"));

        horizontalLayout_2->addWidget(yEdit);

        layoutWidget2 = new QWidget(datasummaryGROUPBOX);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(11, 21, 89, 15));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        RangeLABEL = new QLabel(layoutWidget2);
        RangeLABEL->setObjectName(QStringLiteral("RangeLABEL"));

        horizontalLayout_3->addWidget(RangeLABEL);

        yEdit_2 = new QLabel(layoutWidget2);
        yEdit_2->setObjectName(QStringLiteral("yEdit_2"));

        horizontalLayout_3->addWidget(yEdit_2);

        layoutWidget3 = new QWidget(datasummaryGROUPBOX);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(11, 50, 108, 15));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        COPmeanLABEL = new QLabel(layoutWidget3);
        COPmeanLABEL->setObjectName(QStringLiteral("COPmeanLABEL"));

        horizontalLayout_4->addWidget(COPmeanLABEL);

        COPmeanOutputLABEL_2 = new QLabel(layoutWidget3);
        COPmeanOutputLABEL_2->setObjectName(QStringLiteral("COPmeanOutputLABEL_2"));

        horizontalLayout_4->addWidget(COPmeanOutputLABEL_2);

        DataRecordingGROUPBOX = new QGroupBox(BoardForm);
        DataRecordingGROUPBOX->setObjectName(QStringLiteral("DataRecordingGROUPBOX"));
        DataRecordingGROUPBOX->setGeometry(QRect(20, 90, 101, 121));
        StartPUSHBUTTON = new QPushButton(DataRecordingGROUPBOX);
        StartPUSHBUTTON->setObjectName(QStringLiteral("StartPUSHBUTTON"));
        StartPUSHBUTTON->setGeometry(QRect(10, 60, 75, 23));
        StopPUSHBUTTON = new QPushButton(DataRecordingGROUPBOX);
        StopPUSHBUTTON->setObjectName(QStringLiteral("StopPUSHBUTTON"));
        StopPUSHBUTTON->setGeometry(QRect(10, 90, 75, 23));
        SaveCHECKBOX = new QCheckBox(DataRecordingGROUPBOX);
        SaveCHECKBOX->setObjectName(QStringLiteral("SaveCHECKBOX"));
        SaveCHECKBOX->setGeometry(QRect(10, 30, 81, 17));
        HeaderFRAME = new QFrame(BoardForm);
        HeaderFRAME->setObjectName(QStringLiteral("HeaderFRAME"));
        HeaderFRAME->setGeometry(QRect(0, 0, 231, 71));
        HeaderFRAME->setFrameShape(QFrame::StyledPanel);
        HeaderFRAME->setFrameShadow(QFrame::Raised);
        MainLABEL = new QLabel(HeaderFRAME);
        MainLABEL->setObjectName(QStringLiteral("MainLABEL"));
        MainLABEL->setGeometry(QRect(20, 10, 201, 61));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        MainLABEL->setFont(font);
        DataReplayGROUPBOX = new QGroupBox(BoardForm);
        DataReplayGROUPBOX->setObjectName(QStringLiteral("DataReplayGROUPBOX"));
        DataReplayGROUPBOX->setGeometry(QRect(20, 230, 201, 121));
        LoadPUSHBUTTON = new QPushButton(DataReplayGROUPBOX);
        LoadPUSHBUTTON->setObjectName(QStringLiteral("LoadPUSHBUTTON"));
        LoadPUSHBUTTON->setGeometry(QRect(10, 20, 75, 23));
        PlayPUSHBUTTON = new QPushButton(DataReplayGROUPBOX);
        PlayPUSHBUTTON->setObjectName(QStringLiteral("PlayPUSHBUTTON"));
        PlayPUSHBUTTON->setGeometry(QRect(10, 50, 75, 23));
        PausePUSHBUTTON = new QPushButton(DataReplayGROUPBOX);
        PausePUSHBUTTON->setObjectName(QStringLiteral("PausePUSHBUTTON"));
        PausePUSHBUTTON->setGeometry(QRect(10, 80, 75, 23));
        ClearDataPUSHBUTTON = new QPushButton(DataReplayGROUPBOX);
        ClearDataPUSHBUTTON->setObjectName(QStringLiteral("ClearDataPUSHBUTTON"));
        ClearDataPUSHBUTTON->setGeometry(QRect(110, 50, 75, 23));
        QuitPUSHBUTTON = new QPushButton(BoardForm);
        QuitPUSHBUTTON->setObjectName(QStringLiteral("QuitPUSHBUTTON"));
        QuitPUSHBUTTON->setGeometry(QRect(150, 530, 75, 23));
        powerBar = new QProgressBar(BoardForm);
        powerBar->setObjectName(QStringLiteral("powerBar"));
        powerBar->setGeometry(QRect(20, 370, 118, 23));
        powerBar->setValue(24);
        HeaderFRAME->raise();
        datasummaryGROUPBOX->raise();
        DataRecordingGROUPBOX->raise();
        DataReplayGROUPBOX->raise();
        QuitPUSHBUTTON->raise();
        powerBar->raise();

        retranslateUi(BoardForm);

        QMetaObject::connectSlotsByName(BoardForm);
    } // setupUi

    void retranslateUi(QWidget *BoardForm)
    {
        BoardForm->setWindowTitle(QApplication::translate("BoardForm", "Balance Board Data Recording Suite", 0));
        datasummaryGROUPBOX->setTitle(QApplication::translate("BoardForm", "Data Collection Summary", 0));
        xEdit->setText(QString());
        YRangeLABEL->setText(QApplication::translate("BoardForm", "Y:", 0));
        COPmeanOutputLABEL->setText(QApplication::translate("BoardForm", "TextLabel", 0));
        XRangeLABEL->setText(QApplication::translate("BoardForm", "X:", 0));
        yEdit->setText(QApplication::translate("BoardForm", "TextLabel", 0));
        RangeLABEL->setText(QApplication::translate("BoardForm", "Range:", 0));
        yEdit_2->setText(QApplication::translate("BoardForm", "TextLabel", 0));
        COPmeanLABEL->setText(QApplication::translate("BoardForm", "Mean COP:", 0));
        COPmeanOutputLABEL_2->setText(QApplication::translate("BoardForm", "TextLabel", 0));
        DataRecordingGROUPBOX->setTitle(QApplication::translate("BoardForm", "Data Recording", 0));
        StartPUSHBUTTON->setText(QApplication::translate("BoardForm", "Start", 0));
        StopPUSHBUTTON->setText(QApplication::translate("BoardForm", "Stop", 0));
        SaveCHECKBOX->setText(QApplication::translate("BoardForm", "Save to File", 0));
        MainLABEL->setText(QApplication::translate("BoardForm", "<html><head/><body><p>Balance Board Data</p><p>Recording Suite</p></body></html>", 0));
        DataReplayGROUPBOX->setTitle(QApplication::translate("BoardForm", "Data Replay", 0));
        LoadPUSHBUTTON->setText(QApplication::translate("BoardForm", "Load", 0));
        PlayPUSHBUTTON->setText(QApplication::translate("BoardForm", "Play", 0));
        PausePUSHBUTTON->setText(QApplication::translate("BoardForm", "Pause", 0));
        ClearDataPUSHBUTTON->setText(QApplication::translate("BoardForm", "Clear Data", 0));
        QuitPUSHBUTTON->setText(QApplication::translate("BoardForm", "Quit", 0));
    } // retranslateUi

};

namespace Ui {
    class BoardForm: public Ui_BoardForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDFORM_H

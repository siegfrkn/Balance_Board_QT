#-------------------------------------------------
#
# Project created by QtCreator 2013-09-11T15:57:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = BalanceBoardPrototype
TEMPLATE = app


SOURCES += main.cpp\
    mainwindow.cpp \
    qcustomplot.cpp \
    wiimoteform.cpp \
    boardform.cpp

HEADERS  += mainwindow.h \
    wiimoteform.h \
    qcustomplot.h \
    ui_wiimoteform.h \
    ui_mainwindow.h \
    boardform.h

FORMS    += mainwindow.ui \
    wiimoteform.ui \
    boardform.ui

DEFINES += NOMINMAX

#Path to the wiiuse library
INCLUDEPATH += "D:/My Documents/Balance_Board_Project/BalanceBoardPrototype"

INCLUDEPATH += $$PWD/
DEPENDPATH += $$PWD/

LIBS += D:/My_Documents/Balance_Board_Project/BalanceBoardPrototype/wiiuse.lib

#OTHER_FILES += \
#    wiiuse.lib

#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/ -lwiiuse
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/ -lwiiuse
#else:unix: LIBS += -L$$PWD/ -lwiiuse

OTHER_FILES +=



#-------------------------------------------------
#
# Project created by QtCreator 2016-01-10T15:19:15
#
#-------------------------------------------------

QT       += core gui
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FoodSys
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    goodbrowsing.cpp \
    storebrowsing.cpp \
    shoopingcart.cpp \
    mystore.cpp \
    turnover.cpp \
    myhistory.cpp \
    addfood.cpp \
    register.cpp \
    widget.cpp \
    datebasecontrol.cpp

HEADERS  += mainwindow.h \
    goodbrowsing.h \
    storebrowsing.h \
    shoopingcart.h \
    mystore.h \
    turnover.h \
    myhistory.h \
    addfood.h \
    register.h \
    widget.h \
    mytype.h \
    datebasecontrol.h

FORMS    += mainwindow.ui \
    goodbrowsing.ui \
    storebrowsing.ui \
    shoopingcart.ui \
    mystore.ui \
    turnover.ui \
    myhistory.ui \
    addfood.ui \
    register.ui \
    foodsys.ui \
    widget.ui

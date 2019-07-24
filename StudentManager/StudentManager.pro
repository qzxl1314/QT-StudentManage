#-------------------------------------------------
#
# Project created by QtCreator 2019-07-23T14:06:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = StudentManager
TEMPLATE = app


SOURCES += main.cpp\
        add.cpp \
    mainwindow.cpp \
    query.cpp

HEADERS  += add.h \
    mainwindow.h \
    query.h

FORMS    += add.ui \
    mainwindow.ui \
    query.ui

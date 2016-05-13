#-------------------------------------------------
#
# Project created by QtCreator 2016-04-07T08:49:01
#
#-------------------------------------------------

QT       += core gui

TARGET = icpGoCore
TEMPLATE = lib

DEFINES += ICPGOCORE_LIBRARY

INCLUDEPATH += . ../../IsrafilCore
CONFIG += plugin

SOURCES += icpgocore.cpp

HEADERS += icpgocore.h
DESTDIR = $$BUILD_TREE/plugins
unix {
    target.path = /usr/lib
    INSTALLS += target
}

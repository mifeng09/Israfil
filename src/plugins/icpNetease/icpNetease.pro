#-------------------------------------------------
#
# Project created by QtCreator 2016-03-21T11:34:52
#
#-------------------------------------------------

QT       += core gui

TEMPLATE = lib

TARGET = icpNetease

INCLUDEPATH += . ../../IsrafilCore
CONFIG += plugin

DESTDIR = $$BUILD_TREE/plugins

SOURCES += \
    icpNetease.cpp \
    nebase.cpp

HEADERS += \
    icpNetease.h \
    nebase.h


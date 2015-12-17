#-------------------------------------------------
#
# Project created by QtCreator 2015-12-17T08:38:06
#
#-------------------------------------------------

QT       -= gui

TARGET = circuit
TEMPLATE = lib

DEFINES += CIRCUIT_LIBRARY

SOURCES += Circuit.cpp

HEADERS += Circuit.h\
        circuit_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

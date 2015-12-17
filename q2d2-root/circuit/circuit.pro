#-------------------------------------------------
#
# Project created by QtCreator 2015-12-17T08:38:06
#
#-------------------------------------------------

QT       -= gui
CONFIG += c++11

TARGET = circuit
TEMPLATE = lib
DEFINES += CIRCUIT_LIBRARY

INCLUDEPATH += $$PWD/include \
    $$PWD/src

MOC_DIR = $$PWD/moc
OBJECTS_DIR = $$PWD/objects

SOURCES += \
    src/Circuit.cpp

HEADERS += \
    include/Circuit.h\
    include/circuit_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

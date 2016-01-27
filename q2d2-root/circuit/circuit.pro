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

INCLUDEPATH += \
    $$PWD/include\
    $$PWD/src

MOC_DIR = $$PWD/moc
OBJECTS_DIR = $$PWD/objects

SOURCES += \
    src/Circuit.cpp \
    src/CircuitElement.cpp \
    src/Port.cpp \
    src/Wire.cpp \
    src/Component.cpp

HEADERS += \
    include/Circuit.h\
    include/circuit_global.h \
    include/CircuitElement.h \
    include/Port.h \
    include/Wire.h \
    include/Component.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

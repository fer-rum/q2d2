#include "include/Port.h"

using namespace q2d2;

Port::Port(Circuit* parent, QString portName) :
    CircuitElement(parent, parent->objectName().append(portName)){
}


#include "include/CircuitElement.h"

using namespace q2d2;

CircuitElement::CircuitElement(Circuit* parent) :
    QObject(parent){

    q_check_ptr(parent);
}

CircuitElement::CircuitElement(Circuit *parent, QString name) :
    CircuitElement(parent) {

    setObjectName(name);
}


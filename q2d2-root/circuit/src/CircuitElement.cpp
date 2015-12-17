#include "include/CircuitElement.h"

using namespace q2d2;

CircuitElement::CircuitElement(Circuit *parent, QString name) :
    QObject(parent) {

    setObjectName(name);
}


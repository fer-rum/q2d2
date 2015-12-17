#include "Circuit.h"

using namespace q2d2;

Circuit::Circuit(QObject* parent, QString name) :
    QObject(parent) {

    setObjectName(name);
}

#ifndef COMPONENT_H
#define COMPONENT_H

#include "circuit_global.h"
#include "Circuit.h"
#include "CircuitElement.h"

namespace q2d2 {

class CIRCUITSHARED_EXPORT Component :
    public CircuitElement {
    Q_OBJECT
public:
    Component(Circuit* parent);
};

} // namespace q2d2
#endif // COMPONENT_H

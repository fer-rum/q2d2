#ifndef WIRE_H
#define WIRE_H

#include "circuit_global.h"

#include "Circuit.h"
#include "CircuitElement.h"
#include "Port.h"

namespace q2d2 {

class CIRCUITSHARED_EXPORT Wire :
    public CircuitElement {
    Q_OBJECT

private:
    Port* m_source;
    Port* m_sink;

public:
    Wire(Circuit* circuit, Port* source, Port* sink);

    // accessors
    Port* source() const {
        return m_source;
    }

    Port* sink() const {
        return m_sink;
    }

public slots:
    void slot_updateObjectName();

};

} // namespace q2d2

#endif // WIRE_H

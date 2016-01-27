#ifndef PORT_H
#define PORT_H

#include "circuit_global.h"
#include "Circuit.h"
#include "CircuitElement.h"

#include <QString>

namespace q2d2 {

enum class PortDirection : unsigned {
    INWARDS,
    OUTWARDS
};

enum class PortSensitivity : unsigned {
    ALWAYS,
    NEVER,
    ON_EDGE_ANY,
    ON_EDGE_FALLING,
    ON_EDGE_RISING,
    ON_LEVEL_ANY,
    ON_LEVEL_HIGH,
    ON_LEVEL_LOW
};

class CIRCUITSHARED_EXPORT Port :
        public CircuitElement {
    Q_OBJECT
private:
    PortDirection m_direction;
    PortSensitivity m_sensitivity;

public:
    Port(Circuit* parent, QString portName);
    Port(/*Component* parent,*/ QString portName);

    // accessors
    PortSensitivity activity () const {
        return m_sensitivity;
    }

    void setActivity(PortSensitivity sensitivity){
        m_sensitivity = sensitivity;
    }

    PortDirection direction() const {
        return m_direction;
    }

    void setDirection(PortDirection direction){
        m_direction = direction;
    }
};
}

#endif // PORT_H

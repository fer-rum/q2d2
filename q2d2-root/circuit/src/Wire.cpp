#include "include/Wire.h"

using namespace q2d2;

Wire::Wire(Circuit* circuit, Port* source, Port* sink) :
    CircuitElement(circuit){

    q_check_ptr(m_source);
    q_check_ptr(m_sink);

    m_source = source;
    m_sink = sink;

    slot_updateObjectName();

    connect(source, &Port::objectNameChanged,
            this, &Wire::slot_updateObjectName);

    connect(sink, &Port::objectNameChanged,
            this, &Wire::slot_updateObjectName);

    connect(source, &Port::destroyed,
            this, &Wire::deleteLater);
}

void
Wire::slot_updateObjectName(){

    q_check_ptr(m_source);
    q_check_ptr(m_sink);

    QString name = m_source->objectName().
                   append("--").
                   append(m_sink->objectName());
    setObjectName(name);
}

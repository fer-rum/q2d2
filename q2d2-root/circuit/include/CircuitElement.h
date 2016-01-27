#ifndef CIRCUITELEMENT_H
#define CIRCUITELEMENT_H

#include "circuit_global.h"
#include "Circuit.h"

#include <QObject>
#include <QString>

namespace q2d2 {

class CIRCUITSHARED_EXPORT CircuitElement :
        public QObject {
    Q_OBJECT

public:
    explicit CircuitElement(Circuit *parent);
    explicit CircuitElement(Circuit *parent, QString name);

    Circuit* parent() const {
        return qobject_cast<Circuit*>(parent());
    }

signals:

public slots:
};
} // namespace q2d2

#endif // CIRCUITELEMENT_H

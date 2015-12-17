#ifndef Q2D2_CIRCUIT_H
#define Q2D2_CIRCUIT_H

#include "circuit_global.h"

#include <QObject>
#include <QString>

namespace q2d2 {

class CIRCUITSHARED_EXPORT Circuit :
    public QObject {
    Q_OBJECT

public:
    explicit Circuit(QObject* parent, QString name);
};
} // namespace q2d2

#endif // Q2D2_CIRCUIT_H

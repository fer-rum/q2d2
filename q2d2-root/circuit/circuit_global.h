#ifndef CIRCUIT_GLOBAL_H
#define CIRCUIT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CIRCUIT_LIBRARY)
#  define CIRCUITSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CIRCUITSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CIRCUIT_GLOBAL_H

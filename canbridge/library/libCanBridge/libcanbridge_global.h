#ifndef LIBCANBRIDGE_GLOBAL_H
#define LIBCANBRIDGE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBCANBRIDGE_LIBRARY)
#  define LIBCANBRIDGESHARED_EXPORT Q_DECL_EXPORT
#else
#  define LIBCANBRIDGESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBCANBRIDGE_GLOBAL_H

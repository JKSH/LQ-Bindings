#ifndef LQGLOBAL_H
#define LQGLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LQ_LIBRARY)
#  define LQ_EXPORT Q_DECL_EXPORT
#else
#  define LQ_EXPORT Q_DECL_IMPORT
#endif

#endif // LQGLOBAL_H

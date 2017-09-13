/****************************************************************************
** Meta object code from reading C++ file 'GSelectionRect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MultiFusion-master/paintWidget/GSelectionRect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GSelectionRect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GSelectionRect_t {
    QByteArrayData data[21];
    char stringdata[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GSelectionRect_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GSelectionRect_t qt_meta_stringdata_GSelectionRect = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GSelectionRect"
QT_MOC_LITERAL(1, 15, 12), // "StateChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "event"
QT_MOC_LITERAL(4, 35, 7), // "changed"
QT_MOC_LITERAL(5, 43, 5), // "moved"
QT_MOC_LITERAL(6, 49, 2), // "dx"
QT_MOC_LITERAL(7, 52, 2), // "dy"
QT_MOC_LITERAL(8, 55, 6), // "scaled"
QT_MOC_LITERAL(9, 62, 2), // "sx"
QT_MOC_LITERAL(10, 65, 2), // "sy"
QT_MOC_LITERAL(11, 68, 11), // "scaleCenter"
QT_MOC_LITERAL(12, 80, 7), // "sheared"
QT_MOC_LITERAL(13, 88, 10), // "shearPoint"
QT_MOC_LITERAL(14, 99, 7), // "rotated"
QT_MOC_LITERAL(15, 107, 5), // "angle"
QT_MOC_LITERAL(16, 113, 6), // "center"
QT_MOC_LITERAL(17, 120, 7), // "onMoved"
QT_MOC_LITERAL(18, 128, 8), // "onScaled"
QT_MOC_LITERAL(19, 137, 9), // "onSheared"
QT_MOC_LITERAL(20, 147, 9) // "onRotated"

    },
    "GSelectionRect\0StateChanged\0\0event\0"
    "changed\0moved\0dx\0dy\0scaled\0sx\0sy\0"
    "scaleCenter\0sheared\0shearPoint\0rotated\0"
    "angle\0center\0onMoved\0onScaled\0onSheared\0"
    "onRotated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GSelectionRect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    0,   67,    2, 0x06 /* Public */,
       5,    2,   68,    2, 0x06 /* Public */,
       8,    3,   73,    2, 0x06 /* Public */,
      12,    3,   80,    2, 0x06 /* Public */,
      14,    2,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    2,   92,    2, 0x0a /* Public */,
      18,    3,   97,    2, 0x0a /* Public */,
      19,    3,  104,    2, 0x0a /* Public */,
      20,    2,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    6,    7,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QPointF,    9,   10,   11,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QPointF,    9,   10,   13,
    QMetaType::Void, QMetaType::QReal, QMetaType::QPointF,   15,   16,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    6,    7,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QPointF,    9,   10,   11,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QPointF,    9,   10,   13,
    QMetaType::Void, QMetaType::QReal, QMetaType::QPointF,   15,   16,

       0        // eod
};

void GSelectionRect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GSelectionRect *_t = static_cast<GSelectionRect *>(_o);
        switch (_id) {
        case 0: _t->StateChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->changed(); break;
        case 2: _t->moved((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2]))); break;
        case 3: _t->scaled((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3]))); break;
        case 4: _t->sheared((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3]))); break;
        case 5: _t->rotated((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 6: _t->onMoved((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2]))); break;
        case 7: _t->onScaled((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3]))); break;
        case 8: _t->onSheared((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3]))); break;
        case 9: _t->onRotated((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GSelectionRect::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GSelectionRect::StateChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (GSelectionRect::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GSelectionRect::changed)) {
                *result = 1;
            }
        }
        {
            typedef void (GSelectionRect::*_t)(const qreal , const qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GSelectionRect::moved)) {
                *result = 2;
            }
        }
        {
            typedef void (GSelectionRect::*_t)(const qreal , const qreal , const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GSelectionRect::scaled)) {
                *result = 3;
            }
        }
        {
            typedef void (GSelectionRect::*_t)(const qreal , const qreal , const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GSelectionRect::sheared)) {
                *result = 4;
            }
        }
        {
            typedef void (GSelectionRect::*_t)(const qreal , const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GSelectionRect::rotated)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject GSelectionRect::staticMetaObject = {
    { &GSRInterface::staticMetaObject, qt_meta_stringdata_GSelectionRect.data,
      qt_meta_data_GSelectionRect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GSelectionRect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GSelectionRect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GSelectionRect.stringdata))
        return static_cast<void*>(const_cast< GSelectionRect*>(this));
    if (!strcmp(_clname, "com.Tailer.MultiFusion.GSRInterface/1.0"))
        return static_cast< GSRInterface*>(const_cast< GSelectionRect*>(this));
    return GSRInterface::qt_metacast(_clname);
}

int GSelectionRect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GSRInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void GSelectionRect::StateChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GSelectionRect::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void GSelectionRect::moved(const qreal _t1, const qreal _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GSelectionRect::scaled(const qreal _t1, const qreal _t2, const QPointF & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GSelectionRect::sheared(const qreal _t1, const qreal _t2, const QPointF & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GSelectionRect::rotated(const qreal _t1, const QPointF & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE

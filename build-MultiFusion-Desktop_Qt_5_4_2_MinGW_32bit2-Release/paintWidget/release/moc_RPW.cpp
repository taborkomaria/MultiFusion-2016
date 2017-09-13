/****************************************************************************
** Meta object code from reading C++ file 'RPW.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MultiFusion-master/paintWidget/RPW.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RPW.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RealPaintWidget_t {
    QByteArrayData data[22];
    char stringdata[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RealPaintWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RealPaintWidget_t qt_meta_stringdata_RealPaintWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "RealPaintWidget"
QT_MOC_LITERAL(1, 16, 14), // "figureSelected"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "layer"
QT_MOC_LITERAL(4, 38, 3), // "obj"
QT_MOC_LITERAL(5, 42, 13), // "layerSelected"
QT_MOC_LITERAL(6, 56, 12), // "frameChanged"
QT_MOC_LITERAL(7, 69, 5), // "frame"
QT_MOC_LITERAL(8, 75, 13), // "objectCreated"
QT_MOC_LITERAL(9, 89, 8), // "isPlayed"
QT_MOC_LITERAL(10, 98, 10), // "undoEvents"
QT_MOC_LITERAL(11, 109, 10), // "paintEvent"
QT_MOC_LITERAL(12, 120, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(13, 135, 6), // "global"
QT_MOC_LITERAL(14, 142, 3), // "rpw"
QT_MOC_LITERAL(15, 146, 12), // "StateChanged"
QT_MOC_LITERAL(16, 159, 5), // "event"
QT_MOC_LITERAL(17, 165, 7), // "isFrame"
QT_MOC_LITERAL(18, 173, 5), // "value"
QT_MOC_LITERAL(19, 179, 15), // "onPropertiesObj"
QT_MOC_LITERAL(20, 195, 12), // "alphaChanged"
QT_MOC_LITERAL(21, 208, 6) // "_alpha"

    },
    "RealPaintWidget\0figureSelected\0\0layer\0"
    "obj\0layerSelected\0frameChanged\0frame\0"
    "objectCreated\0isPlayed\0undoEvents\0"
    "paintEvent\0mouseMoveEvent\0global\0rpw\0"
    "StateChanged\0event\0isFrame\0value\0"
    "onPropertiesObj\0alphaChanged\0_alpha"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RealPaintWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       5,    1,   79,    2, 0x06 /* Public */,
       6,    1,   82,    2, 0x06 /* Public */,
       8,    0,   85,    2, 0x06 /* Public */,
       9,    0,   86,    2, 0x06 /* Public */,
      10,    0,   87,    2, 0x06 /* Public */,
      11,    1,   88,    2, 0x06 /* Public */,
      12,    2,   91,    2, 0x06 /* Public */,
      15,    1,   96,    2, 0x06 /* Public */,
      17,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    0,  102,    2, 0x0a /* Public */,
      20,    1,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint,   13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Bool,   18,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,

       0        // eod
};

void RealPaintWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RealPaintWidget *_t = static_cast<RealPaintWidget *>(_o);
        switch (_id) {
        case 0: _t->figureSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->layerSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->frameChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->objectCreated(); break;
        case 4: _t->isPlayed(); break;
        case 5: _t->undoEvents(); break;
        case 6: _t->paintEvent((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 7: _t->mouseMoveEvent((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 8: _t->StateChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->isFrame((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onPropertiesObj(); break;
        case 11: _t->alphaChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RealPaintWidget::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RealPaintWidget::figureSelected)) {
                *result = 0;
            }
        }
        {
            typedef void (RealPaintWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RealPaintWidget::layerSelected)) {
                *result = 1;
            }
        }
        {
            typedef void (RealPaintWidget::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RealPaintWidget::frameChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (RealPaintWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RealPaintWidget::objectCreated)) {
                *result = 3;
            }
        }
        {
            typedef void (RealPaintWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RealPaintWidget::isPlayed)) {
                *result = 4;
            }
        }
        {
            typedef void (RealPaintWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RealPaintWidget::undoEvents)) {
                *result = 5;
            }
        }
        {
            typedef void (RealPaintWidget::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RealPaintWidget::paintEvent)) {
                *result = 6;
            }
        }
        {
            typedef void (RealPaintWidget::*_t)(QPoint , QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RealPaintWidget::mouseMoveEvent)) {
                *result = 7;
            }
        }
        {
            typedef void (RealPaintWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RealPaintWidget::StateChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (RealPaintWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RealPaintWidget::isFrame)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject RealPaintWidget::staticMetaObject = {
    { &RPWInterface::staticMetaObject, qt_meta_stringdata_RealPaintWidget.data,
      qt_meta_data_RealPaintWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RealPaintWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RealPaintWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RealPaintWidget.stringdata))
        return static_cast<void*>(const_cast< RealPaintWidget*>(this));
    if (!strcmp(_clname, "com.alxn1.sacs2.RPWInterface/1.0"))
        return static_cast< RPWInterface*>(const_cast< RealPaintWidget*>(this));
    return RPWInterface::qt_metacast(_clname);
}

int RealPaintWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RPWInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void RealPaintWidget::figureSelected(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RealPaintWidget::layerSelected(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RealPaintWidget::frameChanged(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RealPaintWidget::objectCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void RealPaintWidget::isPlayed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void RealPaintWidget::undoEvents()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void RealPaintWidget::paintEvent(QPoint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RealPaintWidget::mouseMoveEvent(QPoint _t1, QPoint _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RealPaintWidget::StateChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void RealPaintWidget::isFrame(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE

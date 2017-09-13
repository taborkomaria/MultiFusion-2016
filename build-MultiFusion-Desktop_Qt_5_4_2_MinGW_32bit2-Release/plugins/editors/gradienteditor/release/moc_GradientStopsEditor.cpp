/****************************************************************************
** Meta object code from reading C++ file 'GradientStopsEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MultiFusion-master/plugins/editors/gradienteditor/GradientStopsEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GradientStopsEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GradientStopEditor_t {
    QByteArrayData data[15];
    char stringdata[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GradientStopEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GradientStopEditor_t qt_meta_stringdata_GradientStopEditor = {
    {
QT_MOC_LITERAL(0, 0, 18), // "GradientStopEditor"
QT_MOC_LITERAL(1, 19, 9), // "stopMoved"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "stop"
QT_MOC_LITERAL(4, 35, 5), // "value"
QT_MOC_LITERAL(5, 41, 8), // "position"
QT_MOC_LITERAL(6, 50, 8), // "newIndex"
QT_MOC_LITERAL(7, 59, 9), // "stopAdded"
QT_MOC_LITERAL(8, 69, 5), // "index"
QT_MOC_LITERAL(9, 75, 11), // "stopDeleted"
QT_MOC_LITERAL(10, 87, 7), // "addStop"
QT_MOC_LITERAL(11, 95, 12), // "newStopValue"
QT_MOC_LITERAL(12, 108, 15), // "newStopPosition"
QT_MOC_LITERAL(13, 124, 8), // "moveStop"
QT_MOC_LITERAL(14, 133, 10) // "deleteStop"

    },
    "GradientStopEditor\0stopMoved\0\0stop\0"
    "value\0position\0newIndex\0stopAdded\0"
    "index\0stopDeleted\0addStop\0newStopValue\0"
    "newStopPosition\0moveStop\0deleteStop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GradientStopEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   44,    2, 0x06 /* Public */,
       7,    3,   53,    2, 0x06 /* Public */,
       9,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   63,    2, 0x0a /* Public */,
      13,    3,   68,    2, 0x0a /* Public */,
      14,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QReal, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QReal, QMetaType::Int,    4,    5,    8,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Int, QMetaType::Int, QMetaType::QReal,   11,   12,
    QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QReal,    3,   11,   12,
    QMetaType::Bool, QMetaType::Int,    3,

       0        // eod
};

void GradientStopEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GradientStopEditor *_t = static_cast<GradientStopEditor *>(_o);
        switch (_id) {
        case 0: _t->stopMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->stopAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->stopDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: { int _r = _t->addStop((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->moveStop((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->deleteStop((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GradientStopEditor::*_t)(int , int , qreal , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientStopEditor::stopMoved)) {
                *result = 0;
            }
        }
        {
            typedef void (GradientStopEditor::*_t)(int , qreal , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientStopEditor::stopAdded)) {
                *result = 1;
            }
        }
        {
            typedef void (GradientStopEditor::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientStopEditor::stopDeleted)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject GradientStopEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GradientStopEditor.data,
      qt_meta_data_GradientStopEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GradientStopEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GradientStopEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GradientStopEditor.stringdata))
        return static_cast<void*>(const_cast< GradientStopEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int GradientStopEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void GradientStopEditor::stopMoved(int _t1, int _t2, qreal _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GradientStopEditor::stopAdded(int _t1, qreal _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GradientStopEditor::stopDeleted(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_GradientStopsEditor_t {
    QByteArrayData data[22];
    char stringdata[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GradientStopsEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GradientStopsEditor_t qt_meta_stringdata_GradientStopsEditor = {
    {
QT_MOC_LITERAL(0, 0, 19), // "GradientStopsEditor"
QT_MOC_LITERAL(1, 20, 12), // "stopsChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "QGradientStops"
QT_MOC_LITERAL(4, 49, 5), // "stops"
QT_MOC_LITERAL(5, 55, 12), // "redStopMoved"
QT_MOC_LITERAL(6, 68, 4), // "stop"
QT_MOC_LITERAL(7, 73, 5), // "value"
QT_MOC_LITERAL(8, 79, 8), // "position"
QT_MOC_LITERAL(9, 88, 8), // "newIndex"
QT_MOC_LITERAL(10, 97, 12), // "redStopAdded"
QT_MOC_LITERAL(11, 110, 5), // "index"
QT_MOC_LITERAL(12, 116, 14), // "redStopDeleted"
QT_MOC_LITERAL(13, 131, 14), // "greenStopMoved"
QT_MOC_LITERAL(14, 146, 14), // "greenStopAdded"
QT_MOC_LITERAL(15, 161, 16), // "greenStopDeleted"
QT_MOC_LITERAL(16, 178, 13), // "blueStopMoved"
QT_MOC_LITERAL(17, 192, 13), // "blueStopAdded"
QT_MOC_LITERAL(18, 206, 15), // "blueStopDeleted"
QT_MOC_LITERAL(19, 222, 18), // "compositeStopMoved"
QT_MOC_LITERAL(20, 241, 18), // "compositeStopAdded"
QT_MOC_LITERAL(21, 260, 20) // "compositeStopDeleted"

    },
    "GradientStopsEditor\0stopsChanged\0\0"
    "QGradientStops\0stops\0redStopMoved\0"
    "stop\0value\0position\0newIndex\0redStopAdded\0"
    "index\0redStopDeleted\0greenStopMoved\0"
    "greenStopAdded\0greenStopDeleted\0"
    "blueStopMoved\0blueStopAdded\0blueStopDeleted\0"
    "compositeStopMoved\0compositeStopAdded\0"
    "compositeStopDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GradientStopsEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    4,   82,    2, 0x08 /* Private */,
      10,    3,   91,    2, 0x08 /* Private */,
      12,    1,   98,    2, 0x08 /* Private */,
      13,    4,  101,    2, 0x08 /* Private */,
      14,    3,  110,    2, 0x08 /* Private */,
      15,    1,  117,    2, 0x08 /* Private */,
      16,    4,  120,    2, 0x08 /* Private */,
      17,    3,  129,    2, 0x08 /* Private */,
      18,    1,  136,    2, 0x08 /* Private */,
      19,    4,  139,    2, 0x08 /* Private */,
      20,    3,  148,    2, 0x08 /* Private */,
      21,    1,  155,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QReal, QMetaType::Int,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QReal, QMetaType::Int,    7,    8,   11,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QReal, QMetaType::Int,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QReal, QMetaType::Int,    7,    8,   11,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QReal, QMetaType::Int,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QReal, QMetaType::Int,    7,    8,   11,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QReal, QMetaType::Int,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QReal, QMetaType::Int,    7,    8,   11,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void GradientStopsEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GradientStopsEditor *_t = static_cast<GradientStopsEditor *>(_o);
        switch (_id) {
        case 0: _t->stopsChanged((*reinterpret_cast< const QGradientStops(*)>(_a[1]))); break;
        case 1: _t->redStopMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->redStopAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->redStopDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->greenStopMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->greenStopAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->greenStopDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->blueStopMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 8: _t->blueStopAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->blueStopDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->compositeStopMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 11: _t->compositeStopAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->compositeStopDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GradientStopsEditor::*_t)(const QGradientStops & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientStopsEditor::stopsChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject GradientStopsEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GradientStopsEditor.data,
      qt_meta_data_GradientStopsEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GradientStopsEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GradientStopsEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GradientStopsEditor.stringdata))
        return static_cast<void*>(const_cast< GradientStopsEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int GradientStopsEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void GradientStopsEditor::stopsChanged(const QGradientStops & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

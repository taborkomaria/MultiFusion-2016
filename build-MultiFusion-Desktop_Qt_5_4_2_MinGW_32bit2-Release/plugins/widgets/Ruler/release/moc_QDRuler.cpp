/****************************************************************************
** Meta object code from reading C++ file 'QDRuler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MultiFusion-master/plugins/widgets/Ruler/QDRuler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QDRuler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDRuler_t {
    QByteArrayData data[14];
    char stringdata[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDRuler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDRuler_t qt_meta_stringdata_QDRuler = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QDRuler"
QT_MOC_LITERAL(1, 8, 10), // "rulerClick"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "setOrigin"
QT_MOC_LITERAL(4, 30, 6), // "origin"
QT_MOC_LITERAL(5, 37, 12), // "setRulerUnit"
QT_MOC_LITERAL(6, 50, 9), // "rulerUnit"
QT_MOC_LITERAL(7, 60, 12), // "setRulerZoom"
QT_MOC_LITERAL(8, 73, 9), // "rulerZoom"
QT_MOC_LITERAL(9, 83, 12), // "setCursorPos"
QT_MOC_LITERAL(10, 96, 9), // "cursorPos"
QT_MOC_LITERAL(11, 106, 9), // "RulerType"
QT_MOC_LITERAL(12, 116, 10), // "Horizontal"
QT_MOC_LITERAL(13, 127, 8) // "Vertical"

    },
    "QDRuler\0rulerClick\0\0setOrigin\0origin\0"
    "setRulerUnit\0rulerUnit\0setRulerZoom\0"
    "rulerZoom\0setCursorPos\0cursorPos\0"
    "RulerType\0Horizontal\0Vertical"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDRuler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   54, // properties
       1,   63, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   42,    2, 0x0a /* Public */,
       5,    1,   45,    2, 0x0a /* Public */,
       7,    1,   48,    2, 0x0a /* Public */,
       9,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    4,
    QMetaType::Void, QMetaType::QReal,    6,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void, QMetaType::QPoint,   10,

 // properties: name, type, flags
       4, QMetaType::QReal, 0x00095103,
       6, QMetaType::QReal, 0x00095103,
       8, QMetaType::QReal, 0x00095103,

 // enums: name, flags, count, data
      11, 0x0,    2,   67,

 // enum data: key, value
      12, uint(QDRuler::Horizontal),
      13, uint(QDRuler::Vertical),

       0        // eod
};

void QDRuler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDRuler *_t = static_cast<QDRuler *>(_o);
        switch (_id) {
        case 0: _t->rulerClick((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->setOrigin((*reinterpret_cast< const qreal(*)>(_a[1]))); break;
        case 2: _t->setRulerUnit((*reinterpret_cast< const qreal(*)>(_a[1]))); break;
        case 3: _t->setRulerZoom((*reinterpret_cast< const qreal(*)>(_a[1]))); break;
        case 4: _t->setCursorPos((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDRuler::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDRuler::rulerClick)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QDRuler::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QDRuler.data,
      qt_meta_data_QDRuler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDRuler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDRuler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDRuler.stringdata))
        return static_cast<void*>(const_cast< QDRuler*>(this));
    return QWidget::qt_metacast(_clname);
}

int QDRuler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = origin(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = rulerUnit(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = rulerZoom(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setOrigin(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setRulerUnit(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setRulerZoom(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDRuler::rulerClick(QPoint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

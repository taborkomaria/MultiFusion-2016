/****************************************************************************
** Meta object code from reading C++ file 'BoolOperations.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../MultiFusion-master/plugins/booloperations/BoolOperations.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BoolOperations.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BoolOperations_t {
    QByteArrayData data[7];
    char stringdata[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoolOperations_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoolOperations_t qt_meta_stringdata_BoolOperations = {
    {
QT_MOC_LITERAL(0, 0, 14), // "BoolOperations"
QT_MOC_LITERAL(1, 15, 7), // "onUnion"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "onDifference"
QT_MOC_LITERAL(4, 37, 14), // "onIntersection"
QT_MOC_LITERAL(5, 52, 11), // "onExclusion"
QT_MOC_LITERAL(6, 64, 10) // "onDivision"

    },
    "BoolOperations\0onUnion\0\0onDifference\0"
    "onIntersection\0onExclusion\0onDivision"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoolOperations[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BoolOperations::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BoolOperations *_t = static_cast<BoolOperations *>(_o);
        switch (_id) {
        case 0: _t->onUnion(); break;
        case 1: _t->onDifference(); break;
        case 2: _t->onIntersection(); break;
        case 3: _t->onExclusion(); break;
        case 4: _t->onDivision(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BoolOperations::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BoolOperations.data,
      qt_meta_data_BoolOperations,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BoolOperations::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoolOperations::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BoolOperations.stringdata))
        return static_cast<void*>(const_cast< BoolOperations*>(this));
    if (!strcmp(_clname, "BoolOperationsInterface"))
        return static_cast< BoolOperationsInterface*>(const_cast< BoolOperations*>(this));
    if (!strcmp(_clname, "InterfacePlugin"))
        return static_cast< InterfacePlugin*>(const_cast< BoolOperations*>(this));
    if (!strcmp(_clname, "com.whiteproggy.BoolOperationsInterface/1.0"))
        return static_cast< BoolOperationsInterface*>(const_cast< BoolOperations*>(this));
    if (!strcmp(_clname, "com.alxn1.DocWindow.PluginInterface/1.0"))
        return static_cast< InterfacePlugin*>(const_cast< BoolOperations*>(this));
    return QWidget::qt_metacast(_clname);
}

int BoolOperations::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_END_MOC_NAMESPACE

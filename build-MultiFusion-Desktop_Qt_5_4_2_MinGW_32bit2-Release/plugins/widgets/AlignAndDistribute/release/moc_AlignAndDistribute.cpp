/****************************************************************************
** Meta object code from reading C++ file 'AlignAndDistribute.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MultiFusion-master/plugins/widgets/AlignAndDistribute/AlignAndDistribute.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AlignAndDistribute.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AlignAndDistribute_t {
    QByteArrayData data[6];
    char stringdata[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlignAndDistribute_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlignAndDistribute_t qt_meta_stringdata_AlignAndDistribute = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AlignAndDistribute"
QT_MOC_LITERAL(1, 19, 22), // "showAlignAndDistribute"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "align"
QT_MOC_LITERAL(4, 49, 9), // "direction"
QT_MOC_LITERAL(5, 59, 10) // "distribute"

    },
    "AlignAndDistribute\0showAlignAndDistribute\0"
    "\0align\0direction\0distribute"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlignAndDistribute[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void AlignAndDistribute::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AlignAndDistribute *_t = static_cast<AlignAndDistribute *>(_o);
        switch (_id) {
        case 0: _t->showAlignAndDistribute(); break;
        case 1: _t->align((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->distribute((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AlignAndDistribute::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AlignAndDistribute.data,
      qt_meta_data_AlignAndDistribute,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AlignAndDistribute::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlignAndDistribute::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AlignAndDistribute.stringdata))
        return static_cast<void*>(const_cast< AlignAndDistribute*>(this));
    if (!strcmp(_clname, "InterfacePlugin"))
        return static_cast< InterfacePlugin*>(const_cast< AlignAndDistribute*>(this));
    if (!strcmp(_clname, "com.alxn1.DocWindow.PluginInterface/1.0"))
        return static_cast< InterfacePlugin*>(const_cast< AlignAndDistribute*>(this));
    return QWidget::qt_metacast(_clname);
}

int AlignAndDistribute::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

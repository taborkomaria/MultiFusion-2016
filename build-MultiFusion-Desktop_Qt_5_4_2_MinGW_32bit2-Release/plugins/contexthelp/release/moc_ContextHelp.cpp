/****************************************************************************
** Meta object code from reading C++ file 'ContextHelp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../MultiFusion-master/plugins/contexthelp/ContextHelp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContextHelp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ContextHelp_t {
    QByteArrayData data[6];
    char stringdata[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContextHelp_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContextHelp_t qt_meta_stringdata_ContextHelp = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ContextHelp"
QT_MOC_LITERAL(1, 12, 13), // "activeChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 2), // "id"
QT_MOC_LITERAL(4, 30, 8), // "showHelp"
QT_MOC_LITERAL(5, 39, 15) // "showContextHelp"

    },
    "ContextHelp\0activeChanged\0\0id\0showHelp\0"
    "showContextHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContextHelp[] = {

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
       1,    1,   29,    2, 0x0a /* Public */,
       4,    0,   32,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ContextHelp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContextHelp *_t = static_cast<ContextHelp *>(_o);
        switch (_id) {
        case 0: _t->activeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->showHelp(); break;
        case 2: _t->showContextHelp(); break;
        default: ;
        }
    }
}

const QMetaObject ContextHelp::staticMetaObject = {
    { &ContextHelpInterface::staticMetaObject, qt_meta_stringdata_ContextHelp.data,
      qt_meta_data_ContextHelp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ContextHelp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContextHelp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ContextHelp.stringdata))
        return static_cast<void*>(const_cast< ContextHelp*>(this));
    if (!strcmp(_clname, "InterfacePlugin"))
        return static_cast< InterfacePlugin*>(const_cast< ContextHelp*>(this));
    if (!strcmp(_clname, "ifmo.lothe.ContextHelpInterface/1.0"))
        return static_cast< ContextHelpInterface*>(const_cast< ContextHelp*>(this));
    if (!strcmp(_clname, "com.alxn1.DocWindow.PluginInterface/1.0"))
        return static_cast< InterfacePlugin*>(const_cast< ContextHelp*>(this));
    return ContextHelpInterface::qt_metacast(_clname);
}

int ContextHelp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ContextHelpInterface::qt_metacall(_c, _id, _a);
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
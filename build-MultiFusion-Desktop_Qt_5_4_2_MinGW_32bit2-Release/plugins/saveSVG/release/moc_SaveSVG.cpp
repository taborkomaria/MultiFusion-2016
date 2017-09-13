/****************************************************************************
** Meta object code from reading C++ file 'SaveSVG.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../MultiFusion-master/plugins/saveSVG/SaveSVG.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SaveSVG.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SaveSVG_t {
    QByteArrayData data[3];
    char stringdata[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SaveSVG_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SaveSVG_t qt_meta_stringdata_SaveSVG = {
    {
QT_MOC_LITERAL(0, 0, 7), // "SaveSVG"
QT_MOC_LITERAL(1, 8, 10), // "ShowWindow"
QT_MOC_LITERAL(2, 19, 0) // ""

    },
    "SaveSVG\0ShowWindow\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SaveSVG[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SaveSVG::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SaveSVG *_t = static_cast<SaveSVG *>(_o);
        switch (_id) {
        case 0: _t->ShowWindow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SaveSVG::staticMetaObject = {
    { &SaveSVGInterface::staticMetaObject, qt_meta_stringdata_SaveSVG.data,
      qt_meta_data_SaveSVG,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SaveSVG::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SaveSVG::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SaveSVG.stringdata))
        return static_cast<void*>(const_cast< SaveSVG*>(this));
    if (!strcmp(_clname, "InterfacePlugin"))
        return static_cast< InterfacePlugin*>(const_cast< SaveSVG*>(this));
    if (!strcmp(_clname, "ifmo.lothe.SaveSVGInterface/1.0"))
        return static_cast< SaveSVGInterface*>(const_cast< SaveSVG*>(this));
    if (!strcmp(_clname, "com.alxn1.DocWindow.PluginInterface/1.0"))
        return static_cast< InterfacePlugin*>(const_cast< SaveSVG*>(this));
    return SaveSVGInterface::qt_metacast(_clname);
}

int SaveSVG::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SaveSVGInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

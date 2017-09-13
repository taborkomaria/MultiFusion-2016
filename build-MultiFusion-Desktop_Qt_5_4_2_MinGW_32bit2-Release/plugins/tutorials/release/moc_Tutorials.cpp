/****************************************************************************
** Meta object code from reading C++ file 'Tutorials.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../MultiFusion-master/plugins/tutorials/Tutorials.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Tutorials.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Tutorials_t {
    QByteArrayData data[5];
    char stringdata[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tutorials_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tutorials_t qt_meta_stringdata_Tutorials = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Tutorials"
QT_MOC_LITERAL(1, 10, 12), // "showTutorial"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 2), // "id"
QT_MOC_LITERAL(4, 27, 7) // "caption"

    },
    "Tutorials\0showTutorial\0\0id\0caption"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tutorials[] = {

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
       1,    2,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

       0        // eod
};

void Tutorials::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tutorials *_t = static_cast<Tutorials *>(_o);
        switch (_id) {
        case 0: _t->showTutorial((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject Tutorials::staticMetaObject = {
    { &TutorialsInterface::staticMetaObject, qt_meta_stringdata_Tutorials.data,
      qt_meta_data_Tutorials,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Tutorials::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tutorials::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Tutorials.stringdata))
        return static_cast<void*>(const_cast< Tutorials*>(this));
    if (!strcmp(_clname, "InterfacePlugin"))
        return static_cast< InterfacePlugin*>(const_cast< Tutorials*>(this));
    if (!strcmp(_clname, "ifmo.lothe.TutorialsInterface/1.0"))
        return static_cast< TutorialsInterface*>(const_cast< Tutorials*>(this));
    if (!strcmp(_clname, "com.alxn1.DocWindow.PluginInterface/1.0"))
        return static_cast< InterfacePlugin*>(const_cast< Tutorials*>(this));
    return TutorialsInterface::qt_metacast(_clname);
}

int Tutorials::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TutorialsInterface::qt_metacall(_c, _id, _a);
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

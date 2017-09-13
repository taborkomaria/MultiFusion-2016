/****************************************************************************
** Meta object code from reading C++ file 'Bezier.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MultiFusion-master/plugins/figurestools/Bezier/Bezier.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Bezier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ToolButton_t {
    QByteArrayData data[7];
    char stringdata[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolButton_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolButton_t qt_meta_stringdata_ToolButton = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ToolButton"
QT_MOC_LITERAL(1, 11, 12), // "toolSelected"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 20), // "FigureToolInterface*"
QT_MOC_LITERAL(4, 46, 4), // "tool"
QT_MOC_LITERAL(5, 51, 9), // "onClicked"
QT_MOC_LITERAL(6, 61, 7) // "checked"

    },
    "ToolButton\0toolSelected\0\0FigureToolInterface*\0"
    "tool\0onClicked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void ToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToolButton *_t = static_cast<ToolButton *>(_o);
        switch (_id) {
        case 0: _t->toolSelected((*reinterpret_cast< FigureToolInterface*(*)>(_a[1]))); break;
        case 1: _t->onClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ToolButton::*_t)(FigureToolInterface * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolButton::toolSelected)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ToolButton::staticMetaObject = {
    { &ToolButtonInterface::staticMetaObject, qt_meta_stringdata_ToolButton.data,
      qt_meta_data_ToolButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ToolButton.stringdata))
        return static_cast<void*>(const_cast< ToolButton*>(this));
    if (!strcmp(_clname, "com.Tailer.MultiFusion.ToolButtonInterface/1.0"))
        return static_cast< ToolButtonInterface*>(const_cast< ToolButton*>(this));
    return ToolButtonInterface::qt_metacast(_clname);
}

int ToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToolButtonInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ToolButton::toolSelected(FigureToolInterface * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Z_Bezier_t {
    QByteArrayData data[3];
    char stringdata[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Z_Bezier_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Z_Bezier_t qt_meta_stringdata_Z_Bezier = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Z_Bezier"
QT_MOC_LITERAL(1, 9, 9), // "setActive"
QT_MOC_LITERAL(2, 19, 0) // ""

    },
    "Z_Bezier\0setActive\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Z_Bezier[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Z_Bezier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Z_Bezier *_t = static_cast<Z_Bezier *>(_o);
        switch (_id) {
        case 0: _t->setActive((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Z_Bezier::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Z_Bezier::setActive)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Z_Bezier::staticMetaObject = {
    { &FigureToolInterface::staticMetaObject, qt_meta_stringdata_Z_Bezier.data,
      qt_meta_data_Z_Bezier,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Z_Bezier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Z_Bezier::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Z_Bezier.stringdata))
        return static_cast<void*>(const_cast< Z_Bezier*>(this));
    if (!strcmp(_clname, "InterfacePlugin"))
        return static_cast< InterfacePlugin*>(const_cast< Z_Bezier*>(this));
    if (!strcmp(_clname, "com.Tailer.MultiFusion.FigureToolInterface/1.0"))
        return static_cast< FigureToolInterface*>(const_cast< Z_Bezier*>(this));
    if (!strcmp(_clname, "com.alxn1.DocWindow.PluginInterface/1.0"))
        return static_cast< InterfacePlugin*>(const_cast< Z_Bezier*>(this));
    return FigureToolInterface::qt_metacast(_clname);
}

int Z_Bezier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FigureToolInterface::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Z_Bezier::setActive(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

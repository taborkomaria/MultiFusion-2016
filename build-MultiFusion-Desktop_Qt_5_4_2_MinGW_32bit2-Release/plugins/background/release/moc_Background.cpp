/****************************************************************************
** Meta object code from reading C++ file 'Background.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../MultiFusion-master/plugins/background/Background.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Background.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Background_t {
    QByteArrayData data[7];
    char stringdata[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Background_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Background_t qt_meta_stringdata_Background = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Background"
QT_MOC_LITERAL(1, 11, 7), // "changed"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "setActive"
QT_MOC_LITERAL(4, 30, 12), // "brushChanged"
QT_MOC_LITERAL(5, 43, 1), // "b"
QT_MOC_LITERAL(6, 45, 14) // "onBrushChanged"

    },
    "Background\0changed\0\0setActive\0"
    "brushChanged\0b\0onBrushChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Background[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,
       4,    1,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QBrush,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QBrush,    5,

       0        // eod
};

void Background::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Background *_t = static_cast<Background *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->setActive((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->brushChanged((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        case 3: _t->onBrushChanged((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Background::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Background::changed)) {
                *result = 0;
            }
        }
        {
            typedef void (Background::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Background::setActive)) {
                *result = 1;
            }
        }
        {
            typedef void (Background::*_t)(const QBrush & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Background::brushChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Background::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Background.data,
      qt_meta_data_Background,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Background::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Background::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Background.stringdata))
        return static_cast<void*>(const_cast< Background*>(this));
    if (!strcmp(_clname, "BackgroundInterface"))
        return static_cast< BackgroundInterface*>(const_cast< Background*>(this));
    if (!strcmp(_clname, "InterfacePlugin"))
        return static_cast< InterfacePlugin*>(const_cast< Background*>(this));
    if (!strcmp(_clname, "com.alxn1.sacs2.BackgroundInterface/1.0"))
        return static_cast< BackgroundInterface*>(const_cast< Background*>(this));
    if (!strcmp(_clname, "com.alxn1.DocWindow.PluginInterface/1.0"))
        return static_cast< InterfacePlugin*>(const_cast< Background*>(this));
    return QObject::qt_metacast(_clname);
}

int Background::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Background::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Background::setActive(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Background::brushChanged(const QBrush & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

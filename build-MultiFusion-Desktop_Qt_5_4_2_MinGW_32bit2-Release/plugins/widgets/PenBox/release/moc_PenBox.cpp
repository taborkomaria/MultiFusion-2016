/****************************************************************************
** Meta object code from reading C++ file 'PenBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MultiFusion-master/plugins/widgets/PenBox/PenBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PenBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PenBox_t {
    QByteArrayData data[8];
    char stringdata[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PenBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PenBox_t qt_meta_stringdata_PenBox = {
    {
QT_MOC_LITERAL(0, 0, 6), // "PenBox"
QT_MOC_LITERAL(1, 7, 10), // "penChanged"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 1), // "p"
QT_MOC_LITERAL(4, 21, 9), // "setActive"
QT_MOC_LITERAL(5, 31, 6), // "setPen"
QT_MOC_LITERAL(6, 38, 15), // "onObjectCreated"
QT_MOC_LITERAL(7, 54, 14) // "onStateChanged"

    },
    "PenBox\0penChanged\0\0p\0setActive\0setPen\0"
    "onObjectCreated\0onStateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PenBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   45,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPen,    3,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPen,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PenBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PenBox *_t = static_cast<PenBox *>(_o);
        switch (_id) {
        case 0: _t->penChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 1: _t->setActive((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setPen((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 3: _t->onObjectCreated(); break;
        case 4: _t->onStateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PenBox::*_t)(const QPen & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PenBox::penChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (PenBox::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PenBox::setActive)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject PenBox::staticMetaObject = {
    { &PenBoxInterface::staticMetaObject, qt_meta_stringdata_PenBox.data,
      qt_meta_data_PenBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PenBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PenBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PenBox.stringdata))
        return static_cast<void*>(const_cast< PenBox*>(this));
    if (!strcmp(_clname, "InterfacePlugin"))
        return static_cast< InterfacePlugin*>(const_cast< PenBox*>(this));
    if (!strcmp(_clname, "com.Tailer.MultiFusion.PenBoxInterface/1.0"))
        return static_cast< PenBoxInterface*>(const_cast< PenBox*>(this));
    if (!strcmp(_clname, "com.alxn1.DocWindow.PluginInterface/1.0"))
        return static_cast< InterfacePlugin*>(const_cast< PenBox*>(this));
    return PenBoxInterface::qt_metacast(_clname);
}

int PenBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PenBoxInterface::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void PenBox::penChanged(const QPen & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PenBox::setActive(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

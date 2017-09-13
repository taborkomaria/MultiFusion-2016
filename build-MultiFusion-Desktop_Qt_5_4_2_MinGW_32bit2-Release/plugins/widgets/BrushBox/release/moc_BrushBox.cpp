/****************************************************************************
** Meta object code from reading C++ file 'BrushBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MultiFusion-master/plugins/widgets/BrushBox/BrushBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BrushBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BrushBox_t {
    QByteArrayData data[8];
    char stringdata[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BrushBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BrushBox_t qt_meta_stringdata_BrushBox = {
    {
QT_MOC_LITERAL(0, 0, 8), // "BrushBox"
QT_MOC_LITERAL(1, 9, 12), // "brushChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 1), // "b"
QT_MOC_LITERAL(4, 25, 9), // "setActive"
QT_MOC_LITERAL(5, 35, 8), // "setBrush"
QT_MOC_LITERAL(6, 44, 15), // "onObjectCreated"
QT_MOC_LITERAL(7, 60, 14) // "onStateChanged"

    },
    "BrushBox\0brushChanged\0\0b\0setActive\0"
    "setBrush\0onObjectCreated\0onStateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrushBox[] = {

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
    QMetaType::Void, QMetaType::QBrush,    3,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QBrush,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BrushBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BrushBox *_t = static_cast<BrushBox *>(_o);
        switch (_id) {
        case 0: _t->brushChanged((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        case 1: _t->setActive((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setBrush((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        case 3: _t->onObjectCreated(); break;
        case 4: _t->onStateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BrushBox::*_t)(const QBrush & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BrushBox::brushChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (BrushBox::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BrushBox::setActive)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject BrushBox::staticMetaObject = {
    { &BrushBoxInterface::staticMetaObject, qt_meta_stringdata_BrushBox.data,
      qt_meta_data_BrushBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BrushBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrushBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BrushBox.stringdata))
        return static_cast<void*>(const_cast< BrushBox*>(this));
    if (!strcmp(_clname, "InterfacePlugin"))
        return static_cast< InterfacePlugin*>(const_cast< BrushBox*>(this));
    if (!strcmp(_clname, "com.Tailer.MultiFusion.BrushBoxInterface/1.0"))
        return static_cast< BrushBoxInterface*>(const_cast< BrushBox*>(this));
    if (!strcmp(_clname, "com.alxn1.DocWindow.PluginInterface/1.0"))
        return static_cast< InterfacePlugin*>(const_cast< BrushBox*>(this));
    return BrushBoxInterface::qt_metacast(_clname);
}

int BrushBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BrushBoxInterface::qt_metacall(_c, _id, _a);
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
void BrushBox::brushChanged(const QBrush & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BrushBox::setActive(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

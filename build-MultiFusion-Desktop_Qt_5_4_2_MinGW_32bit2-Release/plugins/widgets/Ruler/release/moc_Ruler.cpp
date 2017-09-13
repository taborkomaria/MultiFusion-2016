/****************************************************************************
** Meta object code from reading C++ file 'Ruler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MultiFusion-master/plugins/widgets/Ruler/Ruler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Ruler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Ruler_t {
    QByteArrayData data[11];
    char stringdata[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ruler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ruler_t qt_meta_stringdata_Ruler = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Ruler"
QT_MOC_LITERAL(1, 6, 9), // "zoomEvent"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 5), // "scale"
QT_MOC_LITERAL(4, 23, 15), // "mouseMoveOrigin"
QT_MOC_LITERAL(5, 39, 6), // "origin"
QT_MOC_LITERAL(6, 46, 15), // "mouseMoveCoords"
QT_MOC_LITERAL(7, 62, 6), // "global"
QT_MOC_LITERAL(8, 69, 13), // "rulerClickedH"
QT_MOC_LITERAL(9, 83, 13), // "rulerClickedV"
QT_MOC_LITERAL(10, 97, 13) // "moveSelection"

    },
    "Ruler\0zoomEvent\0\0scale\0mouseMoveOrigin\0"
    "origin\0mouseMoveCoords\0global\0"
    "rulerClickedH\0rulerClickedV\0moveSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ruler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       6,    3,   50,    2, 0x08 /* Private */,
       8,    1,   57,    2, 0x08 /* Private */,
       9,    1,   60,    2, 0x08 /* Private */,
      10,    2,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint, QMetaType::QReal,    5,    7,    3,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    2,    2,

       0        // eod
};

void Ruler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Ruler *_t = static_cast<Ruler *>(_o);
        switch (_id) {
        case 0: _t->zoomEvent((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->mouseMoveOrigin((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->mouseMoveCoords((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 3: _t->rulerClickedH((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->rulerClickedV((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 5: _t->moveSelection((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject Ruler::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Ruler.data,
      qt_meta_data_Ruler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Ruler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ruler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Ruler.stringdata))
        return static_cast<void*>(const_cast< Ruler*>(this));
    if (!strcmp(_clname, "InterfacePlugin"))
        return static_cast< InterfacePlugin*>(const_cast< Ruler*>(this));
    if (!strcmp(_clname, "com.alxn1.DocWindow.PluginInterface/1.0"))
        return static_cast< InterfacePlugin*>(const_cast< Ruler*>(this));
    return QWidget::qt_metacast(_clname);
}

int Ruler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

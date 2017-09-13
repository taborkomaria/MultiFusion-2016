/****************************************************************************
** Meta object code from reading C++ file 'ToolBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MultiFusion-master/plugins/widgets/ToolBox/ToolBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToolBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ToolBox_t {
    QByteArrayData data[28];
    char stringdata[337];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolBox_t qt_meta_stringdata_ToolBox = {
    {
QT_MOC_LITERAL(0, 0, 7), // "ToolBox"
QT_MOC_LITERAL(1, 8, 12), // "StateChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "event"
QT_MOC_LITERAL(4, 28, 21), // "selectionToolSelected"
QT_MOC_LITERAL(5, 50, 20), // "addPointToolSelected"
QT_MOC_LITERAL(6, 71, 18), // "zoomInToolSelected"
QT_MOC_LITERAL(7, 90, 19), // "zoomOutToolSelected"
QT_MOC_LITERAL(8, 110, 12), // "brushChanged"
QT_MOC_LITERAL(9, 123, 1), // "b"
QT_MOC_LITERAL(10, 125, 10), // "penChanged"
QT_MOC_LITERAL(11, 136, 1), // "p"
QT_MOC_LITERAL(12, 138, 13), // "closedChanged"
QT_MOC_LITERAL(13, 152, 6), // "closed"
QT_MOC_LITERAL(14, 159, 12), // "toolSelected"
QT_MOC_LITERAL(15, 172, 20), // "FigureToolInterface*"
QT_MOC_LITERAL(16, 193, 4), // "tool"
QT_MOC_LITERAL(17, 198, 9), // "setActive"
QT_MOC_LITERAL(18, 208, 4), // "name"
QT_MOC_LITERAL(19, 213, 9), // "onTouched"
QT_MOC_LITERAL(20, 223, 18), // "onSelectBtnClicked"
QT_MOC_LITERAL(21, 242, 7), // "checked"
QT_MOC_LITERAL(22, 250, 20), // "onAddPointBtnClicked"
QT_MOC_LITERAL(23, 271, 18), // "onHideLinesChanged"
QT_MOC_LITERAL(24, 290, 5), // "value"
QT_MOC_LITERAL(25, 296, 15), // "onClosedChanged"
QT_MOC_LITERAL(26, 312, 9), // "onEnabled"
QT_MOC_LITERAL(27, 322, 14) // "onStateChanged"

    },
    "ToolBox\0StateChanged\0\0event\0"
    "selectionToolSelected\0addPointToolSelected\0"
    "zoomInToolSelected\0zoomOutToolSelected\0"
    "brushChanged\0b\0penChanged\0p\0closedChanged\0"
    "closed\0toolSelected\0FigureToolInterface*\0"
    "tool\0setActive\0name\0onTouched\0"
    "onSelectBtnClicked\0checked\0"
    "onAddPointBtnClicked\0onHideLinesChanged\0"
    "value\0onClosedChanged\0onEnabled\0"
    "onStateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    0,  102,    2, 0x06 /* Public */,
       5,    0,  103,    2, 0x06 /* Public */,
       6,    0,  104,    2, 0x06 /* Public */,
       7,    0,  105,    2, 0x06 /* Public */,
       8,    1,  106,    2, 0x06 /* Public */,
      10,    1,  109,    2, 0x06 /* Public */,
      12,    1,  112,    2, 0x06 /* Public */,
      14,    1,  115,    2, 0x06 /* Public */,
      17,    1,  118,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    0,  121,    2, 0x08 /* Private */,
      20,    1,  122,    2, 0x08 /* Private */,
      22,    1,  125,    2, 0x08 /* Private */,
      23,    1,  128,    2, 0x08 /* Private */,
      25,    1,  131,    2, 0x08 /* Private */,
      26,    1,  134,    2, 0x08 /* Private */,
      27,    0,  137,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QBrush,    9,
    QMetaType::Void, QMetaType::QPen,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QString,   18,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void,

       0        // eod
};

void ToolBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToolBox *_t = static_cast<ToolBox *>(_o);
        switch (_id) {
        case 0: _t->StateChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->selectionToolSelected(); break;
        case 2: _t->addPointToolSelected(); break;
        case 3: _t->zoomInToolSelected(); break;
        case 4: _t->zoomOutToolSelected(); break;
        case 5: _t->brushChanged((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        case 6: _t->penChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 7: _t->closedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->toolSelected((*reinterpret_cast< FigureToolInterface*(*)>(_a[1]))); break;
        case 9: _t->setActive((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->onTouched(); break;
        case 11: _t->onSelectBtnClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->onAddPointBtnClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->onHideLinesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->onClosedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->onEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->onStateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ToolBox::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolBox::StateChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ToolBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolBox::selectionToolSelected)) {
                *result = 1;
            }
        }
        {
            typedef void (ToolBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolBox::addPointToolSelected)) {
                *result = 2;
            }
        }
        {
            typedef void (ToolBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolBox::zoomInToolSelected)) {
                *result = 3;
            }
        }
        {
            typedef void (ToolBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolBox::zoomOutToolSelected)) {
                *result = 4;
            }
        }
        {
            typedef void (ToolBox::*_t)(const QBrush & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolBox::brushChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (ToolBox::*_t)(const QPen & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolBox::penChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (ToolBox::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolBox::closedChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (ToolBox::*_t)(FigureToolInterface * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolBox::toolSelected)) {
                *result = 8;
            }
        }
        {
            typedef void (ToolBox::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolBox::setActive)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject ToolBox::staticMetaObject = {
    { &ToolBoxInterface::staticMetaObject, qt_meta_stringdata_ToolBox.data,
      qt_meta_data_ToolBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ToolBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ToolBox.stringdata))
        return static_cast<void*>(const_cast< ToolBox*>(this));
    if (!strcmp(_clname, "InterfacePlugin"))
        return static_cast< InterfacePlugin*>(const_cast< ToolBox*>(this));
    if (!strcmp(_clname, "com.Tailer.MultiFusion.ToolBoxInterface/1.0"))
        return static_cast< ToolBoxInterface*>(const_cast< ToolBox*>(this));
    if (!strcmp(_clname, "com.alxn1.DocWindow.PluginInterface/1.0"))
        return static_cast< InterfacePlugin*>(const_cast< ToolBox*>(this));
    return ToolBoxInterface::qt_metacast(_clname);
}

int ToolBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToolBoxInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void ToolBox::StateChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ToolBox::selectionToolSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void ToolBox::addPointToolSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void ToolBox::zoomInToolSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void ToolBox::zoomOutToolSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void ToolBox::brushChanged(const QBrush & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ToolBox::penChanged(const QPen & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ToolBox::closedChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ToolBox::toolSelected(FigureToolInterface * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ToolBox::setActive(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE

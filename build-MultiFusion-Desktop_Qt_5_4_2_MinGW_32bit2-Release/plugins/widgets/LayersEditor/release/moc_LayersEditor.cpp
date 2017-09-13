/****************************************************************************
** Meta object code from reading C++ file 'LayersEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MultiFusion-master/plugins/widgets/LayersEditor/LayersEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LayersEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LineEditor_t {
    QByteArrayData data[4];
    char stringdata[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LineEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LineEditor_t qt_meta_stringdata_LineEditor = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LineEditor"
QT_MOC_LITERAL(1, 11, 7), // "changed"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7) // "onClick"

    },
    "LineEditor\0changed\0\0onClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LineEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LineEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LineEditor *_t = static_cast<LineEditor *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->onClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LineEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LineEditor::changed)) {
                *result = 0;
            }
        }
        {
            typedef void (LineEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LineEditor::onClick)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject LineEditor::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_LineEditor.data,
      qt_meta_data_LineEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LineEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LineEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LineEditor.stringdata))
        return static_cast<void*>(const_cast< LineEditor*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int LineEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
void LineEditor::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void LineEditor::onClick()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_ItemMenu_t {
    QByteArrayData data[12];
    char stringdata[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ItemMenu_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ItemMenu_t qt_meta_stringdata_ItemMenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ItemMenu"
QT_MOC_LITERAL(1, 9, 9), // "onClicked"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 2), // "lr"
QT_MOC_LITERAL(4, 23, 3), // "obj"
QT_MOC_LITERAL(5, 27, 14), // "visibleChanged"
QT_MOC_LITERAL(6, 42, 7), // "visible"
QT_MOC_LITERAL(7, 50, 14), // "blockedChanged"
QT_MOC_LITERAL(8, 65, 7), // "blocked"
QT_MOC_LITERAL(9, 73, 16), // "transformChanged"
QT_MOC_LITERAL(10, 90, 4), // "trns"
QT_MOC_LITERAL(11, 95, 7) // "onClick"

    },
    "ItemMenu\0onClicked\0\0lr\0obj\0visibleChanged\0"
    "visible\0blockedChanged\0blocked\0"
    "transformChanged\0trns\0onClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ItemMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    1,   44,    2, 0x06 /* Public */,
       7,    1,   47,    2, 0x06 /* Public */,
       9,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ItemMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ItemMenu *_t = static_cast<ItemMenu *>(_o);
        switch (_id) {
        case 0: _t->onClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->visibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->blockedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->transformChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ItemMenu::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemMenu::onClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (ItemMenu::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemMenu::visibleChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (ItemMenu::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemMenu::blockedChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (ItemMenu::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemMenu::transformChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject ItemMenu::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_ItemMenu.data,
      qt_meta_data_ItemMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ItemMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ItemMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ItemMenu.stringdata))
        return static_cast<void*>(const_cast< ItemMenu*>(this));
    return QFrame::qt_metacast(_clname);
}

int ItemMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void ItemMenu::onClicked(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ItemMenu::visibleChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ItemMenu::blockedChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ItemMenu::transformChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_ObjectItem_t {
    QByteArrayData data[19];
    char stringdata[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObjectItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObjectItem_t qt_meta_stringdata_ObjectItem = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ObjectItem"
QT_MOC_LITERAL(1, 11, 13), // "renamedFigure"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "ObjectItem*"
QT_MOC_LITERAL(4, 38, 5), // "index"
QT_MOC_LITERAL(5, 44, 4), // "name"
QT_MOC_LITERAL(6, 49, 20), // "visibleFigureChanged"
QT_MOC_LITERAL(7, 70, 7), // "visible"
QT_MOC_LITERAL(8, 78, 24), // "transformedFigureChanged"
QT_MOC_LITERAL(9, 103, 5), // "layer"
QT_MOC_LITERAL(10, 109, 6), // "object"
QT_MOC_LITERAL(11, 116, 11), // "transformed"
QT_MOC_LITERAL(12, 128, 20), // "blockedFigureChanged"
QT_MOC_LITERAL(13, 149, 7), // "blocked"
QT_MOC_LITERAL(14, 157, 12), // "renameFigure"
QT_MOC_LITERAL(15, 170, 13), // "visibleFigure"
QT_MOC_LITERAL(16, 184, 13), // "blockedFigure"
QT_MOC_LITERAL(17, 198, 15), // "transformFigure"
QT_MOC_LITERAL(18, 214, 4) // "trns"

    },
    "ObjectItem\0renamedFigure\0\0ObjectItem*\0"
    "index\0name\0visibleFigureChanged\0visible\0"
    "transformedFigureChanged\0layer\0object\0"
    "transformed\0blockedFigureChanged\0"
    "blocked\0renameFigure\0visibleFigure\0"
    "blockedFigure\0transformFigure\0trns"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObjectItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       6,    2,   59,    2, 0x06 /* Public */,
       8,    3,   64,    2, 0x06 /* Public */,
      12,    2,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   76,    2, 0x0a /* Public */,
      15,    1,   77,    2, 0x0a /* Public */,
      16,    1,   80,    2, 0x0a /* Public */,
      17,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   18,

       0        // eod
};

void ObjectItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObjectItem *_t = static_cast<ObjectItem *>(_o);
        switch (_id) {
        case 0: _t->renamedFigure((*reinterpret_cast< ObjectItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->visibleFigureChanged((*reinterpret_cast< ObjectItem*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 2: _t->transformedFigureChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 3: _t->blockedFigureChanged((*reinterpret_cast< ObjectItem*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 4: _t->renameFigure(); break;
        case 5: _t->visibleFigure((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->blockedFigure((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->transformFigure((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ObjectItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ObjectItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ObjectItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ObjectItem::*_t)(ObjectItem * , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObjectItem::renamedFigure)) {
                *result = 0;
            }
        }
        {
            typedef void (ObjectItem::*_t)(ObjectItem * , const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObjectItem::visibleFigureChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (ObjectItem::*_t)(int , int , const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObjectItem::transformedFigureChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (ObjectItem::*_t)(ObjectItem * , const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObjectItem::blockedFigureChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject ObjectItem::staticMetaObject = {
    { &ItemMenu::staticMetaObject, qt_meta_stringdata_ObjectItem.data,
      qt_meta_data_ObjectItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ObjectItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjectItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectItem.stringdata))
        return static_cast<void*>(const_cast< ObjectItem*>(this));
    return ItemMenu::qt_metacast(_clname);
}

int ObjectItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ItemMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ObjectItem::renamedFigure(ObjectItem * _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ObjectItem::visibleFigureChanged(ObjectItem * _t1, const bool & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ObjectItem::transformedFigureChanged(int _t1, int _t2, const bool & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ObjectItem::blockedFigureChanged(ObjectItem * _t1, const bool & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_LayerItem_t {
    QByteArrayData data[23];
    char stringdata[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayerItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayerItem_t qt_meta_stringdata_LayerItem = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LayerItem"
QT_MOC_LITERAL(1, 10, 13), // "layerSelected"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "index"
QT_MOC_LITERAL(4, 31, 10), // "movedFirst"
QT_MOC_LITERAL(5, 42, 7), // "movedUp"
QT_MOC_LITERAL(6, 50, 9), // "movedDown"
QT_MOC_LITERAL(7, 60, 9), // "movedLast"
QT_MOC_LITERAL(8, 70, 7), // "deleted"
QT_MOC_LITERAL(9, 78, 17), // "hideFigureChanged"
QT_MOC_LITERAL(10, 96, 5), // "layer"
QT_MOC_LITERAL(11, 102, 5), // "value"
QT_MOC_LITERAL(12, 108, 12), // "renamedLayer"
QT_MOC_LITERAL(13, 121, 10), // "LayerItem*"
QT_MOC_LITERAL(14, 132, 4), // "name"
QT_MOC_LITERAL(15, 137, 19), // "visibleLayerChanged"
QT_MOC_LITERAL(16, 157, 7), // "visible"
QT_MOC_LITERAL(17, 165, 19), // "blockedLayerChanged"
QT_MOC_LITERAL(18, 185, 7), // "blocked"
QT_MOC_LITERAL(19, 193, 11), // "renameLayer"
QT_MOC_LITERAL(20, 205, 12), // "visibleLayer"
QT_MOC_LITERAL(21, 218, 12), // "blockedLayer"
QT_MOC_LITERAL(22, 231, 13) // "setVisFigures"

    },
    "LayerItem\0layerSelected\0\0index\0"
    "movedFirst\0movedUp\0movedDown\0movedLast\0"
    "deleted\0hideFigureChanged\0layer\0value\0"
    "renamedLayer\0LayerItem*\0name\0"
    "visibleLayerChanged\0visible\0"
    "blockedLayerChanged\0blocked\0renameLayer\0"
    "visibleLayer\0blockedLayer\0setVisFigures"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayerItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    1,   90,    2, 0x06 /* Public */,
       6,    1,   93,    2, 0x06 /* Public */,
       7,    1,   96,    2, 0x06 /* Public */,
       8,    1,   99,    2, 0x06 /* Public */,
       9,    2,  102,    2, 0x06 /* Public */,
      12,    2,  107,    2, 0x06 /* Public */,
      15,    2,  112,    2, 0x06 /* Public */,
      17,    2,  117,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    0,  122,    2, 0x0a /* Public */,
      20,    1,  123,    2, 0x0a /* Public */,
      21,    1,  126,    2, 0x0a /* Public */,
      22,    0,  129,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   10,   11,
    QMetaType::Void, 0x80000000 | 13, QMetaType::QString,    3,   14,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Bool,    3,   16,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Bool,    3,   18,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,

       0        // eod
};

void LayerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LayerItem *_t = static_cast<LayerItem *>(_o);
        switch (_id) {
        case 0: _t->layerSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->movedFirst((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->movedUp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->movedDown((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->movedLast((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->deleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->hideFigureChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->renamedLayer((*reinterpret_cast< LayerItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->visibleLayerChanged((*reinterpret_cast< LayerItem*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 9: _t->blockedLayerChanged((*reinterpret_cast< LayerItem*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 10: _t->renameLayer(); break;
        case 11: _t->visibleLayer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->blockedLayer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setVisFigures(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LayerItem* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LayerItem* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LayerItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LayerItem::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayerItem::layerSelected)) {
                *result = 0;
            }
        }
        {
            typedef void (LayerItem::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayerItem::movedFirst)) {
                *result = 1;
            }
        }
        {
            typedef void (LayerItem::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayerItem::movedUp)) {
                *result = 2;
            }
        }
        {
            typedef void (LayerItem::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayerItem::movedDown)) {
                *result = 3;
            }
        }
        {
            typedef void (LayerItem::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayerItem::movedLast)) {
                *result = 4;
            }
        }
        {
            typedef void (LayerItem::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayerItem::deleted)) {
                *result = 5;
            }
        }
        {
            typedef void (LayerItem::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayerItem::hideFigureChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (LayerItem::*_t)(LayerItem * , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayerItem::renamedLayer)) {
                *result = 7;
            }
        }
        {
            typedef void (LayerItem::*_t)(LayerItem * , const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayerItem::visibleLayerChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (LayerItem::*_t)(LayerItem * , const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayerItem::blockedLayerChanged)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject LayerItem::staticMetaObject = {
    { &ItemMenu::staticMetaObject, qt_meta_stringdata_LayerItem.data,
      qt_meta_data_LayerItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LayerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LayerItem.stringdata))
        return static_cast<void*>(const_cast< LayerItem*>(this));
    return ItemMenu::qt_metacast(_clname);
}

int LayerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ItemMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void LayerItem::layerSelected(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LayerItem::movedFirst(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LayerItem::movedUp(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LayerItem::movedDown(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LayerItem::movedLast(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LayerItem::deleted(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LayerItem::hideFigureChanged(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void LayerItem::renamedLayer(LayerItem * _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void LayerItem::visibleLayerChanged(LayerItem * _t1, const bool & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void LayerItem::blockedLayerChanged(LayerItem * _t1, const bool & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
struct qt_meta_stringdata_LayersView_t {
    QByteArrayData data[47];
    char stringdata[532];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayersView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayersView_t qt_meta_stringdata_LayersView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LayersView"
QT_MOC_LITERAL(1, 11, 17), // "hideFigureChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "layer"
QT_MOC_LITERAL(4, 36, 5), // "value"
QT_MOC_LITERAL(5, 42, 13), // "layerSelected"
QT_MOC_LITERAL(6, 56, 5), // "index"
QT_MOC_LITERAL(7, 62, 14), // "figureSelected"
QT_MOC_LITERAL(8, 77, 10), // "movedLayer"
QT_MOC_LITERAL(9, 88, 8), // "layerOld"
QT_MOC_LITERAL(10, 97, 8), // "layerNew"
QT_MOC_LITERAL(11, 106, 11), // "movedFigure"
QT_MOC_LITERAL(12, 118, 6), // "objOld"
QT_MOC_LITERAL(13, 125, 6), // "objNew"
QT_MOC_LITERAL(14, 132, 13), // "deletedFigure"
QT_MOC_LITERAL(15, 146, 3), // "obj"
QT_MOC_LITERAL(16, 150, 12), // "renamedLayer"
QT_MOC_LITERAL(17, 163, 4), // "name"
QT_MOC_LITERAL(18, 168, 13), // "renamedFigure"
QT_MOC_LITERAL(19, 182, 17), // "transformedFigure"
QT_MOC_LITERAL(20, 200, 7), // "visible"
QT_MOC_LITERAL(21, 208, 13), // "visibleFigure"
QT_MOC_LITERAL(22, 222, 12), // "visibleLayer"
QT_MOC_LITERAL(23, 235, 13), // "blockedFigure"
QT_MOC_LITERAL(24, 249, 7), // "blocked"
QT_MOC_LITERAL(25, 257, 12), // "blockedLayer"
QT_MOC_LITERAL(26, 270, 10), // "layerAdded"
QT_MOC_LITERAL(27, 281, 5), // "clear"
QT_MOC_LITERAL(28, 287, 8), // "onSelect"
QT_MOC_LITERAL(29, 296, 14), // "showPlacesDrag"
QT_MOC_LITERAL(30, 311, 12), // "addPlaceDrag"
QT_MOC_LITERAL(31, 324, 7), // "QFrame*"
QT_MOC_LITERAL(32, 332, 4), // "type"
QT_MOC_LITERAL(33, 337, 8), // "addLayer"
QT_MOC_LITERAL(34, 346, 10), // "LayerItem*"
QT_MOC_LITERAL(35, 357, 12), // "renameFigure"
QT_MOC_LITERAL(36, 370, 11), // "ObjectItem*"
QT_MOC_LITERAL(37, 382, 4), // "item"
QT_MOC_LITERAL(38, 387, 7), // "newName"
QT_MOC_LITERAL(39, 395, 11), // "renameLayer"
QT_MOC_LITERAL(40, 407, 20), // "visibleFigureChanged"
QT_MOC_LITERAL(41, 428, 19), // "visibleLayerChanged"
QT_MOC_LITERAL(42, 448, 20), // "blockedFigureChanged"
QT_MOC_LITERAL(43, 469, 19), // "blockedLayerChanged"
QT_MOC_LITERAL(44, 489, 12), // "deleteFigure"
QT_MOC_LITERAL(45, 502, 11), // "deleteLayer"
QT_MOC_LITERAL(46, 514, 17) // "setSelectedFigure"

    },
    "LayersView\0hideFigureChanged\0\0layer\0"
    "value\0layerSelected\0index\0figureSelected\0"
    "movedLayer\0layerOld\0layerNew\0movedFigure\0"
    "objOld\0objNew\0deletedFigure\0obj\0"
    "renamedLayer\0name\0renamedFigure\0"
    "transformedFigure\0visible\0visibleFigure\0"
    "visibleLayer\0blockedFigure\0blocked\0"
    "blockedLayer\0layerAdded\0clear\0onSelect\0"
    "showPlacesDrag\0addPlaceDrag\0QFrame*\0"
    "type\0addLayer\0LayerItem*\0renameFigure\0"
    "ObjectItem*\0item\0newName\0renameLayer\0"
    "visibleFigureChanged\0visibleLayerChanged\0"
    "blockedFigureChanged\0blockedLayerChanged\0"
    "deleteFigure\0deleteLayer\0setSelectedFigure"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayersView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  159,    2, 0x06 /* Public */,
       5,    1,  164,    2, 0x06 /* Public */,
       7,    2,  167,    2, 0x06 /* Public */,
       8,    2,  172,    2, 0x06 /* Public */,
      11,    4,  177,    2, 0x06 /* Public */,
      14,    2,  186,    2, 0x06 /* Public */,
      16,    2,  191,    2, 0x06 /* Public */,
      18,    3,  196,    2, 0x06 /* Public */,
      19,    3,  203,    2, 0x06 /* Public */,
      21,    3,  210,    2, 0x06 /* Public */,
      22,    2,  217,    2, 0x06 /* Public */,
      23,    3,  222,    2, 0x06 /* Public */,
      25,    2,  229,    2, 0x06 /* Public */,
      26,    3,  234,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    0,  241,    2, 0x0a /* Public */,
      28,    2,  242,    2, 0x0a /* Public */,
      29,    1,  247,    2, 0x0a /* Public */,
      30,    3,  250,    2, 0x0a /* Public */,
      33,    3,  257,    2, 0x0a /* Public */,
      33,    0,  264,    2, 0x0a /* Public */,
      35,    2,  265,    2, 0x0a /* Public */,
      39,    2,  270,    2, 0x0a /* Public */,
      40,    2,  275,    2, 0x0a /* Public */,
      41,    2,  280,    2, 0x0a /* Public */,
      42,    2,  285,    2, 0x0a /* Public */,
      43,    2,  290,    2, 0x0a /* Public */,
      44,    0,  295,    2, 0x0a /* Public */,
      45,    1,  296,    2, 0x0a /* Public */,
      46,    2,  299,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    9,   12,   10,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    3,   15,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    3,   15,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    3,   15,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    3,   15,   24,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,   24,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::QString,   20,   24,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,   15,
    QMetaType::Void, QMetaType::Bool,    4,
    0x80000000 | 31, QMetaType::QString, QMetaType::Int, QMetaType::Int,   32,    3,   15,
    0x80000000 | 34, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   17,   20,   24,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 36, QMetaType::QString,   37,   38,
    QMetaType::Void, 0x80000000 | 34, QMetaType::QString,   37,   38,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Bool,   37,   20,
    QMetaType::Void, 0x80000000 | 34, QMetaType::Bool,   37,   20,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Bool,   37,   24,
    QMetaType::Void, 0x80000000 | 34, QMetaType::Bool,   37,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,   15,

       0        // eod
};

void LayersView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LayersView *_t = static_cast<LayersView *>(_o);
        switch (_id) {
        case 0: _t->hideFigureChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->layerSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->figureSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->movedLayer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->movedFigure((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->deletedFigure((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->renamedLayer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->renamedFigure((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 8: _t->transformedFigure((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 9: _t->visibleFigure((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 10: _t->visibleLayer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->blockedFigure((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: _t->blockedLayer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->layerAdded((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 14: _t->clear(); break;
        case 15: _t->onSelect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->showPlacesDrag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: { QFrame* _r = _t->addPlaceDrag((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QFrame**>(_a[0]) = _r; }  break;
        case 18: { LayerItem* _r = _t->addLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< LayerItem**>(_a[0]) = _r; }  break;
        case 19: _t->addLayer(); break;
        case 20: _t->renameFigure((*reinterpret_cast< ObjectItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 21: _t->renameLayer((*reinterpret_cast< LayerItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 22: _t->visibleFigureChanged((*reinterpret_cast< ObjectItem*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 23: _t->visibleLayerChanged((*reinterpret_cast< LayerItem*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 24: _t->blockedFigureChanged((*reinterpret_cast< ObjectItem*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 25: _t->blockedLayerChanged((*reinterpret_cast< LayerItem*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 26: _t->deleteFigure(); break;
        case 27: _t->deleteLayer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->setSelectedFigure((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ObjectItem* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LayerItem* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ObjectItem* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LayerItem* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ObjectItem* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LayerItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LayersView::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersView::hideFigureChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (LayersView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersView::layerSelected)) {
                *result = 1;
            }
        }
        {
            typedef void (LayersView::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersView::figureSelected)) {
                *result = 2;
            }
        }
        {
            typedef void (LayersView::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersView::movedLayer)) {
                *result = 3;
            }
        }
        {
            typedef void (LayersView::*_t)(int , int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersView::movedFigure)) {
                *result = 4;
            }
        }
        {
            typedef void (LayersView::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersView::deletedFigure)) {
                *result = 5;
            }
        }
        {
            typedef void (LayersView::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersView::renamedLayer)) {
                *result = 6;
            }
        }
        {
            typedef void (LayersView::*_t)(int , int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersView::renamedFigure)) {
                *result = 7;
            }
        }
        {
            typedef void (LayersView::*_t)(int , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersView::transformedFigure)) {
                *result = 8;
            }
        }
        {
            typedef void (LayersView::*_t)(int , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersView::visibleFigure)) {
                *result = 9;
            }
        }
        {
            typedef void (LayersView::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersView::visibleLayer)) {
                *result = 10;
            }
        }
        {
            typedef void (LayersView::*_t)(int , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersView::blockedFigure)) {
                *result = 11;
            }
        }
        {
            typedef void (LayersView::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersView::blockedLayer)) {
                *result = 12;
            }
        }
        {
            typedef void (LayersView::*_t)(bool , bool , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersView::layerAdded)) {
                *result = 13;
            }
        }
    }
}

const QMetaObject LayersView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LayersView.data,
      qt_meta_data_LayersView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LayersView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayersView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LayersView.stringdata))
        return static_cast<void*>(const_cast< LayersView*>(this));
    return QWidget::qt_metacast(_clname);
}

int LayersView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void LayersView::hideFigureChanged(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LayersView::layerSelected(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LayersView::figureSelected(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LayersView::movedLayer(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LayersView::movedFigure(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LayersView::deletedFigure(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LayersView::renamedLayer(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void LayersView::renamedFigure(int _t1, int _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void LayersView::transformedFigure(int _t1, int _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void LayersView::visibleFigure(int _t1, int _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void LayersView::visibleLayer(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void LayersView::blockedFigure(int _t1, int _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void LayersView::blockedLayer(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void LayersView::layerAdded(bool _t1, bool _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
struct qt_meta_stringdata_LayersEditor_t {
    QByteArrayData data[23];
    char stringdata[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayersEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayersEditor_t qt_meta_stringdata_LayersEditor = {
    {
QT_MOC_LITERAL(0, 0, 12), // "LayersEditor"
QT_MOC_LITERAL(1, 13, 14), // "figureSelected"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "movedFirst"
QT_MOC_LITERAL(4, 40, 5), // "index"
QT_MOC_LITERAL(5, 46, 7), // "movedUp"
QT_MOC_LITERAL(6, 54, 9), // "movedDown"
QT_MOC_LITERAL(7, 64, 9), // "movedLast"
QT_MOC_LITERAL(8, 74, 7), // "deleted"
QT_MOC_LITERAL(9, 82, 7), // "renamed"
QT_MOC_LITERAL(10, 90, 4), // "name"
QT_MOC_LITERAL(11, 95, 14), // "visibleChanged"
QT_MOC_LITERAL(12, 110, 7), // "visible"
QT_MOC_LITERAL(13, 118, 9), // "setActive"
QT_MOC_LITERAL(14, 128, 27), // "onLayerSelectedFromViewport"
QT_MOC_LITERAL(15, 156, 5), // "layer"
QT_MOC_LITERAL(16, 162, 3), // "obj"
QT_MOC_LITERAL(17, 166, 19), // "onTransformedFigure"
QT_MOC_LITERAL(18, 186, 4), // "trns"
QT_MOC_LITERAL(19, 191, 12), // "onHideFigure"
QT_MOC_LITERAL(20, 204, 5), // "value"
QT_MOC_LITERAL(21, 210, 14), // "onStateChanged"
QT_MOC_LITERAL(22, 225, 9) // "onTouched"

    },
    "LayersEditor\0figureSelected\0\0movedFirst\0"
    "index\0movedUp\0movedDown\0movedLast\0"
    "deleted\0renamed\0name\0visibleChanged\0"
    "visible\0setActive\0onLayerSelectedFromViewport\0"
    "layer\0obj\0onTransformedFigure\0trns\0"
    "onHideFigure\0value\0onStateChanged\0"
    "onTouched"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayersEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06 /* Public */,
       3,    1,   89,    2, 0x06 /* Public */,
       5,    1,   92,    2, 0x06 /* Public */,
       6,    1,   95,    2, 0x06 /* Public */,
       7,    1,   98,    2, 0x06 /* Public */,
       8,    1,  101,    2, 0x06 /* Public */,
       9,    2,  104,    2, 0x06 /* Public */,
      11,    2,  109,    2, 0x06 /* Public */,
      13,    1,  114,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    2,  117,    2, 0x08 /* Private */,
      17,    3,  122,    2, 0x08 /* Private */,
      19,    2,  129,    2, 0x08 /* Private */,
      21,    0,  134,    2, 0x08 /* Private */,
      22,    0,  135,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    4,   12,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   15,   16,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   15,   20,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LayersEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LayersEditor *_t = static_cast<LayersEditor *>(_o);
        switch (_id) {
        case 0: _t->figureSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->movedFirst((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->movedUp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->movedDown((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->movedLast((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->deleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->renamed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->visibleChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->setActive((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->onLayerSelectedFromViewport((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->onTransformedFigure((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 11: _t->onHideFigure((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->onStateChanged(); break;
        case 13: _t->onTouched(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LayersEditor::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersEditor::figureSelected)) {
                *result = 0;
            }
        }
        {
            typedef void (LayersEditor::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersEditor::movedFirst)) {
                *result = 1;
            }
        }
        {
            typedef void (LayersEditor::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersEditor::movedUp)) {
                *result = 2;
            }
        }
        {
            typedef void (LayersEditor::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersEditor::movedDown)) {
                *result = 3;
            }
        }
        {
            typedef void (LayersEditor::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersEditor::movedLast)) {
                *result = 4;
            }
        }
        {
            typedef void (LayersEditor::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersEditor::deleted)) {
                *result = 5;
            }
        }
        {
            typedef void (LayersEditor::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersEditor::renamed)) {
                *result = 6;
            }
        }
        {
            typedef void (LayersEditor::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersEditor::visibleChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (LayersEditor::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayersEditor::setActive)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject LayersEditor::staticMetaObject = {
    { &LayersEditorInterface::staticMetaObject, qt_meta_stringdata_LayersEditor.data,
      qt_meta_data_LayersEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LayersEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayersEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LayersEditor.stringdata))
        return static_cast<void*>(const_cast< LayersEditor*>(this));
    if (!strcmp(_clname, "InterfacePlugin"))
        return static_cast< InterfacePlugin*>(const_cast< LayersEditor*>(this));
    if (!strcmp(_clname, "com.alxn1.sacs2.LayersEditorInterface/1.0"))
        return static_cast< LayersEditorInterface*>(const_cast< LayersEditor*>(this));
    if (!strcmp(_clname, "com.alxn1.DocWindow.PluginInterface/1.0"))
        return static_cast< InterfacePlugin*>(const_cast< LayersEditor*>(this));
    return LayersEditorInterface::qt_metacast(_clname);
}

int LayersEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LayersEditorInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void LayersEditor::figureSelected(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LayersEditor::movedFirst(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LayersEditor::movedUp(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LayersEditor::movedDown(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LayersEditor::movedLast(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LayersEditor::deleted(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LayersEditor::renamed(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void LayersEditor::visibleChanged(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void LayersEditor::setActive(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE

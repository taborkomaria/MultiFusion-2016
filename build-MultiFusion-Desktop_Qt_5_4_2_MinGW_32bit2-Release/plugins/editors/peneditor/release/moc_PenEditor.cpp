/****************************************************************************
** Meta object code from reading C++ file 'PenEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MultiFusion-master/plugins/editors/peneditor/PenEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PenEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PenBox_t {
    QByteArrayData data[1];
    char stringdata[7];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PenBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PenBox_t qt_meta_stringdata_PenBox = {
    {
QT_MOC_LITERAL(0, 0, 6) // "PenBox"

    },
    "PenBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PenBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PenBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PenBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PenBox.data,
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
    return QWidget::qt_metacast(_clname);
}

int PenBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_PenEditor_t {
    QByteArrayData data[25];
    char stringdata[442];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PenEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PenEditor_t qt_meta_stringdata_PenEditor = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PenEditor"
QT_MOC_LITERAL(1, 10, 10), // "penChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "pen"
QT_MOC_LITERAL(4, 26, 9), // "setActive"
QT_MOC_LITERAL(5, 36, 6), // "setPen"
QT_MOC_LITERAL(6, 43, 4), // "_pen"
QT_MOC_LITERAL(7, 48, 22), // "onColorBoxColorChanged"
QT_MOC_LITERAL(8, 71, 8), // "newColor"
QT_MOC_LITERAL(9, 80, 18), // "onLineWidthChanged"
QT_MOC_LITERAL(10, 99, 4), // "text"
QT_MOC_LITERAL(11, 104, 17), // "onLineWidthEdited"
QT_MOC_LITERAL(12, 122, 22), // "onNoneLineStyleChecked"
QT_MOC_LITERAL(13, 145, 7), // "checked"
QT_MOC_LITERAL(14, 153, 23), // "onSolidLineStyleChecked"
QT_MOC_LITERAL(15, 177, 22), // "onDashLineStyleChecked"
QT_MOC_LITERAL(16, 200, 21), // "onDotLineStyleChecked"
QT_MOC_LITERAL(17, 222, 25), // "onDashDotLineStyleChecked"
QT_MOC_LITERAL(18, 248, 28), // "onDashDotDotLineStyleChecked"
QT_MOC_LITERAL(19, 277, 27), // "onSquareCapLineStyleChecked"
QT_MOC_LITERAL(20, 305, 25), // "onFlatCapLineStyleChecked"
QT_MOC_LITERAL(21, 331, 26), // "onRoundCapLineStyleChecked"
QT_MOC_LITERAL(22, 358, 27), // "onBevelJoinLineStyleChecked"
QT_MOC_LITERAL(23, 386, 27), // "onMiterJoinLineStyleChecked"
QT_MOC_LITERAL(24, 414, 27) // "onRoundJoinLineStyleChecked"

    },
    "PenEditor\0penChanged\0\0pen\0setActive\0"
    "setPen\0_pen\0onColorBoxColorChanged\0"
    "newColor\0onLineWidthChanged\0text\0"
    "onLineWidthEdited\0onNoneLineStyleChecked\0"
    "checked\0onSolidLineStyleChecked\0"
    "onDashLineStyleChecked\0onDotLineStyleChecked\0"
    "onDashDotLineStyleChecked\0"
    "onDashDotDotLineStyleChecked\0"
    "onSquareCapLineStyleChecked\0"
    "onFlatCapLineStyleChecked\0"
    "onRoundCapLineStyleChecked\0"
    "onBevelJoinLineStyleChecked\0"
    "onMiterJoinLineStyleChecked\0"
    "onRoundJoinLineStyleChecked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PenEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    1,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  110,    2, 0x0a /* Public */,
       7,    1,  113,    2, 0x09 /* Protected */,
       9,    1,  116,    2, 0x09 /* Protected */,
      11,    1,  119,    2, 0x09 /* Protected */,
      12,    1,  122,    2, 0x09 /* Protected */,
      14,    1,  125,    2, 0x09 /* Protected */,
      15,    1,  128,    2, 0x09 /* Protected */,
      16,    1,  131,    2, 0x09 /* Protected */,
      17,    1,  134,    2, 0x09 /* Protected */,
      18,    1,  137,    2, 0x09 /* Protected */,
      19,    1,  140,    2, 0x09 /* Protected */,
      20,    1,  143,    2, 0x09 /* Protected */,
      21,    1,  146,    2, 0x09 /* Protected */,
      22,    1,  149,    2, 0x09 /* Protected */,
      23,    1,  152,    2, 0x09 /* Protected */,
      24,    1,  155,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPen,    3,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPen,    6,
    QMetaType::Void, QMetaType::QColor,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void PenEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PenEditor *_t = static_cast<PenEditor *>(_o);
        switch (_id) {
        case 0: _t->penChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 1: _t->setActive((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setPen((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 3: _t->onColorBoxColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->onLineWidthChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onLineWidthEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onNoneLineStyleChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onSolidLineStyleChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onDashLineStyleChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onDotLineStyleChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onDashDotLineStyleChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->onDashDotDotLineStyleChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->onSquareCapLineStyleChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->onFlatCapLineStyleChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->onRoundCapLineStyleChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->onBevelJoinLineStyleChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->onMiterJoinLineStyleChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->onRoundJoinLineStyleChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PenEditor::*_t)(const QPen & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PenEditor::penChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (PenEditor::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PenEditor::setActive)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject PenEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PenEditor.data,
      qt_meta_data_PenEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PenEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PenEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PenEditor.stringdata))
        return static_cast<void*>(const_cast< PenEditor*>(this));
    if (!strcmp(_clname, "PenEditorInterface"))
        return static_cast< PenEditorInterface*>(const_cast< PenEditor*>(this));
    if (!strcmp(_clname, "InterfacePlugin"))
        return static_cast< InterfacePlugin*>(const_cast< PenEditor*>(this));
    if (!strcmp(_clname, "com.alxn1.sacs2.PenEditorInterface/1.0"))
        return static_cast< PenEditorInterface*>(const_cast< PenEditor*>(this));
    if (!strcmp(_clname, "com.alxn1.DocWindow.PluginInterface/1.0"))
        return static_cast< InterfacePlugin*>(const_cast< PenEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int PenEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void PenEditor::penChanged(const QPen & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PenEditor::setActive(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

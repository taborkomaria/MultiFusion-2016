/****************************************************************************
** Meta object code from reading C++ file 'PWE.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MultiFusion-master/paintWidget/PWE.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PWE.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PaintWidgetEditor_t {
    QByteArrayData data[18];
    char stringdata[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PaintWidgetEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PaintWidgetEditor_t qt_meta_stringdata_PaintWidgetEditor = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PaintWidgetEditor"
QT_MOC_LITERAL(1, 18, 19), // "onBackgroundChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "QWidget*"
QT_MOC_LITERAL(4, 48, 4), // "from"
QT_MOC_LITERAL(5, 53, 14), // "onColorChanged"
QT_MOC_LITERAL(6, 68, 19), // "onColorFillBgButton"
QT_MOC_LITERAL(7, 88, 7), // "checked"
QT_MOC_LITERAL(8, 96, 26), // "onTransparencyFillBgButton"
QT_MOC_LITERAL(9, 123, 15), // "onSizeHintStyle"
QT_MOC_LITERAL(10, 139, 17), // "onFullWindowStyle"
QT_MOC_LITERAL(11, 157, 16), // "onFixedSizeStyle"
QT_MOC_LITERAL(12, 174, 22), // "onViewportWidthChanged"
QT_MOC_LITERAL(13, 197, 4), // "text"
QT_MOC_LITERAL(14, 202, 21), // "onViewportWidthEdited"
QT_MOC_LITERAL(15, 224, 23), // "onViewportHeightChanged"
QT_MOC_LITERAL(16, 248, 22), // "onViewportHeightEdited"
QT_MOC_LITERAL(17, 271, 7) // "destroy"

    },
    "PaintWidgetEditor\0onBackgroundChanged\0"
    "\0QWidget*\0from\0onColorChanged\0"
    "onColorFillBgButton\0checked\0"
    "onTransparencyFillBgButton\0onSizeHintStyle\0"
    "onFullWindowStyle\0onFixedSizeStyle\0"
    "onViewportWidthChanged\0text\0"
    "onViewportWidthEdited\0onViewportHeightChanged\0"
    "onViewportHeightEdited\0destroy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaintWidgetEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    1,   78,    2, 0x0a /* Public */,
       8,    1,   81,    2, 0x0a /* Public */,
       9,    1,   84,    2, 0x0a /* Public */,
      10,    1,   87,    2, 0x0a /* Public */,
      11,    1,   90,    2, 0x0a /* Public */,
      12,    1,   93,    2, 0x0a /* Public */,
      14,    1,   96,    2, 0x0a /* Public */,
      15,    1,   99,    2, 0x0a /* Public */,
      16,    1,  102,    2, 0x0a /* Public */,
      17,    0,  105,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,

       0        // eod
};

void PaintWidgetEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PaintWidgetEditor *_t = static_cast<PaintWidgetEditor *>(_o);
        switch (_id) {
        case 0: _t->onBackgroundChanged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->onColorChanged(); break;
        case 2: _t->onColorFillBgButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onTransparencyFillBgButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onSizeHintStyle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onFullWindowStyle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onFixedSizeStyle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onViewportWidthChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->onViewportWidthEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->onViewportHeightChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->onViewportHeightEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->destroy(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PaintWidgetEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PaintWidgetEditor.data,
      qt_meta_data_PaintWidgetEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PaintWidgetEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaintWidgetEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PaintWidgetEditor.stringdata))
        return static_cast<void*>(const_cast< PaintWidgetEditor*>(this));
    if (!strcmp(_clname, "PWEIntreface"))
        return static_cast< PWEIntreface*>(const_cast< PaintWidgetEditor*>(this));
    if (!strcmp(_clname, "com.alxn1.sacs2.PWEIntreface/1.0"))
        return static_cast< PWEIntreface*>(const_cast< PaintWidgetEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int PaintWidgetEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'BrushEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MultiFusion-master/plugins/editors/brusheditor/BrushEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BrushEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BrushBox_t {
    QByteArrayData data[1];
    char stringdata[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BrushBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BrushBox_t qt_meta_stringdata_BrushBox = {
    {
QT_MOC_LITERAL(0, 0, 8) // "BrushBox"

    },
    "BrushBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrushBox[] = {

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

void BrushBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject BrushBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BrushBox.data,
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
    return QWidget::qt_metacast(_clname);
}

int BrushBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_BrushEditor_t {
    QByteArrayData data[31];
    char stringdata[477];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BrushEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BrushEditor_t qt_meta_stringdata_BrushEditor = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BrushEditor"
QT_MOC_LITERAL(1, 12, 12), // "brushChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "brush"
QT_MOC_LITERAL(4, 32, 9), // "setActive"
QT_MOC_LITERAL(5, 42, 4), // "name"
QT_MOC_LITERAL(6, 47, 8), // "setBrush"
QT_MOC_LITERAL(7, 56, 22), // "onColorBoxColorChanged"
QT_MOC_LITERAL(8, 79, 8), // "newColor"
QT_MOC_LITERAL(9, 88, 21), // "onDense4PatternButton"
QT_MOC_LITERAL(10, 110, 7), // "checked"
QT_MOC_LITERAL(11, 118, 21), // "onDense1PatternButton"
QT_MOC_LITERAL(12, 140, 15), // "onNoBrushButton"
QT_MOC_LITERAL(13, 156, 21), // "onDense5PatternButton"
QT_MOC_LITERAL(14, 178, 20), // "onFDiagPatternButton"
QT_MOC_LITERAL(15, 199, 20), // "onSolidPatternButton"
QT_MOC_LITERAL(16, 220, 21), // "onDense2PatternButton"
QT_MOC_LITERAL(17, 242, 21), // "onDense6PatternButton"
QT_MOC_LITERAL(18, 264, 21), // "onDense7PatternButton"
QT_MOC_LITERAL(19, 286, 18), // "onVerPatternButton"
QT_MOC_LITERAL(20, 305, 20), // "onCrossPatternButton"
QT_MOC_LITERAL(21, 326, 20), // "onBDiagPatternButton"
QT_MOC_LITERAL(22, 347, 21), // "onDense3PatternButton"
QT_MOC_LITERAL(23, 369, 18), // "onHorPatternButton"
QT_MOC_LITERAL(24, 388, 24), // "onDiagCrossPatternButton"
QT_MOC_LITERAL(25, 413, 17), // "onGradientChanged"
QT_MOC_LITERAL(26, 431, 15), // "onPixmapChanged"
QT_MOC_LITERAL(27, 447, 1), // "p"
QT_MOC_LITERAL(28, 449, 8), // "fileName"
QT_MOC_LITERAL(29, 458, 12), // "onTabChanged"
QT_MOC_LITERAL(30, 471, 5) // "index"

    },
    "BrushEditor\0brushChanged\0\0brush\0"
    "setActive\0name\0setBrush\0onColorBoxColorChanged\0"
    "newColor\0onDense4PatternButton\0checked\0"
    "onDense1PatternButton\0onNoBrushButton\0"
    "onDense5PatternButton\0onFDiagPatternButton\0"
    "onSolidPatternButton\0onDense2PatternButton\0"
    "onDense6PatternButton\0onDense7PatternButton\0"
    "onVerPatternButton\0onCrossPatternButton\0"
    "onBDiagPatternButton\0onDense3PatternButton\0"
    "onHorPatternButton\0onDiagCrossPatternButton\0"
    "onGradientChanged\0onPixmapChanged\0p\0"
    "fileName\0onTabChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrushEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x06 /* Public */,
       4,    1,  127,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  130,    2, 0x0a /* Public */,
       7,    1,  133,    2, 0x09 /* Protected */,
       9,    1,  136,    2, 0x09 /* Protected */,
      11,    1,  139,    2, 0x09 /* Protected */,
      12,    1,  142,    2, 0x09 /* Protected */,
      13,    1,  145,    2, 0x09 /* Protected */,
      14,    1,  148,    2, 0x09 /* Protected */,
      15,    1,  151,    2, 0x09 /* Protected */,
      16,    1,  154,    2, 0x09 /* Protected */,
      17,    1,  157,    2, 0x09 /* Protected */,
      18,    1,  160,    2, 0x09 /* Protected */,
      19,    1,  163,    2, 0x09 /* Protected */,
      20,    1,  166,    2, 0x09 /* Protected */,
      21,    1,  169,    2, 0x09 /* Protected */,
      22,    1,  172,    2, 0x09 /* Protected */,
      23,    1,  175,    2, 0x09 /* Protected */,
      24,    1,  178,    2, 0x09 /* Protected */,
      25,    0,  181,    2, 0x09 /* Protected */,
      26,    2,  182,    2, 0x09 /* Protected */,
      29,    1,  187,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QBrush,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QBrush,    3,
    QMetaType::Void, QMetaType::QColor,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::QString,   27,   28,
    QMetaType::Void, QMetaType::Int,   30,

       0        // eod
};

void BrushEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BrushEditor *_t = static_cast<BrushEditor *>(_o);
        switch (_id) {
        case 0: _t->brushChanged((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        case 1: _t->setActive((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setBrush((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        case 3: _t->onColorBoxColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->onDense4PatternButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onDense1PatternButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onNoBrushButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onDense5PatternButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onFDiagPatternButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onSolidPatternButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onDense2PatternButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->onDense6PatternButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->onDense7PatternButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->onVerPatternButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->onCrossPatternButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->onBDiagPatternButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->onDense3PatternButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->onHorPatternButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->onDiagCrossPatternButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->onGradientChanged(); break;
        case 20: _t->onPixmapChanged((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 21: _t->onTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BrushEditor::*_t)(const QBrush & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BrushEditor::brushChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (BrushEditor::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BrushEditor::setActive)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject BrushEditor::staticMetaObject = {
    { &BrushEditorInterface::staticMetaObject, qt_meta_stringdata_BrushEditor.data,
      qt_meta_data_BrushEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BrushEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrushEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BrushEditor.stringdata))
        return static_cast<void*>(const_cast< BrushEditor*>(this));
    if (!strcmp(_clname, "InterfacePlugin"))
        return static_cast< InterfacePlugin*>(const_cast< BrushEditor*>(this));
    if (!strcmp(_clname, "com.alxn1.sacs2.BrushEditorInterface/1.0"))
        return static_cast< BrushEditorInterface*>(const_cast< BrushEditor*>(this));
    if (!strcmp(_clname, "com.alxn1.DocWindow.PluginInterface/1.0"))
        return static_cast< InterfacePlugin*>(const_cast< BrushEditor*>(this));
    return BrushEditorInterface::qt_metacast(_clname);
}

int BrushEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BrushEditorInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void BrushEditor::brushChanged(const QBrush & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BrushEditor::setActive(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

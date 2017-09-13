/****************************************************************************
** Meta object code from reading C++ file 'TexturesList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MultiFusion-master/plugins/editors/brusheditor/TexturesList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TexturesList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AlphaEditor_t {
    QByteArrayData data[4];
    char stringdata[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlphaEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlphaEditor_t qt_meta_stringdata_AlphaEditor = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AlphaEditor"
QT_MOC_LITERAL(1, 12, 12), // "alphaChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 1) // "a"

    },
    "AlphaEditor\0alphaChanged\0\0a"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlphaEditor[] = {

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
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void AlphaEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AlphaEditor *_t = static_cast<AlphaEditor *>(_o);
        switch (_id) {
        case 0: _t->alphaChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AlphaEditor::*_t)(const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlphaEditor::alphaChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject AlphaEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AlphaEditor.data,
      qt_meta_data_AlphaEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AlphaEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlphaEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AlphaEditor.stringdata))
        return static_cast<void*>(const_cast< AlphaEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int AlphaEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void AlphaEditor::alphaChanged(const int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TexturesList_t {
    QByteArrayData data[13];
    char stringdata[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TexturesList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TexturesList_t qt_meta_stringdata_TexturesList = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TexturesList"
QT_MOC_LITERAL(1, 13, 13), // "pixmapChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 1), // "p"
QT_MOC_LITERAL(4, 30, 8), // "fileName"
QT_MOC_LITERAL(5, 39, 11), // "onLoadImage"
QT_MOC_LITERAL(6, 51, 15), // "onTextureChoose"
QT_MOC_LITERAL(7, 67, 7), // "checked"
QT_MOC_LITERAL(8, 75, 18), // "onTextureActivated"
QT_MOC_LITERAL(9, 94, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(10, 111, 4), // "item"
QT_MOC_LITERAL(11, 116, 14), // "onAlphaChanged"
QT_MOC_LITERAL(12, 131, 1) // "a"

    },
    "TexturesList\0pixmapChanged\0\0p\0fileName\0"
    "onLoadImage\0onTextureChoose\0checked\0"
    "onTextureActivated\0QListWidgetItem*\0"
    "item\0onAlphaChanged\0a"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TexturesList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   44,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x08 /* Private */,
      11,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void TexturesList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TexturesList *_t = static_cast<TexturesList *>(_o);
        switch (_id) {
        case 0: _t->pixmapChanged((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->onLoadImage(); break;
        case 2: _t->onTextureChoose((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onTextureActivated((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->onAlphaChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TexturesList::*_t)(const QPixmap & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TexturesList::pixmapChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject TexturesList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TexturesList.data,
      qt_meta_data_TexturesList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TexturesList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TexturesList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TexturesList.stringdata))
        return static_cast<void*>(const_cast< TexturesList*>(this));
    return QWidget::qt_metacast(_clname);
}

int TexturesList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void TexturesList::pixmapChanged(const QPixmap & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

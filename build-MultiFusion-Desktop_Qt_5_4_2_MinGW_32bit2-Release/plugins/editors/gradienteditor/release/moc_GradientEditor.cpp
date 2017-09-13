/****************************************************************************
** Meta object code from reading C++ file 'GradientEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MultiFusion-master/plugins/editors/gradienteditor/GradientEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GradientEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GradientEditor_t {
    QByteArrayData data[19];
    char stringdata[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GradientEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GradientEditor_t qt_meta_stringdata_GradientEditor = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GradientEditor"
QT_MOC_LITERAL(1, 15, 15), // "gradientChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "QGradient"
QT_MOC_LITERAL(4, 42, 1), // "g"
QT_MOC_LITERAL(5, 44, 9), // "setActive"
QT_MOC_LITERAL(6, 54, 11), // "setGradient"
QT_MOC_LITERAL(7, 66, 14), // "onStopsChanged"
QT_MOC_LITERAL(8, 81, 14), // "QGradientStops"
QT_MOC_LITERAL(9, 96, 1), // "s"
QT_MOC_LITERAL(10, 98, 24), // "onLinearGradientSelected"
QT_MOC_LITERAL(11, 123, 7), // "checked"
QT_MOC_LITERAL(12, 131, 24), // "onRadialGradientSelected"
QT_MOC_LITERAL(13, 156, 25), // "onConicalGradientSelected"
QT_MOC_LITERAL(14, 182, 19), // "onPadSpreadSelected"
QT_MOC_LITERAL(15, 202, 22), // "onRepeatSpreadSelected"
QT_MOC_LITERAL(16, 225, 23), // "onReflectSpreadSelected"
QT_MOC_LITERAL(17, 249, 23), // "onStartStopPointChanged"
QT_MOC_LITERAL(18, 273, 1) // "p"

    },
    "GradientEditor\0gradientChanged\0\0"
    "QGradient\0g\0setActive\0setGradient\0"
    "onStopsChanged\0QGradientStops\0s\0"
    "onLinearGradientSelected\0checked\0"
    "onRadialGradientSelected\0"
    "onConicalGradientSelected\0onPadSpreadSelected\0"
    "onRepeatSpreadSelected\0onReflectSpreadSelected\0"
    "onStartStopPointChanged\0p"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GradientEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   75,    2, 0x0a /* Public */,
       7,    1,   78,    2, 0x08 /* Private */,
      10,    1,   81,    2, 0x08 /* Private */,
      12,    1,   84,    2, 0x08 /* Private */,
      13,    1,   87,    2, 0x08 /* Private */,
      14,    1,   90,    2, 0x08 /* Private */,
      15,    1,   93,    2, 0x08 /* Private */,
      16,    1,   96,    2, 0x08 /* Private */,
      17,    1,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QPointF,   18,

       0        // eod
};

void GradientEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GradientEditor *_t = static_cast<GradientEditor *>(_o);
        switch (_id) {
        case 0: _t->gradientChanged((*reinterpret_cast< const QGradient(*)>(_a[1]))); break;
        case 1: _t->setActive((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setGradient((*reinterpret_cast< const QGradient(*)>(_a[1]))); break;
        case 3: _t->onStopsChanged((*reinterpret_cast< const QGradientStops(*)>(_a[1]))); break;
        case 4: _t->onLinearGradientSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onRadialGradientSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onConicalGradientSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onPadSpreadSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onRepeatSpreadSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onReflectSpreadSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onStartStopPointChanged((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GradientEditor::*_t)(const QGradient & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientEditor::gradientChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (GradientEditor::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientEditor::setActive)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject GradientEditor::staticMetaObject = {
    { &GradientEditorInterface::staticMetaObject, qt_meta_stringdata_GradientEditor.data,
      qt_meta_data_GradientEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GradientEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GradientEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GradientEditor.stringdata))
        return static_cast<void*>(const_cast< GradientEditor*>(this));
    if (!strcmp(_clname, "InterfacePlugin"))
        return static_cast< InterfacePlugin*>(const_cast< GradientEditor*>(this));
    if (!strcmp(_clname, "com.alxn1.sacs2.GradientEditorInterface/1.0"))
        return static_cast< GradientEditorInterface*>(const_cast< GradientEditor*>(this));
    if (!strcmp(_clname, "com.alxn1.DocWindow.PluginInterface/1.0"))
        return static_cast< InterfacePlugin*>(const_cast< GradientEditor*>(this));
    return GradientEditorInterface::qt_metacast(_clname);
}

int GradientEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GradientEditorInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void GradientEditor::gradientChanged(const QGradient & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GradientEditor::setActive(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

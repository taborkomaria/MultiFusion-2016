/****************************************************************************
** Meta object code from reading C++ file 'Timeline.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MultiFusion-master/plugins/widgets/Timeline/Timeline.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Timeline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Frame_t {
    QByteArrayData data[1];
    char stringdata[6];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Frame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Frame_t qt_meta_stringdata_Frame = {
    {
QT_MOC_LITERAL(0, 0, 5) // "Frame"

    },
    "Frame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Frame[] = {

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

void Frame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Frame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Frame.data,
      qt_meta_data_Frame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Frame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Frame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Frame.stringdata))
        return static_cast<void*>(const_cast< Frame*>(this));
    return QFrame::qt_metacast(_clname);
}

int Frame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_NumberDraw_t {
    QByteArrayData data[1];
    char stringdata[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NumberDraw_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NumberDraw_t qt_meta_stringdata_NumberDraw = {
    {
QT_MOC_LITERAL(0, 0, 10) // "NumberDraw"

    },
    "NumberDraw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NumberDraw[] = {

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

void NumberDraw::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject NumberDraw::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_NumberDraw.data,
      qt_meta_data_NumberDraw,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NumberDraw::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NumberDraw::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NumberDraw.stringdata))
        return static_cast<void*>(const_cast< NumberDraw*>(this));
    return QFrame::qt_metacast(_clname);
}

int NumberDraw::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_LinesDraw_t {
    QByteArrayData data[18];
    char stringdata[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinesDraw_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinesDraw_t qt_meta_stringdata_LinesDraw = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LinesDraw"
QT_MOC_LITERAL(1, 10, 10), // "frameAdded"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "pos"
QT_MOC_LITERAL(4, 26, 12), // "frameRemoved"
QT_MOC_LITERAL(5, 39, 10), // "addEnabled"
QT_MOC_LITERAL(6, 50, 5), // "value"
QT_MOC_LITERAL(7, 56, 13), // "removeEnabled"
QT_MOC_LITERAL(8, 70, 10), // "posChanged"
QT_MOC_LITERAL(9, 81, 6), // "played"
QT_MOC_LITERAL(10, 88, 13), // "lengthChanged"
QT_MOC_LITERAL(11, 102, 9), // "setLenght"
QT_MOC_LITERAL(12, 112, 6), // "setFps"
QT_MOC_LITERAL(13, 119, 4), // "play"
QT_MOC_LITERAL(14, 124, 4), // "stop"
QT_MOC_LITERAL(15, 129, 5), // "pause"
QT_MOC_LITERAL(16, 135, 11), // "removeFrame"
QT_MOC_LITERAL(17, 147, 8) // "addFrame"

    },
    "LinesDraw\0frameAdded\0\0pos\0frameRemoved\0"
    "addEnabled\0value\0removeEnabled\0"
    "posChanged\0played\0lengthChanged\0"
    "setLenght\0setFps\0play\0stop\0pause\0"
    "removeFrame\0addFrame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinesDraw[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       5,    1,   85,    2, 0x06 /* Public */,
       7,    1,   88,    2, 0x06 /* Public */,
       8,    2,   91,    2, 0x06 /* Public */,
      10,    1,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   99,    2, 0x0a /* Public */,
      12,    1,  102,    2, 0x0a /* Public */,
      13,    0,  105,    2, 0x0a /* Public */,
      14,    0,  106,    2, 0x0a /* Public */,
      15,    0,  107,    2, 0x0a /* Public */,
      16,    0,  108,    2, 0x0a /* Public */,
      17,    0,  109,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    6,    9,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LinesDraw::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LinesDraw *_t = static_cast<LinesDraw *>(_o);
        switch (_id) {
        case 0: _t->frameAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->frameRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->addEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->removeEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->posChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->lengthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setLenght((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setFps((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->play(); break;
        case 9: _t->stop(); break;
        case 10: _t->pause(); break;
        case 11: _t->removeFrame(); break;
        case 12: _t->addFrame(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LinesDraw::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinesDraw::frameAdded)) {
                *result = 0;
            }
        }
        {
            typedef void (LinesDraw::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinesDraw::frameRemoved)) {
                *result = 1;
            }
        }
        {
            typedef void (LinesDraw::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinesDraw::addEnabled)) {
                *result = 2;
            }
        }
        {
            typedef void (LinesDraw::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinesDraw::removeEnabled)) {
                *result = 3;
            }
        }
        {
            typedef void (LinesDraw::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinesDraw::posChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (LinesDraw::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinesDraw::lengthChanged)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject LinesDraw::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_LinesDraw.data,
      qt_meta_data_LinesDraw,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LinesDraw::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinesDraw::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LinesDraw.stringdata))
        return static_cast<void*>(const_cast< LinesDraw*>(this));
    return QFrame::qt_metacast(_clname);
}

int LinesDraw::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void LinesDraw::frameAdded(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LinesDraw::frameRemoved(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LinesDraw::addEnabled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LinesDraw::removeEnabled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LinesDraw::posChanged(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LinesDraw::lengthChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_Timeline_t {
    QByteArrayData data[19];
    char stringdata[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Timeline_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Timeline_t qt_meta_stringdata_Timeline = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Timeline"
QT_MOC_LITERAL(1, 9, 12), // "frameChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "frame"
QT_MOC_LITERAL(4, 29, 9), // "setActive"
QT_MOC_LITERAL(5, 39, 9), // "changeFps"
QT_MOC_LITERAL(6, 49, 10), // "addEnabled"
QT_MOC_LITERAL(7, 60, 5), // "value"
QT_MOC_LITERAL(8, 66, 13), // "removeEnabled"
QT_MOC_LITERAL(9, 80, 13), // "onPlayPressed"
QT_MOC_LITERAL(10, 94, 14), // "onPausePressed"
QT_MOC_LITERAL(11, 109, 13), // "onStopPressed"
QT_MOC_LITERAL(12, 123, 15), // "onRemovePressed"
QT_MOC_LITERAL(13, 139, 10), // "onSetFrame"
QT_MOC_LITERAL(14, 150, 3), // "pos"
QT_MOC_LITERAL(15, 154, 6), // "played"
QT_MOC_LITERAL(16, 161, 15), // "onLengthChanged"
QT_MOC_LITERAL(17, 177, 12), // "onAddPressed"
QT_MOC_LITERAL(18, 190, 14) // "onStateChanged"

    },
    "Timeline\0frameChanged\0\0frame\0setActive\0"
    "changeFps\0addEnabled\0value\0removeEnabled\0"
    "onPlayPressed\0onPausePressed\0onStopPressed\0"
    "onRemovePressed\0onSetFrame\0pos\0played\0"
    "onLengthChanged\0onAddPressed\0"
    "onStateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Timeline[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   85,    2, 0x08 /* Private */,
       6,    1,   86,    2, 0x08 /* Private */,
       8,    1,   89,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    1,   95,    2, 0x08 /* Private */,
      13,    2,   98,    2, 0x08 /* Private */,
      16,    1,  103,    2, 0x08 /* Private */,
      17,    1,  106,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   14,   15,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void Timeline::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Timeline *_t = static_cast<Timeline *>(_o);
        switch (_id) {
        case 0: _t->frameChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setActive((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->changeFps(); break;
        case 3: _t->addEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->removeEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onPlayPressed(); break;
        case 6: _t->onPausePressed(); break;
        case 7: _t->onStopPressed(); break;
        case 8: _t->onRemovePressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onSetFrame((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->onLengthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->onAddPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->onStateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Timeline::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Timeline::frameChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Timeline::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Timeline::setActive)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Timeline::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Timeline.data,
      qt_meta_data_Timeline,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Timeline::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Timeline::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Timeline.stringdata))
        return static_cast<void*>(const_cast< Timeline*>(this));
    if (!strcmp(_clname, "TimelineInterface"))
        return static_cast< TimelineInterface*>(const_cast< Timeline*>(this));
    if (!strcmp(_clname, "InterfacePlugin"))
        return static_cast< InterfacePlugin*>(const_cast< Timeline*>(this));
    if (!strcmp(_clname, "com.alxn1.MultiFusion.TimelineInterface/1.0"))
        return static_cast< TimelineInterface*>(const_cast< Timeline*>(this));
    if (!strcmp(_clname, "com.alxn1.DocWindow.PluginInterface/1.0"))
        return static_cast< InterfacePlugin*>(const_cast< Timeline*>(this));
    return QWidget::qt_metacast(_clname);
}

int Timeline::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Timeline::frameChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Timeline::setActive(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

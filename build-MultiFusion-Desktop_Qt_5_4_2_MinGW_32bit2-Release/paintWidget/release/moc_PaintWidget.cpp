/****************************************************************************
** Meta object code from reading C++ file 'PaintWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MultiFusion-master/paintWidget/PaintWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PaintWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PaintWidget_t {
    QByteArrayData data[36];
    char stringdata[366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PaintWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PaintWidget_t qt_meta_stringdata_PaintWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PaintWidget"
QT_MOC_LITERAL(1, 12, 9), // "zoomEvent"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "scale"
QT_MOC_LITERAL(4, 29, 10), // "paintEvent"
QT_MOC_LITERAL(5, 40, 6), // "origin"
QT_MOC_LITERAL(6, 47, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(7, 62, 6), // "global"
QT_MOC_LITERAL(8, 69, 12), // "StateChanged"
QT_MOC_LITERAL(9, 82, 5), // "event"
QT_MOC_LITERAL(10, 88, 10), // "undoEvents"
QT_MOC_LITERAL(11, 99, 11), // "movedObject"
QT_MOC_LITERAL(12, 111, 13), // "objectCreated"
QT_MOC_LITERAL(13, 125, 12), // "frameChanged"
QT_MOC_LITERAL(14, 138, 5), // "frame"
QT_MOC_LITERAL(15, 144, 18), // "countFramesChanged"
QT_MOC_LITERAL(16, 163, 5), // "count"
QT_MOC_LITERAL(17, 169, 13), // "layerSelected"
QT_MOC_LITERAL(18, 183, 16), // "allLayersChanged"
QT_MOC_LITERAL(19, 200, 7), // "isFrame"
QT_MOC_LITERAL(20, 208, 5), // "value"
QT_MOC_LITERAL(21, 214, 14), // "figureSelected"
QT_MOC_LITERAL(22, 229, 5), // "layer"
QT_MOC_LITERAL(23, 235, 3), // "obj"
QT_MOC_LITERAL(24, 239, 17), // "backgroundChanged"
QT_MOC_LITERAL(25, 257, 8), // "QWidget*"
QT_MOC_LITERAL(26, 266, 4), // "from"
QT_MOC_LITERAL(27, 271, 13), // "showRectImage"
QT_MOC_LITERAL(28, 285, 12), // "setSizeTo100"
QT_MOC_LITERAL(29, 298, 14), // "RPW_paintEvent"
QT_MOC_LITERAL(30, 313, 10), // "moveFigure"
QT_MOC_LITERAL(31, 324, 8), // "layerOld"
QT_MOC_LITERAL(32, 333, 6), // "objOld"
QT_MOC_LITERAL(33, 340, 8), // "layerNew"
QT_MOC_LITERAL(34, 349, 6), // "objNew"
QT_MOC_LITERAL(35, 356, 9) // "moveLayer"

    },
    "PaintWidget\0zoomEvent\0\0scale\0paintEvent\0"
    "origin\0mouseMoveEvent\0global\0StateChanged\0"
    "event\0undoEvents\0movedObject\0objectCreated\0"
    "frameChanged\0frame\0countFramesChanged\0"
    "count\0layerSelected\0allLayersChanged\0"
    "isFrame\0value\0figureSelected\0layer\0"
    "obj\0backgroundChanged\0QWidget*\0from\0"
    "showRectImage\0setSizeTo100\0RPW_paintEvent\0"
    "moveFigure\0layerOld\0objOld\0layerNew\0"
    "objNew\0moveLayer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaintWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       4,    1,  112,    2, 0x06 /* Public */,
       6,    3,  115,    2, 0x06 /* Public */,
       8,    1,  122,    2, 0x06 /* Public */,
      10,    0,  125,    2, 0x06 /* Public */,
      11,    0,  126,    2, 0x06 /* Public */,
      12,    0,  127,    2, 0x06 /* Public */,
      13,    1,  128,    2, 0x06 /* Public */,
      15,    1,  131,    2, 0x06 /* Public */,
      17,    0,  134,    2, 0x06 /* Public */,
      18,    0,  135,    2, 0x06 /* Public */,
      19,    1,  136,    2, 0x06 /* Public */,
      21,    2,  139,    2, 0x06 /* Public */,
      24,    1,  144,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    0,  147,    2, 0x0a /* Public */,
      28,    0,  148,    2, 0x0a /* Public */,
      29,    1,  149,    2, 0x0a /* Public */,
      30,    4,  152,    2, 0x0a /* Public */,
      35,    2,  161,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint, QMetaType::QReal,    5,    7,    3,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   23,
    QMetaType::Void, 0x80000000 | 25,   26,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   31,   32,   33,   34,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   31,   33,

       0        // eod
};

void PaintWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PaintWidget *_t = static_cast<PaintWidget *>(_o);
        switch (_id) {
        case 0: _t->zoomEvent((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->paintEvent((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->mouseMoveEvent((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 3: _t->StateChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->undoEvents(); break;
        case 5: _t->movedObject(); break;
        case 6: _t->objectCreated(); break;
        case 7: _t->frameChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->countFramesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->layerSelected(); break;
        case 10: _t->allLayersChanged(); break;
        case 11: _t->isFrame((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->figureSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->backgroundChanged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 14: _t->showRectImage(); break;
        case 15: _t->setSizeTo100(); break;
        case 16: _t->RPW_paintEvent((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 17: _t->moveFigure((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 18: _t->moveLayer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PaintWidget::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaintWidget::zoomEvent)) {
                *result = 0;
            }
        }
        {
            typedef void (PaintWidget::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaintWidget::paintEvent)) {
                *result = 1;
            }
        }
        {
            typedef void (PaintWidget::*_t)(QPoint , QPoint , qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaintWidget::mouseMoveEvent)) {
                *result = 2;
            }
        }
        {
            typedef void (PaintWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaintWidget::StateChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (PaintWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaintWidget::undoEvents)) {
                *result = 4;
            }
        }
        {
            typedef void (PaintWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaintWidget::movedObject)) {
                *result = 5;
            }
        }
        {
            typedef void (PaintWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaintWidget::objectCreated)) {
                *result = 6;
            }
        }
        {
            typedef void (PaintWidget::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaintWidget::frameChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (PaintWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaintWidget::countFramesChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (PaintWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaintWidget::layerSelected)) {
                *result = 9;
            }
        }
        {
            typedef void (PaintWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaintWidget::allLayersChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (PaintWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaintWidget::isFrame)) {
                *result = 11;
            }
        }
        {
            typedef void (PaintWidget::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaintWidget::figureSelected)) {
                *result = 12;
            }
        }
        {
            typedef void (PaintWidget::*_t)(QWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaintWidget::backgroundChanged)) {
                *result = 13;
            }
        }
    }
}

const QMetaObject PaintWidget::staticMetaObject = {
    { &PaintWidgetInterface::staticMetaObject, qt_meta_stringdata_PaintWidget.data,
      qt_meta_data_PaintWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PaintWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaintWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PaintWidget.stringdata))
        return static_cast<void*>(const_cast< PaintWidget*>(this));
    if (!strcmp(_clname, "com.alxn1.sacs2.PaintWidgetInterface/1.0"))
        return static_cast< PaintWidgetInterface*>(const_cast< PaintWidget*>(this));
    return PaintWidgetInterface::qt_metacast(_clname);
}

int PaintWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PaintWidgetInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void PaintWidget::zoomEvent(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PaintWidget::paintEvent(QPoint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PaintWidget::mouseMoveEvent(QPoint _t1, QPoint _t2, qreal _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PaintWidget::StateChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PaintWidget::undoEvents()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void PaintWidget::movedObject()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void PaintWidget::objectCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void PaintWidget::frameChanged(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PaintWidget::countFramesChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PaintWidget::layerSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void PaintWidget::allLayersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void PaintWidget::isFrame(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void PaintWidget::figureSelected(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void PaintWidget::backgroundChanged(QWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_END_MOC_NAMESPACE

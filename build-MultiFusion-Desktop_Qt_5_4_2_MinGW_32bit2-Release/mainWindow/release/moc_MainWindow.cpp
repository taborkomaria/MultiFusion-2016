/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MultiFusion-master/mainWindow/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mainWindow_t {
    QByteArrayData data[62];
    char stringdata[788];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainWindow_t qt_meta_stringdata_mainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "mainWindow"
QT_MOC_LITERAL(1, 11, 12), // "StateChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "event"
QT_MOC_LITERAL(4, 31, 13), // "onStyleFigure"
QT_MOC_LITERAL(5, 45, 12), // "onShowBezier"
QT_MOC_LITERAL(6, 58, 11), // "onloadImage"
QT_MOC_LITERAL(7, 70, 22), // "showViewportProperties"
QT_MOC_LITERAL(8, 93, 13), // "onShowPlugins"
QT_MOC_LITERAL(9, 107, 8), // "onDelete"
QT_MOC_LITERAL(10, 116, 5), // "onCut"
QT_MOC_LITERAL(11, 122, 14), // "onShowEditMenu"
QT_MOC_LITERAL(12, 137, 6), // "onCopy"
QT_MOC_LITERAL(13, 144, 7), // "onPaste"
QT_MOC_LITERAL(14, 152, 9), // "onNewFile"
QT_MOC_LITERAL(15, 162, 10), // "onOpenFile"
QT_MOC_LITERAL(16, 173, 10), // "onSaveFile"
QT_MOC_LITERAL(17, 184, 12), // "onSaveFileAs"
QT_MOC_LITERAL(18, 197, 11), // "deleteFrame"
QT_MOC_LITERAL(19, 209, 8), // "position"
QT_MOC_LITERAL(20, 218, 15), // "onZoomInPressed"
QT_MOC_LITERAL(21, 234, 16), // "onZoomOutPressed"
QT_MOC_LITERAL(22, 251, 22), // "onSelectionToolPressed"
QT_MOC_LITERAL(23, 274, 21), // "onAddPointToolPressed"
QT_MOC_LITERAL(24, 296, 14), // "onToolSelected"
QT_MOC_LITERAL(25, 311, 20), // "FigureToolInterface*"
QT_MOC_LITERAL(26, 332, 4), // "tool"
QT_MOC_LITERAL(27, 337, 14), // "onFrameChanged"
QT_MOC_LITERAL(28, 352, 5), // "frame"
QT_MOC_LITERAL(29, 358, 6), // "played"
QT_MOC_LITERAL(30, 365, 14), // "onRenameFigure"
QT_MOC_LITERAL(31, 380, 5), // "layer"
QT_MOC_LITERAL(32, 386, 3), // "obj"
QT_MOC_LITERAL(33, 390, 7), // "newName"
QT_MOC_LITERAL(34, 398, 13), // "onRenameLayer"
QT_MOC_LITERAL(35, 412, 21), // "onFigureVisibleChange"
QT_MOC_LITERAL(36, 434, 7), // "visible"
QT_MOC_LITERAL(37, 442, 20), // "onLayerVisibleChange"
QT_MOC_LITERAL(38, 463, 21), // "onFigureBlockedChange"
QT_MOC_LITERAL(39, 485, 7), // "blocked"
QT_MOC_LITERAL(40, 493, 20), // "onLayerBlockedChange"
QT_MOC_LITERAL(41, 514, 16), // "onFigureSelected"
QT_MOC_LITERAL(42, 531, 10), // "onAddLayer"
QT_MOC_LITERAL(43, 542, 4), // "name"
QT_MOC_LITERAL(44, 547, 31), // "onFigureDeletedFromLayersEditor"
QT_MOC_LITERAL(45, 579, 10), // "onExitMenu"
QT_MOC_LITERAL(46, 590, 25), // "onToggleMainToolbarWindow"
QT_MOC_LITERAL(47, 616, 12), // "onPenChanged"
QT_MOC_LITERAL(48, 629, 1), // "p"
QT_MOC_LITERAL(49, 631, 14), // "onBrushChanged"
QT_MOC_LITERAL(50, 646, 1), // "b"
QT_MOC_LITERAL(51, 648, 15), // "onGroupSelected"
QT_MOC_LITERAL(52, 664, 17), // "onUngroupSelected"
QT_MOC_LITERAL(53, 682, 10), // "onShowHelp"
QT_MOC_LITERAL(54, 693, 7), // "onAbout"
QT_MOC_LITERAL(55, 701, 9), // "onAboutQt"
QT_MOC_LITERAL(56, 711, 14), // "onRPWMouseMove"
QT_MOC_LITERAL(57, 726, 6), // "onZoom"
QT_MOC_LITERAL(58, 733, 12), // "onRotate90CW"
QT_MOC_LITERAL(59, 746, 13), // "onRotate90CWW"
QT_MOC_LITERAL(60, 760, 14), // "flipHorisontal"
QT_MOC_LITERAL(61, 775, 12) // "flipVertical"

    },
    "mainWindow\0StateChanged\0\0event\0"
    "onStyleFigure\0onShowBezier\0onloadImage\0"
    "showViewportProperties\0onShowPlugins\0"
    "onDelete\0onCut\0onShowEditMenu\0onCopy\0"
    "onPaste\0onNewFile\0onOpenFile\0onSaveFile\0"
    "onSaveFileAs\0deleteFrame\0position\0"
    "onZoomInPressed\0onZoomOutPressed\0"
    "onSelectionToolPressed\0onAddPointToolPressed\0"
    "onToolSelected\0FigureToolInterface*\0"
    "tool\0onFrameChanged\0frame\0played\0"
    "onRenameFigure\0layer\0obj\0newName\0"
    "onRenameLayer\0onFigureVisibleChange\0"
    "visible\0onLayerVisibleChange\0"
    "onFigureBlockedChange\0blocked\0"
    "onLayerBlockedChange\0onFigureSelected\0"
    "onAddLayer\0name\0onFigureDeletedFromLayersEditor\0"
    "onExitMenu\0onToggleMainToolbarWindow\0"
    "onPenChanged\0p\0onBrushChanged\0b\0"
    "onGroupSelected\0onUngroupSelected\0"
    "onShowHelp\0onAbout\0onAboutQt\0"
    "onRPWMouseMove\0onZoom\0onRotate90CW\0"
    "onRotate90CWW\0flipHorisontal\0flipVertical"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  244,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  247,    2, 0x0a /* Public */,
       5,    0,  248,    2, 0x0a /* Public */,
       6,    0,  249,    2, 0x0a /* Public */,
       7,    0,  250,    2, 0x0a /* Public */,
       8,    0,  251,    2, 0x0a /* Public */,
       9,    0,  252,    2, 0x0a /* Public */,
      10,    0,  253,    2, 0x0a /* Public */,
      11,    0,  254,    2, 0x0a /* Public */,
      12,    0,  255,    2, 0x0a /* Public */,
      13,    0,  256,    2, 0x0a /* Public */,
      14,    0,  257,    2, 0x0a /* Public */,
      15,    0,  258,    2, 0x0a /* Public */,
      16,    0,  259,    2, 0x0a /* Public */,
      17,    0,  260,    2, 0x0a /* Public */,
      18,    1,  261,    2, 0x0a /* Public */,
      20,    0,  264,    2, 0x0a /* Public */,
      21,    0,  265,    2, 0x0a /* Public */,
      22,    0,  266,    2, 0x0a /* Public */,
      23,    0,  267,    2, 0x0a /* Public */,
      24,    1,  268,    2, 0x0a /* Public */,
      27,    2,  271,    2, 0x0a /* Public */,
      30,    3,  276,    2, 0x0a /* Public */,
      34,    2,  283,    2, 0x0a /* Public */,
      35,    3,  288,    2, 0x0a /* Public */,
      37,    2,  295,    2, 0x0a /* Public */,
      38,    3,  300,    2, 0x0a /* Public */,
      40,    2,  307,    2, 0x0a /* Public */,
      41,    2,  312,    2, 0x0a /* Public */,
      42,    3,  317,    2, 0x0a /* Public */,
      44,    2,  324,    2, 0x0a /* Public */,
      45,    0,  329,    2, 0x0a /* Public */,
      46,    1,  330,    2, 0x0a /* Public */,
      47,    1,  333,    2, 0x0a /* Public */,
      49,    1,  336,    2, 0x0a /* Public */,
      51,    0,  339,    2, 0x0a /* Public */,
      52,    0,  340,    2, 0x0a /* Public */,
      53,    0,  341,    2, 0x0a /* Public */,
      54,    0,  342,    2, 0x0a /* Public */,
      55,    0,  343,    2, 0x0a /* Public */,
      56,    3,  344,    2, 0x0a /* Public */,
      57,    1,  351,    2, 0x0a /* Public */,
      58,    0,  354,    2, 0x0a /* Public */,
      59,    0,  355,    2, 0x0a /* Public */,
      60,    0,  356,    2, 0x0a /* Public */,
      61,    0,  357,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   28,   29,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   31,   32,   33,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   31,   33,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   31,   32,   36,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   31,   36,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   31,   32,   39,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   31,   39,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   31,   32,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::QString,   36,   39,   43,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   31,   32,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::QPen,   48,
    QMetaType::Void, QMetaType::QBrush,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint, QMetaType::QReal,    2,    2,    2,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mainWindow *_t = static_cast<mainWindow *>(_o);
        switch (_id) {
        case 0: _t->StateChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onStyleFigure(); break;
        case 2: _t->onShowBezier(); break;
        case 3: _t->onloadImage(); break;
        case 4: _t->showViewportProperties(); break;
        case 5: _t->onShowPlugins(); break;
        case 6: _t->onDelete(); break;
        case 7: _t->onCut(); break;
        case 8: _t->onShowEditMenu(); break;
        case 9: _t->onCopy(); break;
        case 10: _t->onPaste(); break;
        case 11: _t->onNewFile(); break;
        case 12: _t->onOpenFile(); break;
        case 13: _t->onSaveFile(); break;
        case 14: _t->onSaveFileAs(); break;
        case 15: _t->deleteFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->onZoomInPressed(); break;
        case 17: _t->onZoomOutPressed(); break;
        case 18: _t->onSelectionToolPressed(); break;
        case 19: _t->onAddPointToolPressed(); break;
        case 20: _t->onToolSelected((*reinterpret_cast< FigureToolInterface*(*)>(_a[1]))); break;
        case 21: _t->onFrameChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 22: _t->onRenameFigure((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 23: _t->onRenameLayer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 24: _t->onFigureVisibleChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 25: _t->onLayerVisibleChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 26: _t->onFigureBlockedChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 27: _t->onLayerBlockedChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->onFigureSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 29: _t->onAddLayer((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 30: _t->onFigureDeletedFromLayersEditor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->onExitMenu(); break;
        case 32: _t->onToggleMainToolbarWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->onPenChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 34: _t->onBrushChanged((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        case 35: _t->onGroupSelected(); break;
        case 36: _t->onUngroupSelected(); break;
        case 37: _t->onShowHelp(); break;
        case 38: _t->onAbout(); break;
        case 39: _t->onAboutQt(); break;
        case 40: _t->onRPWMouseMove((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 41: _t->onZoom((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 42: _t->onRotate90CW(); break;
        case 43: _t->onRotate90CWW(); break;
        case 44: _t->flipHorisontal(); break;
        case 45: _t->flipVertical(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mainWindow::StateChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject mainWindow::staticMetaObject = {
    { &MainWindowInterface::staticMetaObject, qt_meta_stringdata_mainWindow.data,
      qt_meta_data_mainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mainWindow.stringdata))
        return static_cast<void*>(const_cast< mainWindow*>(this));
    if (!strcmp(_clname, "com.alxn1.sacs2.MainWindowInterface/1.0"))
        return static_cast< MainWindowInterface*>(const_cast< mainWindow*>(this));
    return MainWindowInterface::qt_metacast(_clname);
}

int mainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindowInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 46;
    }
    return _id;
}

// SIGNAL 0
void mainWindow::StateChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

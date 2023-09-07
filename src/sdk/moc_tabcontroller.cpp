/****************************************************************************
** Meta object code from reading C++ file 'tabcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/sdk/tabcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TabController_t {
    QByteArrayData data[12];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabController_t qt_meta_stringdata_TabController = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TabController"
QT_MOC_LITERAL(1, 14, 4), // "init"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 13), // "restartWizard"
QT_MOC_LITERAL(4, 34, 23), // "onSettingsButtonClicked"
QT_MOC_LITERAL(5, 58, 25), // "onAboutApplicationClicked"
QT_MOC_LITERAL(6, 84, 19), // "onClearCacheClicked"
QT_MOC_LITERAL(7, 104, 18), // "onCurrentIdChanged"
QT_MOC_LITERAL(8, 123, 5), // "newId"
QT_MOC_LITERAL(9, 129, 24), // "onNetworkSettingsChanged"
QT_MOC_LITERAL(10, 154, 20), // "QInstaller::Settings"
QT_MOC_LITERAL(11, 175, 8) // "settings"

    },
    "TabController\0init\0\0restartWizard\0"
    "onSettingsButtonClicked\0"
    "onAboutApplicationClicked\0onClearCacheClicked\0"
    "onCurrentIdChanged\0newId\0"
    "onNetworkSettingsChanged\0QInstaller::Settings\0"
    "settings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void TabController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TabController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->init();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->restartWizard(); break;
        case 2: _t->onSettingsButtonClicked(); break;
        case 3: _t->onAboutApplicationClicked(); break;
        case 4: _t->onClearCacheClicked(); break;
        case 5: _t->onCurrentIdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onNetworkSettingsChanged((*reinterpret_cast< const QInstaller::Settings(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TabController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TabController.data,
    qt_meta_data_TabController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TabController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TabController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TabController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

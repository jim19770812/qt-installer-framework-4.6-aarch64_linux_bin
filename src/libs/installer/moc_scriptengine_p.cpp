/****************************************************************************
** Meta object code from reading C++ file 'scriptengine_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/installer/scriptengine_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scriptengine_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInstaller__ConsoleProxy_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__ConsoleProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__ConsoleProxy_t qt_meta_stringdata_QInstaller__ConsoleProxy = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QInstaller::ConsoleProxy"
QT_MOC_LITERAL(1, 25, 3), // "log"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "QInstaller::ConsoleProxy\0log\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__ConsoleProxy[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    1,

       0        // eod
};

void QInstaller::ConsoleProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConsoleProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->log((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::ConsoleProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__ConsoleProxy.data,
    qt_meta_data_QInstaller__ConsoleProxy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::ConsoleProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::ConsoleProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__ConsoleProxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInstaller::ConsoleProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QInstaller__InstallerProxy_t {
    QByteArrayData data[7];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__InstallerProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__InstallerProxy_t qt_meta_stringdata_QInstaller__InstallerProxy = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QInstaller::InstallerProxy"
QT_MOC_LITERAL(1, 27, 10), // "components"
QT_MOC_LITERAL(2, 38, 8), // "QJSValue"
QT_MOC_LITERAL(3, 47, 0), // ""
QT_MOC_LITERAL(4, 48, 6), // "regexp"
QT_MOC_LITERAL(5, 55, 15), // "componentByName"
QT_MOC_LITERAL(6, 71, 13) // "componentName"

    },
    "QInstaller::InstallerProxy\0components\0"
    "QJSValue\0\0regexp\0componentByName\0"
    "componentName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__InstallerProxy[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString,    4,
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QString,    6,

       0        // eod
};

void QInstaller::InstallerProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstallerProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QJSValue _r = _t->components((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 1: { QJSValue _r = _t->components();
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 2: { QJSValue _r = _t->componentByName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::InstallerProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__InstallerProxy.data,
    qt_meta_data_QInstaller__InstallerProxy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::InstallerProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::InstallerProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__InstallerProxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInstaller::InstallerProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_QInstaller__QFileDialogProxy_t {
    QByteArrayData data[8];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__QFileDialogProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__QFileDialogProxy_t qt_meta_stringdata_QInstaller__QFileDialogProxy = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QInstaller::QFileDialogProxy"
QT_MOC_LITERAL(1, 29, 20), // "getExistingDirectory"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 7), // "caption"
QT_MOC_LITERAL(4, 59, 3), // "dir"
QT_MOC_LITERAL(5, 63, 10), // "identifier"
QT_MOC_LITERAL(6, 74, 15), // "getOpenFileName"
QT_MOC_LITERAL(7, 90, 6) // "filter"

    },
    "QInstaller::QFileDialogProxy\0"
    "getExistingDirectory\0\0caption\0dir\0"
    "identifier\0getOpenFileName\0filter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__QFileDialogProxy[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x0a /* Public */,
       1,    2,   41,    2, 0x2a /* Public | MethodCloned */,
       6,    4,   46,    2, 0x0a /* Public */,
       6,    3,   55,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    7,    5,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    7,

       0        // eod
};

void QInstaller::QFileDialogProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QFileDialogProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->getExistingDirectory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->getExistingDirectory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->getOpenFileName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->getOpenFileName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::QFileDialogProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__QFileDialogProxy.data,
    qt_meta_data_QInstaller__QFileDialogProxy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::QFileDialogProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::QFileDialogProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__QFileDialogProxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInstaller::QFileDialogProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_QInstaller__QDesktopServicesProxy_t {
    QByteArrayData data[11];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__QDesktopServicesProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__QDesktopServicesProxy_t qt_meta_stringdata_QInstaller__QDesktopServicesProxy = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QInstaller::QDesktopServicesP..."
QT_MOC_LITERAL(1, 34, 7), // "openUrl"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 3), // "url"
QT_MOC_LITERAL(4, 47, 11), // "displayName"
QT_MOC_LITERAL(5, 59, 8), // "location"
QT_MOC_LITERAL(6, 68, 15), // "storageLocation"
QT_MOC_LITERAL(7, 84, 9), // "findFiles"
QT_MOC_LITERAL(8, 94, 8), // "QJSValue"
QT_MOC_LITERAL(9, 103, 4), // "path"
QT_MOC_LITERAL(10, 108, 7) // "pattern"

    },
    "QInstaller::QDesktopServicesProxy\0"
    "openUrl\0\0url\0displayName\0location\0"
    "storageLocation\0findFiles\0QJSValue\0"
    "path\0pattern"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__QDesktopServicesProxy[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       6,    1,   40,    2, 0x0a /* Public */,
       7,    2,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::Int,    5,
    QMetaType::QString, QMetaType::Int,    5,
    0x80000000 | 8, QMetaType::QString, QMetaType::QString,    9,   10,

       0        // eod
};

void QInstaller::QDesktopServicesProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QDesktopServicesProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->openUrl((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->displayName((*reinterpret_cast< qint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->storageLocation((*reinterpret_cast< qint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QJSValue _r = _t->findFiles((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::QDesktopServicesProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__QDesktopServicesProxy.data,
    qt_meta_data_QInstaller__QDesktopServicesProxy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::QDesktopServicesProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::QDesktopServicesProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__QDesktopServicesProxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInstaller::QDesktopServicesProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_QInstaller__GuiProxy_t {
    QByteArrayData data[39];
    char stringdata0[496];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__GuiProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__GuiProxy_t qt_meta_stringdata_QInstaller__GuiProxy = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QInstaller::GuiProxy"
QT_MOC_LITERAL(1, 21, 11), // "interrupted"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "languageChanged"
QT_MOC_LITERAL(4, 50, 19), // "finishButtonClicked"
QT_MOC_LITERAL(5, 70, 12), // "gotRestarted"
QT_MOC_LITERAL(6, 83, 21), // "settingsButtonClicked"
QT_MOC_LITERAL(7, 105, 19), // "cancelButtonClicked"
QT_MOC_LITERAL(8, 125, 6), // "reject"
QT_MOC_LITERAL(9, 132, 19), // "rejectWithoutPrompt"
QT_MOC_LITERAL(10, 152, 16), // "showFinishedPage"
QT_MOC_LITERAL(11, 169, 11), // "setModified"
QT_MOC_LITERAL(12, 181, 5), // "value"
QT_MOC_LITERAL(13, 187, 8), // "pageById"
QT_MOC_LITERAL(14, 196, 8), // "QJSValue"
QT_MOC_LITERAL(15, 205, 2), // "id"
QT_MOC_LITERAL(16, 208, 16), // "pageByObjectName"
QT_MOC_LITERAL(17, 225, 4), // "name"
QT_MOC_LITERAL(18, 230, 17), // "currentPageWidget"
QT_MOC_LITERAL(19, 248, 22), // "pageWidgetByObjectName"
QT_MOC_LITERAL(20, 271, 17), // "defaultButtonText"
QT_MOC_LITERAL(21, 289, 12), // "wizardButton"
QT_MOC_LITERAL(22, 302, 11), // "clickButton"
QT_MOC_LITERAL(23, 314, 9), // "delayInMs"
QT_MOC_LITERAL(24, 324, 10), // "objectName"
QT_MOC_LITERAL(25, 335, 15), // "isButtonEnabled"
QT_MOC_LITERAL(26, 351, 18), // "showSettingsButton"
QT_MOC_LITERAL(27, 370, 4), // "show"
QT_MOC_LITERAL(28, 375, 24), // "setSettingsButtonEnabled"
QT_MOC_LITERAL(29, 400, 6), // "enable"
QT_MOC_LITERAL(30, 407, 9), // "findChild"
QT_MOC_LITERAL(31, 417, 6), // "parent"
QT_MOC_LITERAL(32, 424, 12), // "findChildren"
QT_MOC_LITERAL(33, 437, 15), // "QList<QJSValue>"
QT_MOC_LITERAL(34, 453, 9), // "setSilent"
QT_MOC_LITERAL(35, 463, 6), // "silent"
QT_MOC_LITERAL(36, 470, 12), // "setTextItems"
QT_MOC_LITERAL(37, 483, 6), // "object"
QT_MOC_LITERAL(38, 490, 5) // "items"

    },
    "QInstaller::GuiProxy\0interrupted\0\0"
    "languageChanged\0finishButtonClicked\0"
    "gotRestarted\0settingsButtonClicked\0"
    "cancelButtonClicked\0reject\0"
    "rejectWithoutPrompt\0showFinishedPage\0"
    "setModified\0value\0pageById\0QJSValue\0"
    "id\0pageByObjectName\0name\0currentPageWidget\0"
    "pageWidgetByObjectName\0defaultButtonText\0"
    "wizardButton\0clickButton\0delayInMs\0"
    "objectName\0isButtonEnabled\0"
    "showSettingsButton\0show\0"
    "setSettingsButtonEnabled\0enable\0"
    "findChild\0parent\0findChildren\0"
    "QList<QJSValue>\0setSilent\0silent\0"
    "setTextItems\0object\0items"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__GuiProxy[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x06 /* Public */,
       3,    0,  145,    2, 0x06 /* Public */,
       4,    0,  146,    2, 0x06 /* Public */,
       5,    0,  147,    2, 0x06 /* Public */,
       6,    0,  148,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  149,    2, 0x0a /* Public */,
       8,    0,  150,    2, 0x0a /* Public */,
       9,    0,  151,    2, 0x0a /* Public */,
      10,    0,  152,    2, 0x0a /* Public */,
      11,    1,  153,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      13,    1,  156,    2, 0x02 /* Public */,
      16,    1,  159,    2, 0x02 /* Public */,
      18,    0,  162,    2, 0x02 /* Public */,
      19,    1,  163,    2, 0x02 /* Public */,
      20,    1,  166,    2, 0x02 /* Public */,
      22,    2,  169,    2, 0x02 /* Public */,
      22,    1,  174,    2, 0x22 /* Public | MethodCloned */,
      22,    2,  177,    2, 0x02 /* Public */,
      22,    1,  182,    2, 0x22 /* Public | MethodCloned */,
      25,    1,  185,    2, 0x02 /* Public */,
      26,    1,  188,    2, 0x02 /* Public */,
      28,    1,  191,    2, 0x02 /* Public */,
      30,    2,  194,    2, 0x02 /* Public */,
      32,    2,  199,    2, 0x02 /* Public */,
      34,    1,  204,    2, 0x02 /* Public */,
      36,    2,  207,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,

 // methods: parameters
    0x80000000 | 14, QMetaType::Int,   15,
    0x80000000 | 14, QMetaType::QString,   17,
    0x80000000 | 14,
    0x80000000 | 14, QMetaType::QString,   17,
    QMetaType::QString, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   21,   23,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   24,   23,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Bool, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   29,
    0x80000000 | 14, QMetaType::QObjectStar, QMetaType::QString,   31,   24,
    0x80000000 | 33, QMetaType::QObjectStar, QMetaType::QString,   31,   24,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QStringList,   37,   38,

       0        // eod
};

void QInstaller::GuiProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->interrupted(); break;
        case 1: _t->languageChanged(); break;
        case 2: _t->finishButtonClicked(); break;
        case 3: _t->gotRestarted(); break;
        case 4: _t->settingsButtonClicked(); break;
        case 5: _t->cancelButtonClicked(); break;
        case 6: _t->reject(); break;
        case 7: _t->rejectWithoutPrompt(); break;
        case 8: _t->showFinishedPage(); break;
        case 9: _t->setModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: { QJSValue _r = _t->pageById((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 11: { QJSValue _r = _t->pageByObjectName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 12: { QJSValue _r = _t->currentPageWidget();
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 13: { QJSValue _r = _t->pageWidgetByObjectName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->defaultButtonText((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->clickButton((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->clickButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->clickButton((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->clickButton((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: { bool _r = _t->isButtonEnabled((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->showSettingsButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->setSettingsButtonEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: { QJSValue _r = _t->findChild((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 23: { QList<QJSValue> _r = _t->findChildren((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QJSValue>*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->setSilent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->setTextItems((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GuiProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiProxy::interrupted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GuiProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiProxy::languageChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GuiProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiProxy::finishButtonClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GuiProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiProxy::gotRestarted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GuiProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiProxy::settingsButtonClicked)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::GuiProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__GuiProxy.data,
    qt_meta_data_QInstaller__GuiProxy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::GuiProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::GuiProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__GuiProxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInstaller::GuiProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void QInstaller::GuiProxy::interrupted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QInstaller::GuiProxy::languageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QInstaller::GuiProxy::finishButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QInstaller::GuiProxy::gotRestarted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QInstaller::GuiProxy::settingsButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

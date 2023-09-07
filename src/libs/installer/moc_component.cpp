/****************************************************************************
** Meta object code from reading C++ file 'component.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/installer/component.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'component.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInstaller__Component_t {
    QByteArrayData data[74];
    char stringdata0[1139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__Component_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__Component_t qt_meta_stringdata_QInstaller__Component = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QInstaller::Component"
QT_MOC_LITERAL(1, 22, 6), // "loaded"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 19), // "virtualStateChanged"
QT_MOC_LITERAL(4, 50, 12), // "valueChanged"
QT_MOC_LITERAL(5, 63, 3), // "key"
QT_MOC_LITERAL(6, 67, 5), // "value"
QT_MOC_LITERAL(7, 73, 23), // "setAutoCreateOperations"
QT_MOC_LITERAL(8, 97, 20), // "autoCreateOperations"
QT_MOC_LITERAL(9, 118, 15), // "updateModelData"
QT_MOC_LITERAL(10, 134, 8), // "setValue"
QT_MOC_LITERAL(11, 143, 12), // "defaultValue"
QT_MOC_LITERAL(12, 156, 13), // "userInterface"
QT_MOC_LITERAL(13, 170, 8), // "QWidget*"
QT_MOC_LITERAL(14, 179, 4), // "name"
QT_MOC_LITERAL(15, 184, 17), // "beginInstallation"
QT_MOC_LITERAL(16, 202, 16), // "createOperations"
QT_MOC_LITERAL(17, 219, 26), // "createOperationsForArchive"
QT_MOC_LITERAL(18, 246, 7), // "archive"
QT_MOC_LITERAL(19, 254, 23), // "createOperationsForPath"
QT_MOC_LITERAL(20, 278, 4), // "path"
QT_MOC_LITERAL(21, 283, 29), // "registerPathForUninstallation"
QT_MOC_LITERAL(22, 313, 4), // "wipe"
QT_MOC_LITERAL(23, 318, 12), // "addOperation"
QT_MOC_LITERAL(24, 331, 15), // "QQmlV4Function*"
QT_MOC_LITERAL(25, 347, 4), // "args"
QT_MOC_LITERAL(26, 352, 20), // "addElevatedOperation"
QT_MOC_LITERAL(27, 373, 22), // "addDownloadableArchive"
QT_MOC_LITERAL(28, 396, 25), // "removeDownloadableArchive"
QT_MOC_LITERAL(29, 422, 30), // "addStopProcessForUpdateRequest"
QT_MOC_LITERAL(30, 453, 7), // "process"
QT_MOC_LITERAL(31, 461, 33), // "removeStopProcessForUpdateReq..."
QT_MOC_LITERAL(32, 495, 30), // "setStopProcessForUpdateRequest"
QT_MOC_LITERAL(33, 526, 9), // "requested"
QT_MOC_LITERAL(34, 536, 13), // "addDependency"
QT_MOC_LITERAL(35, 550, 13), // "newDependency"
QT_MOC_LITERAL(36, 564, 15), // "addAutoDependOn"
QT_MOC_LITERAL(37, 580, 11), // "newDependOn"
QT_MOC_LITERAL(38, 592, 9), // "isDefault"
QT_MOC_LITERAL(39, 602, 14), // "isAutoDependOn"
QT_MOC_LITERAL(40, 617, 13), // "QSet<QString>"
QT_MOC_LITERAL(41, 631, 19), // "componentsToInstall"
QT_MOC_LITERAL(42, 651, 12), // "setInstalled"
QT_MOC_LITERAL(43, 664, 11), // "isInstalled"
QT_MOC_LITERAL(44, 676, 7), // "version"
QT_MOC_LITERAL(45, 684, 21), // "installationRequested"
QT_MOC_LITERAL(46, 706, 14), // "setUninstalled"
QT_MOC_LITERAL(47, 721, 13), // "isUninstalled"
QT_MOC_LITERAL(48, 735, 23), // "uninstallationRequested"
QT_MOC_LITERAL(49, 759, 22), // "isFromOnlineRepository"
QT_MOC_LITERAL(50, 782, 18), // "setUpdateAvailable"
QT_MOC_LITERAL(51, 801, 17), // "isUpdateAvailable"
QT_MOC_LITERAL(52, 819, 15), // "updateRequested"
QT_MOC_LITERAL(53, 835, 24), // "componentChangeRequested"
QT_MOC_LITERAL(54, 860, 14), // "isForcedUpdate"
QT_MOC_LITERAL(55, 875, 11), // "displayName"
QT_MOC_LITERAL(56, 887, 8), // "archives"
QT_MOC_LITERAL(57, 896, 14), // "userInterfaces"
QT_MOC_LITERAL(58, 911, 12), // "dependencies"
QT_MOC_LITERAL(59, 924, 16), // "autoDependencies"
QT_MOC_LITERAL(60, 941, 20), // "fromOnlineRepository"
QT_MOC_LITERAL(61, 962, 13), // "repositoryUrl"
QT_MOC_LITERAL(62, 976, 7), // "default"
QT_MOC_LITERAL(63, 984, 9), // "installed"
QT_MOC_LITERAL(64, 994, 7), // "enabled"
QT_MOC_LITERAL(65, 1002, 8), // "unstable"
QT_MOC_LITERAL(66, 1011, 8), // "treeName"
QT_MOC_LITERAL(67, 1020, 13), // "UnstableError"
QT_MOC_LITERAL(68, 1034, 17), // "DepencyToUnstable"
QT_MOC_LITERAL(69, 1052, 11), // "ShaMismatch"
QT_MOC_LITERAL(70, 1064, 19), // "ScriptLoadingFailed"
QT_MOC_LITERAL(71, 1084, 17), // "MissingDependency"
QT_MOC_LITERAL(72, 1102, 15), // "InvalidTreeName"
QT_MOC_LITERAL(73, 1118, 20) // "DescendantOfUnstable"

    },
    "QInstaller::Component\0loaded\0\0"
    "virtualStateChanged\0valueChanged\0key\0"
    "value\0setAutoCreateOperations\0"
    "autoCreateOperations\0updateModelData\0"
    "setValue\0defaultValue\0userInterface\0"
    "QWidget*\0name\0beginInstallation\0"
    "createOperations\0createOperationsForArchive\0"
    "archive\0createOperationsForPath\0path\0"
    "registerPathForUninstallation\0wipe\0"
    "addOperation\0QQmlV4Function*\0args\0"
    "addElevatedOperation\0addDownloadableArchive\0"
    "removeDownloadableArchive\0"
    "addStopProcessForUpdateRequest\0process\0"
    "removeStopProcessForUpdateRequest\0"
    "setStopProcessForUpdateRequest\0requested\0"
    "addDependency\0newDependency\0addAutoDependOn\0"
    "newDependOn\0isDefault\0isAutoDependOn\0"
    "QSet<QString>\0componentsToInstall\0"
    "setInstalled\0isInstalled\0version\0"
    "installationRequested\0setUninstalled\0"
    "isUninstalled\0uninstallationRequested\0"
    "isFromOnlineRepository\0setUpdateAvailable\0"
    "isUpdateAvailable\0updateRequested\0"
    "componentChangeRequested\0isForcedUpdate\0"
    "displayName\0archives\0userInterfaces\0"
    "dependencies\0autoDependencies\0"
    "fromOnlineRepository\0repositoryUrl\0"
    "default\0installed\0enabled\0unstable\0"
    "treeName\0UnstableError\0DepencyToUnstable\0"
    "ShaMismatch\0ScriptLoadingFailed\0"
    "MissingDependency\0InvalidTreeName\0"
    "DescendantOfUnstable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__Component[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
      14,  306, // properties
       1,  348, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  209,    2, 0x06 /* Public */,
       3,    0,  210,    2, 0x06 /* Public */,
       4,    2,  211,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  216,    2, 0x0a /* Public */,
       9,    2,  219,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      10,    2,  224,    2, 0x02 /* Public */,
       6,    2,  229,    2, 0x02 /* Public */,
       6,    1,  234,    2, 0x22 /* Public | MethodCloned */,
      12,    1,  237,    2, 0x02 /* Public */,
      15,    0,  240,    2, 0x02 /* Public */,
      16,    0,  241,    2, 0x02 /* Public */,
      17,    1,  242,    2, 0x02 /* Public */,
      19,    1,  245,    2, 0x02 /* Public */,
      21,    2,  248,    2, 0x02 /* Public */,
      21,    1,  253,    2, 0x22 /* Public | MethodCloned */,
      23,    1,  256,    2, 0x02 /* Public */,
      26,    1,  259,    2, 0x02 /* Public */,
      27,    1,  262,    2, 0x02 /* Public */,
      28,    1,  265,    2, 0x02 /* Public */,
      29,    1,  268,    2, 0x02 /* Public */,
      31,    1,  271,    2, 0x02 /* Public */,
      32,    2,  274,    2, 0x02 /* Public */,
      34,    1,  279,    2, 0x02 /* Public */,
      36,    1,  282,    2, 0x02 /* Public */,
      38,    0,  285,    2, 0x02 /* Public */,
      39,    1,  286,    2, 0x02 /* Public */,
      42,    0,  289,    2, 0x02 /* Public */,
      43,    1,  290,    2, 0x02 /* Public */,
      43,    0,  293,    2, 0x22 /* Public | MethodCloned */,
      45,    0,  294,    2, 0x02 /* Public */,
      46,    0,  295,    2, 0x02 /* Public */,
      47,    0,  296,    2, 0x02 /* Public */,
      48,    0,  297,    2, 0x02 /* Public */,
      49,    0,  298,    2, 0x02 /* Public */,
      50,    1,  299,    2, 0x02 /* Public */,
      51,    0,  302,    2, 0x02 /* Public */,
      52,    0,  303,    2, 0x02 /* Public */,
      53,    0,  304,    2, 0x02 /* Public */,
      54,    0,  305,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,   11,
    QMetaType::QString, QMetaType::QString,    5,
    0x80000000 | 13, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   20,   22,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Bool, 0x80000000 | 24,   25,
    QMetaType::Bool, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   30,   33,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 40,   41,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   44,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,

 // properties: name, type, flags
      14, QMetaType::QString, 0x00095001,
      55, QMetaType::QString, 0x00095001,
       8, QMetaType::Bool, 0x00095103,
      56, QMetaType::QStringList, 0x00095001,
      57, QMetaType::QStringList, 0x00095001,
      58, QMetaType::QStringList, 0x00095001,
      59, QMetaType::QStringList, 0x00095001,
      60, QMetaType::Bool, 0x00095001,
      61, QMetaType::QUrl, 0x00095001,
      62, QMetaType::Bool, 0x00095001,
      63, QMetaType::Bool, 0x00095001,
      64, QMetaType::Bool, 0x00095103,
      65, QMetaType::Bool, 0x00095001,
      66, QMetaType::QString, 0x00095001,

 // enums: name, alias, flags, count, data
      67,   67, 0x0,    6,  353,

 // enum data: key, value
      68, uint(QInstaller::Component::DepencyToUnstable),
      69, uint(QInstaller::Component::ShaMismatch),
      70, uint(QInstaller::Component::ScriptLoadingFailed),
      71, uint(QInstaller::Component::MissingDependency),
      72, uint(QInstaller::Component::InvalidTreeName),
      73, uint(QInstaller::Component::DescendantOfUnstable),

       0        // eod
};

void QInstaller::Component::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Component *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loaded(); break;
        case 1: _t->virtualStateChanged(); break;
        case 2: _t->valueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->setAutoCreateOperations((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateModelData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->setValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: { QString _r = _t->value((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->value((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QWidget* _r = _t->userInterface((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        case 9: _t->beginInstallation(); break;
        case 10: _t->createOperations(); break;
        case 11: _t->createOperationsForArchive((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->createOperationsForPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->registerPathForUninstallation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->registerPathForUninstallation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: { bool _r = _t->addOperation((*reinterpret_cast< QQmlV4Function*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->addElevatedOperation((*reinterpret_cast< QQmlV4Function*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->addDownloadableArchive((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->removeDownloadableArchive((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->addStopProcessForUpdateRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->removeStopProcessForUpdateRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->setStopProcessForUpdateRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 22: _t->addDependency((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->addAutoDependOn((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: { bool _r = _t->isDefault();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->isAutoDependOn((*reinterpret_cast< const QSet<QString>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: _t->setInstalled(); break;
        case 27: { bool _r = _t->isInstalled((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->isInstalled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->installationRequested();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->setUninstalled(); break;
        case 31: { bool _r = _t->isUninstalled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->uninstallationRequested();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->isFromOnlineRepository();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: _t->setUpdateAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: { bool _r = _t->isUpdateAvailable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 36: { bool _r = _t->updateRequested();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->componentChangeRequested();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: { bool _r = _t->isForcedUpdate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Component::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Component::loaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Component::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Component::virtualStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Component::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Component::valueChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Component *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->displayName(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->autoCreateOperations(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->archives(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->userInterfaces(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->dependencies(); break;
        case 6: *reinterpret_cast< QStringList*>(_v) = _t->autoDependencies(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isFromOnlineRepository(); break;
        case 8: *reinterpret_cast< QUrl*>(_v) = _t->repositoryUrl(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isDefault(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isInstalled(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->isUnstable(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->treeName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Component *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setAutoCreateOperations(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::Component::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__Component.data,
    qt_meta_data_QInstaller__Component,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::Component::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::Component::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__Component.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ComponentModelHelper"))
        return static_cast< ComponentModelHelper*>(this);
    return QObject::qt_metacast(_clname);
}

int QInstaller::Component::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QInstaller::Component::loaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QInstaller::Component::virtualStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QInstaller::Component::valueChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

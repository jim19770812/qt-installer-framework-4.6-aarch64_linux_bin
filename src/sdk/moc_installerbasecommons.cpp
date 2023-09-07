/****************************************************************************
** Meta object code from reading C++ file 'installerbasecommons.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/sdk/installerbasecommons.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'installerbasecommons.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InstallerGui_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InstallerGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InstallerGui_t qt_meta_stringdata_InstallerGui = {
    {
QT_MOC_LITERAL(0, 0, 12) // "InstallerGui"

    },
    "InstallerGui"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InstallerGui[] = {

 // content:
       8,       // revision
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

void InstallerGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject InstallerGui::staticMetaObject = { {
    QMetaObject::SuperData::link<QInstaller::PackageManagerGui::staticMetaObject>(),
    qt_meta_stringdata_InstallerGui.data,
    qt_meta_data_InstallerGui,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InstallerGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstallerGui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InstallerGui.stringdata0))
        return static_cast<void*>(this);
    return QInstaller::PackageManagerGui::qt_metacast(_clname);
}

int InstallerGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QInstaller::PackageManagerGui::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MaintenanceGui_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MaintenanceGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MaintenanceGui_t qt_meta_stringdata_MaintenanceGui = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MaintenanceGui"
QT_MOC_LITERAL(1, 15, 17), // "updateRestartPage"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "MaintenanceGui\0updateRestartPage\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MaintenanceGui[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void MaintenanceGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MaintenanceGui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateRestartPage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MaintenanceGui::staticMetaObject = { {
    QMetaObject::SuperData::link<QInstaller::PackageManagerGui::staticMetaObject>(),
    qt_meta_stringdata_MaintenanceGui.data,
    qt_meta_data_MaintenanceGui,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MaintenanceGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaintenanceGui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MaintenanceGui.stringdata0))
        return static_cast<void*>(this);
    return QInstaller::PackageManagerGui::qt_metacast(_clname);
}

int MaintenanceGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QInstaller::PackageManagerGui::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE

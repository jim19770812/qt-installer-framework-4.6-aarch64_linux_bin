/****************************************************************************
** Meta object code from reading C++ file 'packagemanagercore_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/installer/packagemanagercore_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'packagemanagercore_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInstaller__PackageManagerCorePrivate_t {
    QByteArrayData data[19];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__PackageManagerCorePrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__PackageManagerCorePrivate_t qt_meta_stringdata_QInstaller__PackageManagerCorePrivate = {
    {
QT_MOC_LITERAL(0, 0, 37), // "QInstaller::PackageManagerCor..."
QT_MOC_LITERAL(1, 38, 19), // "installationStarted"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 20), // "installationFinished"
QT_MOC_LITERAL(4, 80, 21), // "uninstallationStarted"
QT_MOC_LITERAL(5, 102, 22), // "uninstallationFinished"
QT_MOC_LITERAL(6, 125, 24), // "offlineGenerationStarted"
QT_MOC_LITERAL(7, 150, 25), // "offlineGenerationFinished"
QT_MOC_LITERAL(8, 176, 11), // "infoMessage"
QT_MOC_LITERAL(9, 188, 4), // "Job*"
QT_MOC_LITERAL(10, 193, 7), // "message"
QT_MOC_LITERAL(11, 201, 12), // "infoProgress"
QT_MOC_LITERAL(12, 214, 8), // "progress"
QT_MOC_LITERAL(13, 223, 13), // "totalProgress"
QT_MOC_LITERAL(14, 237, 5), // "total"
QT_MOC_LITERAL(15, 243, 29), // "handleMethodInvocationRequest"
QT_MOC_LITERAL(16, 273, 19), // "invokableMethodName"
QT_MOC_LITERAL(17, 293, 18), // "addPathForDeletion"
QT_MOC_LITERAL(18, 312, 4) // "path"

    },
    "QInstaller::PackageManagerCorePrivate\0"
    "installationStarted\0\0installationFinished\0"
    "uninstallationStarted\0uninstallationFinished\0"
    "offlineGenerationStarted\0"
    "offlineGenerationFinished\0infoMessage\0"
    "Job*\0message\0infoProgress\0progress\0"
    "totalProgress\0total\0handleMethodInvocationRequest\0"
    "invokableMethodName\0addPathForDeletion\0"
    "path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__PackageManagerCorePrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   75,    2, 0x08 /* Private */,
      11,    3,   80,    2, 0x08 /* Private */,
      13,    1,   87,    2, 0x08 /* Private */,
      15,    1,   90,    2, 0x08 /* Private */,
      17,    1,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,    2,   10,
    QMetaType::Void, 0x80000000 | 9, QMetaType::ULongLong, QMetaType::ULongLong,    2,   12,    2,
    QMetaType::Void, QMetaType::ULongLong,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void QInstaller::PackageManagerCorePrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PackageManagerCorePrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->installationStarted(); break;
        case 1: _t->installationFinished(); break;
        case 2: _t->uninstallationStarted(); break;
        case 3: _t->uninstallationFinished(); break;
        case 4: _t->offlineGenerationStarted(); break;
        case 5: _t->offlineGenerationFinished(); break;
        case 6: _t->infoMessage((*reinterpret_cast< Job*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->infoProgress((*reinterpret_cast< Job*(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< quint64(*)>(_a[3]))); break;
        case 8: _t->totalProgress((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 9: _t->handleMethodInvocationRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->addPathForDeletion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Job* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Job* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PackageManagerCorePrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCorePrivate::installationStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PackageManagerCorePrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCorePrivate::installationFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PackageManagerCorePrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCorePrivate::uninstallationStarted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PackageManagerCorePrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCorePrivate::uninstallationFinished)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PackageManagerCorePrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCorePrivate::offlineGenerationStarted)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PackageManagerCorePrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PackageManagerCorePrivate::offlineGenerationFinished)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::PackageManagerCorePrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__PackageManagerCorePrivate.data,
    qt_meta_data_QInstaller__PackageManagerCorePrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::PackageManagerCorePrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::PackageManagerCorePrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__PackageManagerCorePrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInstaller::PackageManagerCorePrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QInstaller::PackageManagerCorePrivate::installationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QInstaller::PackageManagerCorePrivate::installationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QInstaller::PackageManagerCorePrivate::uninstallationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QInstaller::PackageManagerCorePrivate::uninstallationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QInstaller::PackageManagerCorePrivate::offlineGenerationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QInstaller::PackageManagerCorePrivate::offlineGenerationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

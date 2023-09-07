/****************************************************************************
** Meta object code from reading C++ file 'repositorymanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../tools/repocompare/repositorymanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'repositorymanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RepositoryManager_t {
    QByteArrayData data[12];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RepositoryManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RepositoryManager_t qt_meta_stringdata_RepositoryManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "RepositoryManager"
QT_MOC_LITERAL(1, 18, 20), // "repositoriesCompared"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 23), // "setProductionRepository"
QT_MOC_LITERAL(4, 64, 4), // "repo"
QT_MOC_LITERAL(5, 69, 19), // "setUpdateRepository"
QT_MOC_LITERAL(6, 89, 15), // "writeUpdateFile"
QT_MOC_LITERAL(7, 105, 8), // "fileName"
QT_MOC_LITERAL(8, 114, 17), // "receiveRepository"
QT_MOC_LITERAL(9, 132, 14), // "QNetworkReply*"
QT_MOC_LITERAL(10, 147, 5), // "reply"
QT_MOC_LITERAL(11, 153, 19) // "compareRepositories"

    },
    "RepositoryManager\0repositoriesCompared\0"
    "\0setProductionRepository\0repo\0"
    "setUpdateRepository\0writeUpdateFile\0"
    "fileName\0receiveRepository\0QNetworkReply*\0"
    "reply\0compareRepositories"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RepositoryManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x0a /* Public */,
       5,    1,   48,    2, 0x0a /* Public */,
       6,    1,   51,    2, 0x0a /* Public */,
       8,    1,   54,    2, 0x0a /* Public */,
      11,    0,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void RepositoryManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RepositoryManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->repositoriesCompared(); break;
        case 1: _t->setProductionRepository((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setUpdateRepository((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->writeUpdateFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->receiveRepository((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->compareRepositories(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RepositoryManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RepositoryManager::repositoriesCompared)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RepositoryManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RepositoryManager.data,
    qt_meta_data_RepositoryManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RepositoryManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RepositoryManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RepositoryManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RepositoryManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void RepositoryManager::repositoriesCompared()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

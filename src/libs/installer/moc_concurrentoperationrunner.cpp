/****************************************************************************
** Meta object code from reading C++ file 'concurrentoperationrunner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/installer/concurrentoperationrunner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'concurrentoperationrunner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInstaller__ConcurrentOperationRunner_t {
    QByteArrayData data[12];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__ConcurrentOperationRunner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__ConcurrentOperationRunner_t qt_meta_stringdata_QInstaller__ConcurrentOperationRunner = {
    {
QT_MOC_LITERAL(0, 0, 37), // "QInstaller::ConcurrentOperati..."
QT_MOC_LITERAL(1, 38, 16), // "operationStarted"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 22), // "QInstaller::Operation*"
QT_MOC_LITERAL(4, 79, 9), // "operation"
QT_MOC_LITERAL(5, 89, 15), // "progressChanged"
QT_MOC_LITERAL(6, 105, 9), // "completed"
QT_MOC_LITERAL(7, 115, 5), // "total"
QT_MOC_LITERAL(8, 121, 8), // "finished"
QT_MOC_LITERAL(9, 130, 6), // "cancel"
QT_MOC_LITERAL(10, 137, 18), // "onOperationStarted"
QT_MOC_LITERAL(11, 156, 19) // "onOperationfinished"

    },
    "QInstaller::ConcurrentOperationRunner\0"
    "operationStarted\0\0QInstaller::Operation*\0"
    "operation\0progressChanged\0completed\0"
    "total\0finished\0cancel\0onOperationStarted\0"
    "onOperationfinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__ConcurrentOperationRunner[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    2,   47,    2, 0x06 /* Public */,
       8,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   53,    2, 0x0a /* Public */,
      10,    1,   54,    2, 0x08 /* Private */,
      11,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void QInstaller::ConcurrentOperationRunner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConcurrentOperationRunner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->operationStarted((*reinterpret_cast< QInstaller::Operation*(*)>(_a[1]))); break;
        case 1: _t->progressChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 2: _t->finished(); break;
        case 3: _t->cancel(); break;
        case 4: _t->onOperationStarted((*reinterpret_cast< QInstaller::Operation*(*)>(_a[1]))); break;
        case 5: _t->onOperationfinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConcurrentOperationRunner::*)(QInstaller::Operation * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConcurrentOperationRunner::operationStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConcurrentOperationRunner::*)(const int , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConcurrentOperationRunner::progressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ConcurrentOperationRunner::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConcurrentOperationRunner::finished)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::ConcurrentOperationRunner::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__ConcurrentOperationRunner.data,
    qt_meta_data_QInstaller__ConcurrentOperationRunner,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::ConcurrentOperationRunner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::ConcurrentOperationRunner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__ConcurrentOperationRunner.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInstaller::ConcurrentOperationRunner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QInstaller::ConcurrentOperationRunner::operationStarted(QInstaller::Operation * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QInstaller::ConcurrentOperationRunner::progressChanged(const int _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QInstaller::ConcurrentOperationRunner::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

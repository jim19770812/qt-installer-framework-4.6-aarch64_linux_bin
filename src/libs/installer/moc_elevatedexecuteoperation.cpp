/****************************************************************************
** Meta object code from reading C++ file 'elevatedexecuteoperation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/installer/elevatedexecuteoperation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elevatedexecuteoperation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInstaller__ElevatedExecuteOperation_t {
    QByteArrayData data[7];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__ElevatedExecuteOperation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__ElevatedExecuteOperation_t qt_meta_stringdata_QInstaller__ElevatedExecuteOperation = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QInstaller::ElevatedExecuteOp..."
QT_MOC_LITERAL(1, 37, 13), // "cancelProcess"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 17), // "outputTextChanged"
QT_MOC_LITERAL(4, 70, 4), // "text"
QT_MOC_LITERAL(5, 75, 15), // "cancelOperation"
QT_MOC_LITERAL(6, 91, 17) // "readProcessOutput"

    },
    "QInstaller::ElevatedExecuteOperation\0"
    "cancelProcess\0\0outputTextChanged\0text\0"
    "cancelOperation\0readProcessOutput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__ElevatedExecuteOperation[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QInstaller::ElevatedExecuteOperation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElevatedExecuteOperation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cancelProcess(); break;
        case 1: _t->outputTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->cancelOperation(); break;
        case 3: _t->d->readProcessOutput(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElevatedExecuteOperation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElevatedExecuteOperation::cancelProcess)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElevatedExecuteOperation::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElevatedExecuteOperation::outputTextChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::ElevatedExecuteOperation::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__ElevatedExecuteOperation.data,
    qt_meta_data_QInstaller__ElevatedExecuteOperation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::ElevatedExecuteOperation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::ElevatedExecuteOperation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__ElevatedExecuteOperation.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Operation"))
        return static_cast< Operation*>(this);
    return QObject::qt_metacast(_clname);
}

int QInstaller::ElevatedExecuteOperation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QInstaller::ElevatedExecuteOperation::cancelProcess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QInstaller::ElevatedExecuteOperation::outputTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

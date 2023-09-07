/****************************************************************************
** Meta object code from reading C++ file 'qprocesswrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/installer/qprocesswrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprocesswrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInstaller__QProcessWrapper_t {
    QByteArrayData data[20];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__QProcessWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__QProcessWrapper_t qt_meta_stringdata_QInstaller__QProcessWrapper = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QInstaller::QProcessWrapper"
QT_MOC_LITERAL(1, 28, 12), // "bytesWritten"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "aboutToClose"
QT_MOC_LITERAL(4, 55, 19), // "readChannelFinished"
QT_MOC_LITERAL(5, 75, 5), // "error"
QT_MOC_LITERAL(6, 81, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(7, 104, 23), // "readyReadStandardOutput"
QT_MOC_LITERAL(8, 128, 22), // "readyReadStandardError"
QT_MOC_LITERAL(9, 151, 8), // "finished"
QT_MOC_LITERAL(10, 160, 8), // "exitCode"
QT_MOC_LITERAL(11, 169, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(12, 190, 10), // "exitStatus"
QT_MOC_LITERAL(13, 201, 9), // "readyRead"
QT_MOC_LITERAL(14, 211, 7), // "started"
QT_MOC_LITERAL(15, 219, 12), // "stateChanged"
QT_MOC_LITERAL(16, 232, 22), // "QProcess::ProcessState"
QT_MOC_LITERAL(17, 255, 8), // "newState"
QT_MOC_LITERAL(18, 264, 6), // "cancel"
QT_MOC_LITERAL(19, 271, 14) // "processSignals"

    },
    "QInstaller::QProcessWrapper\0bytesWritten\0"
    "\0aboutToClose\0readChannelFinished\0"
    "error\0QProcess::ProcessError\0"
    "readyReadStandardOutput\0readyReadStandardError\0"
    "finished\0exitCode\0QProcess::ExitStatus\0"
    "exitStatus\0readyRead\0started\0stateChanged\0"
    "QProcess::ProcessState\0newState\0cancel\0"
    "processSignals"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__QProcessWrapper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    0,   77,    2, 0x06 /* Public */,
       4,    0,   78,    2, 0x06 /* Public */,
       5,    1,   79,    2, 0x06 /* Public */,
       7,    0,   82,    2, 0x06 /* Public */,
       8,    0,   83,    2, 0x06 /* Public */,
       9,    2,   84,    2, 0x06 /* Public */,
      13,    0,   89,    2, 0x06 /* Public */,
      14,    0,   90,    2, 0x06 /* Public */,
      15,    1,   91,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,   94,    2, 0x0a /* Public */,
      19,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11,   10,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QInstaller::QProcessWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QProcessWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->aboutToClose(); break;
        case 2: _t->readChannelFinished(); break;
        case 3: _t->error((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 4: _t->readyReadStandardOutput(); break;
        case 5: _t->readyReadStandardError(); break;
        case 6: _t->finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 7: _t->readyRead(); break;
        case 8: _t->started(); break;
        case 9: _t->stateChanged((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        case 10: _t->cancel(); break;
        case 11: _t->processSignals(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QProcess::ProcessError >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QProcess::ExitStatus >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QProcess::ProcessState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QProcessWrapper::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QProcessWrapper::bytesWritten)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QProcessWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QProcessWrapper::aboutToClose)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QProcessWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QProcessWrapper::readChannelFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QProcessWrapper::*)(QProcess::ProcessError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QProcessWrapper::error)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QProcessWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QProcessWrapper::readyReadStandardOutput)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QProcessWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QProcessWrapper::readyReadStandardError)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QProcessWrapper::*)(int , QProcess::ExitStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QProcessWrapper::finished)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QProcessWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QProcessWrapper::readyRead)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QProcessWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QProcessWrapper::started)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QProcessWrapper::*)(QProcess::ProcessState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QProcessWrapper::stateChanged)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::QProcessWrapper::staticMetaObject = { {
    QMetaObject::SuperData::link<RemoteObject::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__QProcessWrapper.data,
    qt_meta_data_QInstaller__QProcessWrapper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::QProcessWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::QProcessWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__QProcessWrapper.stringdata0))
        return static_cast<void*>(this);
    return RemoteObject::qt_metacast(_clname);
}

int QInstaller::QProcessWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RemoteObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QInstaller::QProcessWrapper::bytesWritten(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QInstaller::QProcessWrapper::aboutToClose()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QInstaller::QProcessWrapper::readChannelFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QInstaller::QProcessWrapper::error(QProcess::ProcessError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QInstaller::QProcessWrapper::readyReadStandardOutput()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QInstaller::QProcessWrapper::readyReadStandardError()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QInstaller::QProcessWrapper::finished(int _t1, QProcess::ExitStatus _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QInstaller::QProcessWrapper::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QInstaller::QProcessWrapper::started()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QInstaller::QProcessWrapper::stateChanged(QProcess::ProcessState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

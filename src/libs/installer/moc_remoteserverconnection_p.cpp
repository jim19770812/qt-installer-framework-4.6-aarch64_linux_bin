/****************************************************************************
** Meta object code from reading C++ file 'remoteserverconnection_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/installer/remoteserverconnection_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remoteserverconnection_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInstaller__QProcessSignalReceiver_t {
    QByteArrayData data[20];
    char stringdata0[303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__QProcessSignalReceiver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__QProcessSignalReceiver_t qt_meta_stringdata_QInstaller__QProcessSignalReceiver = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QInstaller::QProcessSignalRec..."
QT_MOC_LITERAL(1, 35, 14), // "onBytesWritten"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 5), // "count"
QT_MOC_LITERAL(4, 57, 14), // "onAboutToClose"
QT_MOC_LITERAL(5, 72, 21), // "onReadChannelFinished"
QT_MOC_LITERAL(6, 94, 7), // "onError"
QT_MOC_LITERAL(7, 102, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(8, 125, 5), // "error"
QT_MOC_LITERAL(9, 131, 25), // "onReadyReadStandardOutput"
QT_MOC_LITERAL(10, 157, 24), // "onReadyReadStandardError"
QT_MOC_LITERAL(11, 182, 10), // "onFinished"
QT_MOC_LITERAL(12, 193, 8), // "exitCode"
QT_MOC_LITERAL(13, 202, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(14, 223, 10), // "exitStatus"
QT_MOC_LITERAL(15, 234, 11), // "onReadyRead"
QT_MOC_LITERAL(16, 246, 9), // "onStarted"
QT_MOC_LITERAL(17, 256, 14), // "onStateChanged"
QT_MOC_LITERAL(18, 271, 22), // "QProcess::ProcessState"
QT_MOC_LITERAL(19, 294, 8) // "newState"

    },
    "QInstaller::QProcessSignalReceiver\0"
    "onBytesWritten\0\0count\0onAboutToClose\0"
    "onReadChannelFinished\0onError\0"
    "QProcess::ProcessError\0error\0"
    "onReadyReadStandardOutput\0"
    "onReadyReadStandardError\0onFinished\0"
    "exitCode\0QProcess::ExitStatus\0exitStatus\0"
    "onReadyRead\0onStarted\0onStateChanged\0"
    "QProcess::ProcessState\0newState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__QProcessSignalReceiver[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    1,   69,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    2,   74,    2, 0x08 /* Private */,
      15,    0,   79,    2, 0x08 /* Private */,
      16,    0,   80,    2, 0x08 /* Private */,
      17,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 13,   12,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void QInstaller::QProcessSignalReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QProcessSignalReceiver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onBytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->onAboutToClose(); break;
        case 2: _t->onReadChannelFinished(); break;
        case 3: _t->onError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 4: _t->onReadyReadStandardOutput(); break;
        case 5: _t->onReadyReadStandardError(); break;
        case 6: _t->onFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 7: _t->onReadyRead(); break;
        case 8: _t->onStarted(); break;
        case 9: _t->onStateChanged((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::QProcessSignalReceiver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__QProcessSignalReceiver.data,
    qt_meta_data_QInstaller__QProcessSignalReceiver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::QProcessSignalReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::QProcessSignalReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__QProcessSignalReceiver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInstaller::QProcessSignalReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
struct qt_meta_stringdata_QInstaller__AbstractArchiveSignalReceiver_t {
    QByteArrayData data[12];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__AbstractArchiveSignalReceiver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__AbstractArchiveSignalReceiver_t qt_meta_stringdata_QInstaller__AbstractArchiveSignalReceiver = {
    {
QT_MOC_LITERAL(0, 0, 41), // "QInstaller::AbstractArchiveSi..."
QT_MOC_LITERAL(1, 42, 21), // "onCurrentEntryChanged"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 8), // "filename"
QT_MOC_LITERAL(4, 74, 18), // "onCompletedChanged"
QT_MOC_LITERAL(5, 93, 9), // "completed"
QT_MOC_LITERAL(6, 103, 5), // "total"
QT_MOC_LITERAL(7, 109, 20), // "onDataBlockRequested"
QT_MOC_LITERAL(8, 130, 15), // "onSeekRequested"
QT_MOC_LITERAL(9, 146, 6), // "offset"
QT_MOC_LITERAL(10, 153, 6), // "whence"
QT_MOC_LITERAL(11, 160, 16) // "onWorkerFinished"

    },
    "QInstaller::AbstractArchiveSignalReceiver\0"
    "onCurrentEntryChanged\0\0filename\0"
    "onCompletedChanged\0completed\0total\0"
    "onDataBlockRequested\0onSeekRequested\0"
    "offset\0whence\0onWorkerFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__AbstractArchiveSignalReceiver[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    2,   42,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,
       8,    2,   48,    2, 0x08 /* Private */,
      11,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int,    9,   10,
    QMetaType::Void,

       0        // eod
};

void QInstaller::AbstractArchiveSignalReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractArchiveSignalReceiver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onCurrentEntryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onCompletedChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 2: _t->onDataBlockRequested(); break;
        case 3: _t->onSeekRequested((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->onWorkerFinished(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::AbstractArchiveSignalReceiver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__AbstractArchiveSignalReceiver.data,
    qt_meta_data_QInstaller__AbstractArchiveSignalReceiver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::AbstractArchiveSignalReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::AbstractArchiveSignalReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__AbstractArchiveSignalReceiver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInstaller::AbstractArchiveSignalReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

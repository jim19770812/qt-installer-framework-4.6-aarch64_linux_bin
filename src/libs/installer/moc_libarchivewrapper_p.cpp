/****************************************************************************
** Meta object code from reading C++ file 'libarchivewrapper_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/installer/libarchivewrapper_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'libarchivewrapper_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInstaller__LibArchiveWrapperPrivate_t {
    QByteArrayData data[16];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__LibArchiveWrapperPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__LibArchiveWrapperPrivate_t qt_meta_stringdata_QInstaller__LibArchiveWrapperPrivate = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QInstaller::LibArchiveWrapper..."
QT_MOC_LITERAL(1, 37, 19), // "currentEntryChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 8), // "filename"
QT_MOC_LITERAL(4, 67, 16), // "completedChanged"
QT_MOC_LITERAL(5, 84, 9), // "completed"
QT_MOC_LITERAL(6, 94, 5), // "total"
QT_MOC_LITERAL(7, 100, 18), // "dataBlockRequested"
QT_MOC_LITERAL(8, 119, 13), // "seekRequested"
QT_MOC_LITERAL(9, 133, 6), // "offset"
QT_MOC_LITERAL(10, 140, 6), // "whence"
QT_MOC_LITERAL(11, 147, 20), // "remoteWorkerFinished"
QT_MOC_LITERAL(12, 168, 6), // "cancel"
QT_MOC_LITERAL(13, 175, 14), // "processSignals"
QT_MOC_LITERAL(14, 190, 20), // "onDataBlockRequested"
QT_MOC_LITERAL(15, 211, 15) // "onSeekRequested"

    },
    "QInstaller::LibArchiveWrapperPrivate\0"
    "currentEntryChanged\0\0filename\0"
    "completedChanged\0completed\0total\0"
    "dataBlockRequested\0seekRequested\0"
    "offset\0whence\0remoteWorkerFinished\0"
    "cancel\0processSignals\0onDataBlockRequested\0"
    "onSeekRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__LibArchiveWrapperPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    2,   62,    2, 0x06 /* Public */,
       7,    0,   67,    2, 0x06 /* Public */,
       8,    2,   68,    2, 0x06 /* Public */,
      11,    0,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   74,    2, 0x0a /* Public */,
      13,    0,   75,    2, 0x08 /* Private */,
      14,    0,   76,    2, 0x08 /* Private */,
      15,    2,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int,    9,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int,    9,   10,

       0        // eod
};

void QInstaller::LibArchiveWrapperPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LibArchiveWrapperPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentEntryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->completedChanged((*reinterpret_cast< const quint64(*)>(_a[1])),(*reinterpret_cast< const quint64(*)>(_a[2]))); break;
        case 2: _t->dataBlockRequested(); break;
        case 3: _t->seekRequested((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->remoteWorkerFinished(); break;
        case 5: _t->cancel(); break;
        case 6: _t->processSignals(); break;
        case 7: _t->onDataBlockRequested(); break;
        case 8: _t->onSeekRequested((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LibArchiveWrapperPrivate::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibArchiveWrapperPrivate::currentEntryChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LibArchiveWrapperPrivate::*)(const quint64 , const quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibArchiveWrapperPrivate::completedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LibArchiveWrapperPrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibArchiveWrapperPrivate::dataBlockRequested)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LibArchiveWrapperPrivate::*)(qint64 , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibArchiveWrapperPrivate::seekRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LibArchiveWrapperPrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibArchiveWrapperPrivate::remoteWorkerFinished)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::LibArchiveWrapperPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<RemoteObject::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__LibArchiveWrapperPrivate.data,
    qt_meta_data_QInstaller__LibArchiveWrapperPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::LibArchiveWrapperPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::LibArchiveWrapperPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__LibArchiveWrapperPrivate.stringdata0))
        return static_cast<void*>(this);
    return RemoteObject::qt_metacast(_clname);
}

int QInstaller::LibArchiveWrapperPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RemoteObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QInstaller::LibArchiveWrapperPrivate::currentEntryChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QInstaller::LibArchiveWrapperPrivate::completedChanged(const quint64 _t1, const quint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QInstaller::LibArchiveWrapperPrivate::dataBlockRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QInstaller::LibArchiveWrapperPrivate::seekRequested(qint64 _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QInstaller::LibArchiveWrapperPrivate::remoteWorkerFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

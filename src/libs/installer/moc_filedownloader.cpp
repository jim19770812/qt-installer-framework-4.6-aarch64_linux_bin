/****************************************************************************
** Meta object code from reading C++ file 'filedownloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/kdtools/filedownloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filedownloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDUpdater__FileDownloader_t {
    QByteArrayData data[25];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDUpdater__FileDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDUpdater__FileDownloader_t qt_meta_stringdata_KDUpdater__FileDownloader = {
    {
QT_MOC_LITERAL(0, 0, 25), // "KDUpdater::FileDownloader"
QT_MOC_LITERAL(1, 26, 15), // "downloadStarted"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 16), // "downloadCanceled"
QT_MOC_LITERAL(4, 60, 16), // "downloadProgress"
QT_MOC_LITERAL(5, 77, 8), // "progress"
QT_MOC_LITERAL(6, 86, 21), // "estimatedDownloadTime"
QT_MOC_LITERAL(7, 108, 7), // "seconds"
QT_MOC_LITERAL(8, 116, 13), // "downloadSpeed"
QT_MOC_LITERAL(9, 130, 14), // "bytesPerSecond"
QT_MOC_LITERAL(10, 145, 14), // "downloadStatus"
QT_MOC_LITERAL(11, 160, 6), // "status"
QT_MOC_LITERAL(12, 167, 13), // "bytesReceived"
QT_MOC_LITERAL(13, 181, 14), // "bytesToReceive"
QT_MOC_LITERAL(14, 196, 20), // "authenticatorChanged"
QT_MOC_LITERAL(15, 217, 14), // "QAuthenticator"
QT_MOC_LITERAL(16, 232, 13), // "authenticator"
QT_MOC_LITERAL(17, 246, 17), // "downloadCompleted"
QT_MOC_LITERAL(18, 264, 15), // "downloadAborted"
QT_MOC_LITERAL(19, 280, 12), // "errorMessage"
QT_MOC_LITERAL(20, 293, 14), // "cancelDownload"
QT_MOC_LITERAL(21, 308, 10), // "doDownload"
QT_MOC_LITERAL(22, 319, 24), // "autoRemoveDownloadedFile"
QT_MOC_LITERAL(23, 344, 3), // "url"
QT_MOC_LITERAL(24, 348, 6) // "scheme"

    },
    "KDUpdater::FileDownloader\0downloadStarted\0"
    "\0downloadCanceled\0downloadProgress\0"
    "progress\0estimatedDownloadTime\0seconds\0"
    "downloadSpeed\0bytesPerSecond\0"
    "downloadStatus\0status\0bytesReceived\0"
    "bytesToReceive\0authenticatorChanged\0"
    "QAuthenticator\0authenticator\0"
    "downloadCompleted\0downloadAborted\0"
    "errorMessage\0cancelDownload\0doDownload\0"
    "autoRemoveDownloadedFile\0url\0scheme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDUpdater__FileDownloader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       3,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    1,   76,    2, 0x06 /* Public */,
       6,    1,   79,    2, 0x06 /* Public */,
       8,    1,   82,    2, 0x06 /* Public */,
      10,    1,   85,    2, 0x06 /* Public */,
       4,    2,   88,    2, 0x06 /* Public */,
      14,    1,   93,    2, 0x06 /* Public */,
      17,    0,   96,    2, 0x06 /* Public */,
      18,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    0,  100,    2, 0x0a /* Public */,
      21,    0,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      22, QMetaType::Bool, 0x00095103,
      23, QMetaType::QUrl, 0x00095103,
      24, QMetaType::QString, 0x00095103,

       0        // eod
};

void KDUpdater::FileDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadStarted(); break;
        case 1: _t->downloadCanceled(); break;
        case 2: _t->downloadProgress((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->estimatedDownloadTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->downloadSpeed((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->downloadStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 7: _t->authenticatorChanged((*reinterpret_cast< const QAuthenticator(*)>(_a[1]))); break;
        case 8: _t->downloadCompleted(); break;
        case 9: _t->downloadAborted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->cancelDownload(); break;
        case 11: _t->doDownload(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileDownloader::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDownloader::downloadStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileDownloader::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDownloader::downloadCanceled)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileDownloader::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDownloader::downloadProgress)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileDownloader::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDownloader::estimatedDownloadTime)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileDownloader::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDownloader::downloadSpeed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FileDownloader::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDownloader::downloadStatus)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FileDownloader::*)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDownloader::downloadProgress)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FileDownloader::*)(const QAuthenticator & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDownloader::authenticatorChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FileDownloader::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDownloader::downloadCompleted)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FileDownloader::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDownloader::downloadAborted)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FileDownloader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isAutoRemoveDownloadedFile(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->scheme(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FileDownloader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutoRemoveDownloadedFile(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 2: _t->setScheme(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KDUpdater::FileDownloader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KDUpdater__FileDownloader.data,
    qt_meta_data_KDUpdater__FileDownloader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDUpdater::FileDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDUpdater::FileDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDUpdater__FileDownloader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KDUpdater::FileDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KDUpdater::FileDownloader::downloadStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KDUpdater::FileDownloader::downloadCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KDUpdater::FileDownloader::downloadProgress(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KDUpdater::FileDownloader::estimatedDownloadTime(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KDUpdater::FileDownloader::downloadSpeed(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KDUpdater::FileDownloader::downloadStatus(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KDUpdater::FileDownloader::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void KDUpdater::FileDownloader::authenticatorChanged(const QAuthenticator & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void KDUpdater::FileDownloader::downloadCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void KDUpdater::FileDownloader::downloadAborted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

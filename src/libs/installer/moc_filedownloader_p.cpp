/****************************************************************************
** Meta object code from reading C++ file 'filedownloader_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/kdtools/filedownloader_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filedownloader_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDUpdater__LocalFileDownloader_t {
    QByteArrayData data[4];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDUpdater__LocalFileDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDUpdater__LocalFileDownloader_t qt_meta_stringdata_KDUpdater__LocalFileDownloader = {
    {
QT_MOC_LITERAL(0, 0, 30), // "KDUpdater::LocalFileDownloader"
QT_MOC_LITERAL(1, 31, 14), // "cancelDownload"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 10) // "doDownload"

    },
    "KDUpdater::LocalFileDownloader\0"
    "cancelDownload\0\0doDownload"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDUpdater__LocalFileDownloader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KDUpdater::LocalFileDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LocalFileDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cancelDownload(); break;
        case 1: _t->doDownload(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KDUpdater::LocalFileDownloader::staticMetaObject = { {
    QMetaObject::SuperData::link<FileDownloader::staticMetaObject>(),
    qt_meta_stringdata_KDUpdater__LocalFileDownloader.data,
    qt_meta_data_KDUpdater__LocalFileDownloader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDUpdater::LocalFileDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDUpdater::LocalFileDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDUpdater__LocalFileDownloader.stringdata0))
        return static_cast<void*>(this);
    return FileDownloader::qt_metacast(_clname);
}

int KDUpdater::LocalFileDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileDownloader::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_KDUpdater__ResourceFileDownloader_t {
    QByteArrayData data[4];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDUpdater__ResourceFileDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDUpdater__ResourceFileDownloader_t qt_meta_stringdata_KDUpdater__ResourceFileDownloader = {
    {
QT_MOC_LITERAL(0, 0, 33), // "KDUpdater::ResourceFileDownlo..."
QT_MOC_LITERAL(1, 34, 14), // "cancelDownload"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 10) // "doDownload"

    },
    "KDUpdater::ResourceFileDownloader\0"
    "cancelDownload\0\0doDownload"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDUpdater__ResourceFileDownloader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KDUpdater::ResourceFileDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ResourceFileDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cancelDownload(); break;
        case 1: _t->doDownload(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KDUpdater::ResourceFileDownloader::staticMetaObject = { {
    QMetaObject::SuperData::link<FileDownloader::staticMetaObject>(),
    qt_meta_stringdata_KDUpdater__ResourceFileDownloader.data,
    qt_meta_data_KDUpdater__ResourceFileDownloader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDUpdater::ResourceFileDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDUpdater::ResourceFileDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDUpdater__ResourceFileDownloader.stringdata0))
        return static_cast<void*>(this);
    return FileDownloader::qt_metacast(_clname);
}

int KDUpdater::ResourceFileDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileDownloader::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_KDUpdater__HttpDownloader_t {
    QByteArrayData data[24];
    char stringdata0[358];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDUpdater__HttpDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDUpdater__HttpDownloader_t qt_meta_stringdata_KDUpdater__HttpDownloader = {
    {
QT_MOC_LITERAL(0, 0, 25), // "KDUpdater::HttpDownloader"
QT_MOC_LITERAL(1, 26, 14), // "cancelDownload"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 10), // "doDownload"
QT_MOC_LITERAL(4, 53, 13), // "httpReadyRead"
QT_MOC_LITERAL(5, 67, 16), // "httpReadProgress"
QT_MOC_LITERAL(6, 84, 4), // "done"
QT_MOC_LITERAL(7, 89, 5), // "total"
QT_MOC_LITERAL(8, 95, 9), // "httpError"
QT_MOC_LITERAL(9, 105, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(10, 133, 8), // "httpDone"
QT_MOC_LITERAL(11, 142, 5), // "error"
QT_MOC_LITERAL(12, 148, 15), // "httpReqFinished"
QT_MOC_LITERAL(13, 164, 24), // "onAuthenticationRequired"
QT_MOC_LITERAL(14, 189, 14), // "QNetworkReply*"
QT_MOC_LITERAL(15, 204, 5), // "reply"
QT_MOC_LITERAL(16, 210, 15), // "QAuthenticator*"
QT_MOC_LITERAL(17, 226, 13), // "authenticator"
QT_MOC_LITERAL(18, 240, 26), // "onNetworkAccessibleChanged"
QT_MOC_LITERAL(19, 267, 43), // "QNetworkAccessManager::Networ..."
QT_MOC_LITERAL(20, 311, 10), // "accessible"
QT_MOC_LITERAL(21, 322, 11), // "onSslErrors"
QT_MOC_LITERAL(22, 334, 16), // "QList<QSslError>"
QT_MOC_LITERAL(23, 351, 6) // "errors"

    },
    "KDUpdater::HttpDownloader\0cancelDownload\0"
    "\0doDownload\0httpReadyRead\0httpReadProgress\0"
    "done\0total\0httpError\0QNetworkReply::NetworkError\0"
    "httpDone\0error\0httpReqFinished\0"
    "onAuthenticationRequired\0QNetworkReply*\0"
    "reply\0QAuthenticator*\0authenticator\0"
    "onNetworkAccessibleChanged\0"
    "QNetworkAccessManager::NetworkAccessibility\0"
    "accessible\0onSslErrors\0QList<QSslError>\0"
    "errors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDUpdater__HttpDownloader[] = {

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
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    2,   67,    2, 0x08 /* Private */,
       8,    1,   72,    2, 0x08 /* Private */,
      10,    1,   75,    2, 0x08 /* Private */,
      12,    0,   78,    2, 0x08 /* Private */,
      13,    2,   79,    2, 0x08 /* Private */,
      18,    1,   84,    2, 0x08 /* Private */,
      21,    2,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    6,    7,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16,   15,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 22,   15,   23,

       0        // eod
};

void KDUpdater::HttpDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HttpDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cancelDownload(); break;
        case 1: _t->doDownload(); break;
        case 2: _t->httpReadyRead(); break;
        case 3: _t->httpReadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->httpError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 5: _t->httpDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->httpReqFinished(); break;
        case 7: _t->onAuthenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 8: _t->onNetworkAccessibleChanged((*reinterpret_cast< QNetworkAccessManager::NetworkAccessibility(*)>(_a[1]))); break;
        case 9: _t->onSslErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDUpdater::HttpDownloader::staticMetaObject = { {
    QMetaObject::SuperData::link<FileDownloader::staticMetaObject>(),
    qt_meta_stringdata_KDUpdater__HttpDownloader.data,
    qt_meta_data_KDUpdater__HttpDownloader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDUpdater::HttpDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDUpdater::HttpDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDUpdater__HttpDownloader.stringdata0))
        return static_cast<void*>(this);
    return FileDownloader::qt_metacast(_clname);
}

int KDUpdater::HttpDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileDownloader::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

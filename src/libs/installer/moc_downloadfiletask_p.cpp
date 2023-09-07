/****************************************************************************
** Meta object code from reading C++ file 'downloadfiletask_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/installer/downloadfiletask_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downloadfiletask_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInstaller__Downloader_t {
    QByteArrayData data[24];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__Downloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__Downloader_t qt_meta_stringdata_QInstaller__Downloader = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QInstaller::Downloader"
QT_MOC_LITERAL(1, 23, 8), // "finished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "doDownload"
QT_MOC_LITERAL(4, 44, 11), // "onReadyRead"
QT_MOC_LITERAL(5, 56, 10), // "onFinished"
QT_MOC_LITERAL(6, 67, 14), // "QNetworkReply*"
QT_MOC_LITERAL(7, 82, 5), // "reply"
QT_MOC_LITERAL(8, 88, 7), // "onError"
QT_MOC_LITERAL(9, 96, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(10, 124, 5), // "error"
QT_MOC_LITERAL(11, 130, 11), // "onSslErrors"
QT_MOC_LITERAL(12, 142, 16), // "QList<QSslError>"
QT_MOC_LITERAL(13, 159, 9), // "sslErrors"
QT_MOC_LITERAL(14, 169, 18), // "onDownloadProgress"
QT_MOC_LITERAL(15, 188, 13), // "bytesReceived"
QT_MOC_LITERAL(16, 202, 10), // "bytesTotal"
QT_MOC_LITERAL(17, 213, 24), // "onAuthenticationRequired"
QT_MOC_LITERAL(18, 238, 15), // "QAuthenticator*"
QT_MOC_LITERAL(19, 254, 13), // "authenticator"
QT_MOC_LITERAL(20, 268, 29), // "onProxyAuthenticationRequired"
QT_MOC_LITERAL(21, 298, 13), // "QNetworkProxy"
QT_MOC_LITERAL(22, 312, 5), // "proxy"
QT_MOC_LITERAL(23, 318, 9) // "onTimeout"

    },
    "QInstaller::Downloader\0finished\0\0"
    "doDownload\0onReadyRead\0onFinished\0"
    "QNetworkReply*\0reply\0onError\0"
    "QNetworkReply::NetworkError\0error\0"
    "onSslErrors\0QList<QSslError>\0sslErrors\0"
    "onDownloadProgress\0bytesReceived\0"
    "bytesTotal\0onAuthenticationRequired\0"
    "QAuthenticator*\0authenticator\0"
    "onProxyAuthenticationRequired\0"
    "QNetworkProxy\0proxy\0onTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__Downloader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      11,    1,   73,    2, 0x08 /* Private */,
      14,    2,   76,    2, 0x08 /* Private */,
      17,    2,   81,    2, 0x08 /* Private */,
      20,    2,   86,    2, 0x08 /* Private */,
      23,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   15,   16,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 18,    7,   19,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 18,   22,   19,
    QMetaType::Void,

       0        // eod
};

void QInstaller::Downloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Downloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->doDownload(); break;
        case 2: _t->onReadyRead(); break;
        case 3: _t->onFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->onError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 5: _t->onSslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 6: _t->onDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 7: _t->onAuthenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 8: _t->onProxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 9: _t->onTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkProxy >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Downloader::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Downloader::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::Downloader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__Downloader.data,
    qt_meta_data_QInstaller__Downloader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::Downloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::Downloader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__Downloader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInstaller::Downloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QInstaller::Downloader::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

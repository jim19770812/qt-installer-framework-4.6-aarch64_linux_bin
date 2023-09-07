/****************************************************************************
** Meta object code from reading C++ file 'downloadarchivesjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/installer/downloadarchivesjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downloadarchivesjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInstaller__DownloadArchivesJob_t {
    QByteArrayData data[20];
    char stringdata0[322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__DownloadArchivesJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__DownloadArchivesJob_t qt_meta_stringdata_QInstaller__DownloadArchivesJob = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QInstaller::DownloadArchivesJob"
QT_MOC_LITERAL(1, 32, 15), // "progressChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 8), // "progress"
QT_MOC_LITERAL(4, 58, 17), // "outputTextChanged"
QT_MOC_LITERAL(5, 76, 21), // "downloadStatusChanged"
QT_MOC_LITERAL(6, 98, 6), // "status"
QT_MOC_LITERAL(7, 105, 17), // "hashDownloadReady"
QT_MOC_LITERAL(8, 123, 9), // "localPath"
QT_MOC_LITERAL(9, 133, 17), // "fileDownloadReady"
QT_MOC_LITERAL(10, 151, 23), // "onDownloadStatusChanged"
QT_MOC_LITERAL(11, 175, 12), // "registerFile"
QT_MOC_LITERAL(12, 188, 16), // "downloadCanceled"
QT_MOC_LITERAL(13, 205, 14), // "downloadFailed"
QT_MOC_LITERAL(14, 220, 5), // "error"
QT_MOC_LITERAL(15, 226, 15), // "finishWithError"
QT_MOC_LITERAL(16, 242, 16), // "fetchNextArchive"
QT_MOC_LITERAL(17, 259, 20), // "fetchNextArchiveHash"
QT_MOC_LITERAL(18, 280, 20), // "finishedHashDownload"
QT_MOC_LITERAL(19, 301, 20) // "emitDownloadProgress"

    },
    "QInstaller::DownloadArchivesJob\0"
    "progressChanged\0\0progress\0outputTextChanged\0"
    "downloadStatusChanged\0status\0"
    "hashDownloadReady\0localPath\0"
    "fileDownloadReady\0onDownloadStatusChanged\0"
    "registerFile\0downloadCanceled\0"
    "downloadFailed\0error\0finishWithError\0"
    "fetchNextArchive\0fetchNextArchiveHash\0"
    "finishedHashDownload\0emitDownloadProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__DownloadArchivesJob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    1,   90,    2, 0x06 /* Public */,
       7,    1,   93,    2, 0x06 /* Public */,
       9,    1,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   99,    2, 0x0a /* Public */,
      11,    0,  102,    2, 0x09 /* Protected */,
      12,    0,  103,    2, 0x09 /* Protected */,
      13,    1,  104,    2, 0x09 /* Protected */,
      15,    1,  107,    2, 0x09 /* Protected */,
      16,    0,  110,    2, 0x09 /* Protected */,
      17,    0,  111,    2, 0x09 /* Protected */,
      18,    0,  112,    2, 0x09 /* Protected */,
      19,    1,  113,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    3,

       0        // eod
};

void QInstaller::DownloadArchivesJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DownloadArchivesJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progressChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->outputTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->downloadStatusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->hashDownloadReady((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->fileDownloadReady((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onDownloadStatusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->registerFile(); break;
        case 7: _t->downloadCanceled(); break;
        case 8: _t->downloadFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->finishWithError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->fetchNextArchive(); break;
        case 11: _t->fetchNextArchiveHash(); break;
        case 12: _t->finishedHashDownload(); break;
        case 13: _t->emitDownloadProgress((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DownloadArchivesJob::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DownloadArchivesJob::progressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DownloadArchivesJob::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DownloadArchivesJob::outputTextChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DownloadArchivesJob::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DownloadArchivesJob::downloadStatusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DownloadArchivesJob::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DownloadArchivesJob::hashDownloadReady)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DownloadArchivesJob::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DownloadArchivesJob::fileDownloadReady)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::DownloadArchivesJob::staticMetaObject = { {
    QMetaObject::SuperData::link<Job::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__DownloadArchivesJob.data,
    qt_meta_data_QInstaller__DownloadArchivesJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::DownloadArchivesJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::DownloadArchivesJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__DownloadArchivesJob.stringdata0))
        return static_cast<void*>(this);
    return Job::qt_metacast(_clname);
}

int QInstaller::DownloadArchivesJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Job::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QInstaller::DownloadArchivesJob::progressChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QInstaller::DownloadArchivesJob::outputTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QInstaller::DownloadArchivesJob::downloadStatusChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QInstaller::DownloadArchivesJob::hashDownloadReady(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QInstaller::DownloadArchivesJob::fileDownloadReady(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

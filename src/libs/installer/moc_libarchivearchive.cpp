/****************************************************************************
** Meta object code from reading C++ file 'libarchivearchive.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/installer/libarchivearchive.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'libarchivearchive.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInstaller__ExtractWorker_t {
    QByteArrayData data[24];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__ExtractWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__ExtractWorker_t qt_meta_stringdata_QInstaller__ExtractWorker = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QInstaller::ExtractWorker"
QT_MOC_LITERAL(1, 26, 18), // "dataBlockRequested"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 9), // "dataAtEnd"
QT_MOC_LITERAL(4, 56, 16), // "dataReadyForRead"
QT_MOC_LITERAL(5, 73, 13), // "seekRequested"
QT_MOC_LITERAL(6, 87, 6), // "offset"
QT_MOC_LITERAL(7, 94, 6), // "whence"
QT_MOC_LITERAL(8, 101, 9), // "seekReady"
QT_MOC_LITERAL(9, 111, 8), // "finished"
QT_MOC_LITERAL(10, 120, 11), // "errorString"
QT_MOC_LITERAL(11, 132, 19), // "currentEntryChanged"
QT_MOC_LITERAL(12, 152, 8), // "filename"
QT_MOC_LITERAL(13, 161, 16), // "completedChanged"
QT_MOC_LITERAL(14, 178, 9), // "completed"
QT_MOC_LITERAL(15, 188, 5), // "total"
QT_MOC_LITERAL(16, 194, 7), // "extract"
QT_MOC_LITERAL(17, 202, 7), // "dirPath"
QT_MOC_LITERAL(18, 210, 10), // "totalFiles"
QT_MOC_LITERAL(19, 221, 12), // "addDataBlock"
QT_MOC_LITERAL(20, 234, 6), // "buffer"
QT_MOC_LITERAL(21, 241, 21), // "onFilePositionChanged"
QT_MOC_LITERAL(22, 263, 3), // "pos"
QT_MOC_LITERAL(23, 267, 6) // "cancel"

    },
    "QInstaller::ExtractWorker\0dataBlockRequested\0"
    "\0dataAtEnd\0dataReadyForRead\0seekRequested\0"
    "offset\0whence\0seekReady\0finished\0"
    "errorString\0currentEntryChanged\0"
    "filename\0completedChanged\0completed\0"
    "total\0extract\0dirPath\0totalFiles\0"
    "addDataBlock\0buffer\0onFilePositionChanged\0"
    "pos\0cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__ExtractWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    2,   82,    2, 0x06 /* Public */,
       8,    0,   87,    2, 0x06 /* Public */,
       9,    1,   88,    2, 0x06 /* Public */,
       9,    0,   91,    2, 0x26 /* Public | MethodCloned */,
      11,    1,   92,    2, 0x06 /* Public */,
      13,    2,   95,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    2,  100,    2, 0x0a /* Public */,
      19,    1,  105,    2, 0x0a /* Public */,
      21,    1,  108,    2, 0x0a /* Public */,
      23,    0,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   14,   15,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong,   17,   18,
    QMetaType::Void, QMetaType::QByteArray,   20,
    QMetaType::Void, QMetaType::LongLong,   22,
    QMetaType::Void,

       0        // eod
};

void QInstaller::ExtractWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExtractWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataBlockRequested(); break;
        case 1: _t->dataAtEnd(); break;
        case 2: _t->dataReadyForRead(); break;
        case 3: _t->seekRequested((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->seekReady(); break;
        case 5: _t->finished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->finished(); break;
        case 7: _t->currentEntryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->completedChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 9: _t->extract((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint64(*)>(_a[2]))); break;
        case 10: _t->addDataBlock((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 11: _t->onFilePositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 12: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ExtractWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtractWorker::dataBlockRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ExtractWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtractWorker::dataAtEnd)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ExtractWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtractWorker::dataReadyForRead)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ExtractWorker::*)(qint64 , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtractWorker::seekRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ExtractWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtractWorker::seekReady)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ExtractWorker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtractWorker::finished)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ExtractWorker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtractWorker::currentEntryChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ExtractWorker::*)(quint64 , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtractWorker::completedChanged)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::ExtractWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__ExtractWorker.data,
    qt_meta_data_QInstaller__ExtractWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::ExtractWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::ExtractWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__ExtractWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInstaller::ExtractWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QInstaller::ExtractWorker::dataBlockRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QInstaller::ExtractWorker::dataAtEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QInstaller::ExtractWorker::dataReadyForRead()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QInstaller::ExtractWorker::seekRequested(qint64 _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QInstaller::ExtractWorker::seekReady()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QInstaller::ExtractWorker::finished(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 7
void QInstaller::ExtractWorker::currentEntryChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QInstaller::ExtractWorker::completedChanged(quint64 _t1, quint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
struct qt_meta_stringdata_QInstaller__LibArchiveArchive_t {
    QByteArrayData data[19];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__LibArchiveArchive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__LibArchiveArchive_t qt_meta_stringdata_QInstaller__LibArchiveArchive = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QInstaller::LibArchiveArchive"
QT_MOC_LITERAL(1, 30, 18), // "dataBlockRequested"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 13), // "seekRequested"
QT_MOC_LITERAL(4, 64, 6), // "offset"
QT_MOC_LITERAL(5, 71, 6), // "whence"
QT_MOC_LITERAL(6, 78, 14), // "workerFinished"
QT_MOC_LITERAL(7, 93, 20), // "workerAboutToExtract"
QT_MOC_LITERAL(8, 114, 7), // "dirPath"
QT_MOC_LITERAL(9, 122, 10), // "totalFiles"
QT_MOC_LITERAL(10, 133, 25), // "workerAboutToAddDataBlock"
QT_MOC_LITERAL(11, 159, 6), // "buffer"
QT_MOC_LITERAL(12, 166, 25), // "workerAboutToSetDataAtEnd"
QT_MOC_LITERAL(13, 192, 28), // "workerAboutToSetFilePosition"
QT_MOC_LITERAL(14, 221, 3), // "pos"
QT_MOC_LITERAL(15, 225, 19), // "workerAboutToCancel"
QT_MOC_LITERAL(16, 245, 6), // "cancel"
QT_MOC_LITERAL(17, 252, 16), // "onWorkerFinished"
QT_MOC_LITERAL(18, 269, 11) // "errorString"

    },
    "QInstaller::LibArchiveArchive\0"
    "dataBlockRequested\0\0seekRequested\0"
    "offset\0whence\0workerFinished\0"
    "workerAboutToExtract\0dirPath\0totalFiles\0"
    "workerAboutToAddDataBlock\0buffer\0"
    "workerAboutToSetDataAtEnd\0"
    "workerAboutToSetFilePosition\0pos\0"
    "workerAboutToCancel\0cancel\0onWorkerFinished\0"
    "errorString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__LibArchiveArchive[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    2,   65,    2, 0x06 /* Public */,
       6,    0,   70,    2, 0x06 /* Public */,
       7,    2,   71,    2, 0x06 /* Public */,
      10,    1,   76,    2, 0x06 /* Public */,
      12,    0,   79,    2, 0x06 /* Public */,
      13,    1,   80,    2, 0x06 /* Public */,
      15,    0,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,   84,    2, 0x0a /* Public */,
      17,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong,    8,    9,
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   14,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void QInstaller::LibArchiveArchive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LibArchiveArchive *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataBlockRequested(); break;
        case 1: _t->seekRequested((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->workerFinished(); break;
        case 3: _t->workerAboutToExtract((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint64(*)>(_a[2]))); break;
        case 4: _t->workerAboutToAddDataBlock((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->workerAboutToSetDataAtEnd(); break;
        case 6: _t->workerAboutToSetFilePosition((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->workerAboutToCancel(); break;
        case 8: _t->cancel(); break;
        case 9: _t->onWorkerFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LibArchiveArchive::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibArchiveArchive::dataBlockRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LibArchiveArchive::*)(qint64 , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibArchiveArchive::seekRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LibArchiveArchive::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibArchiveArchive::workerFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LibArchiveArchive::*)(const QString & , const quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibArchiveArchive::workerAboutToExtract)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LibArchiveArchive::*)(const QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibArchiveArchive::workerAboutToAddDataBlock)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LibArchiveArchive::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibArchiveArchive::workerAboutToSetDataAtEnd)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LibArchiveArchive::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibArchiveArchive::workerAboutToSetFilePosition)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (LibArchiveArchive::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibArchiveArchive::workerAboutToCancel)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::LibArchiveArchive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractArchive::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__LibArchiveArchive.data,
    qt_meta_data_QInstaller__LibArchiveArchive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::LibArchiveArchive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::LibArchiveArchive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__LibArchiveArchive.stringdata0))
        return static_cast<void*>(this);
    return AbstractArchive::qt_metacast(_clname);
}

int QInstaller::LibArchiveArchive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractArchive::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QInstaller::LibArchiveArchive::dataBlockRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QInstaller::LibArchiveArchive::seekRequested(qint64 _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QInstaller::LibArchiveArchive::workerFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QInstaller::LibArchiveArchive::workerAboutToExtract(const QString & _t1, const quint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QInstaller::LibArchiveArchive::workerAboutToAddDataBlock(const QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QInstaller::LibArchiveArchive::workerAboutToSetDataAtEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QInstaller::LibArchiveArchive::workerAboutToSetFilePosition(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QInstaller::LibArchiveArchive::workerAboutToCancel()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'metadatajob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/installer/metadatajob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'metadatajob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInstaller__MetadataJob_t {
    QByteArrayData data[16];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__MetadataJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__MetadataJob_t qt_meta_stringdata_QInstaller__MetadataJob = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QInstaller::MetadataJob"
QT_MOC_LITERAL(1, 24, 7), // "doStart"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "doCancel"
QT_MOC_LITERAL(4, 42, 15), // "xmlTaskFinished"
QT_MOC_LITERAL(5, 58, 17), // "unzipTaskFinished"
QT_MOC_LITERAL(6, 76, 20), // "metadataTaskFinished"
QT_MOC_LITERAL(7, 97, 23), // "updateCacheTaskFinished"
QT_MOC_LITERAL(8, 121, 15), // "progressChanged"
QT_MOC_LITERAL(9, 137, 8), // "progress"
QT_MOC_LITERAL(10, 146, 22), // "setProgressTotalAmount"
QT_MOC_LITERAL(11, 169, 7), // "maximum"
QT_MOC_LITERAL(12, 177, 27), // "unzipRepositoryTaskFinished"
QT_MOC_LITERAL(13, 205, 12), // "startXMLTask"
QT_MOC_LITERAL(14, 218, 19), // "QList<FileTaskItem>"
QT_MOC_LITERAL(15, 238, 5) // "items"

    },
    "QInstaller::MetadataJob\0doStart\0\0"
    "doCancel\0xmlTaskFinished\0unzipTaskFinished\0"
    "metadataTaskFinished\0updateCacheTaskFinished\0"
    "progressChanged\0progress\0"
    "setProgressTotalAmount\0maximum\0"
    "unzipRepositoryTaskFinished\0startXMLTask\0"
    "QList<FileTaskItem>\0items"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__MetadataJob[] = {

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
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void QInstaller::MetadataJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MetadataJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doStart(); break;
        case 1: _t->doCancel(); break;
        case 2: _t->xmlTaskFinished(); break;
        case 3: _t->unzipTaskFinished(); break;
        case 4: _t->metadataTaskFinished(); break;
        case 5: _t->updateCacheTaskFinished(); break;
        case 6: _t->progressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setProgressTotalAmount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->unzipRepositoryTaskFinished(); break;
        case 9: _t->startXMLTask((*reinterpret_cast< const QList<FileTaskItem>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::MetadataJob::staticMetaObject = { {
    QMetaObject::SuperData::link<Job::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__MetadataJob.data,
    qt_meta_data_QInstaller__MetadataJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::MetadataJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::MetadataJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__MetadataJob.stringdata0))
        return static_cast<void*>(this);
    return Job::qt_metacast(_clname);
}

int QInstaller::MetadataJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Job::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE

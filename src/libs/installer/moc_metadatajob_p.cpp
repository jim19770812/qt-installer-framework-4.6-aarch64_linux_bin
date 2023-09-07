/****************************************************************************
** Meta object code from reading C++ file 'metadatajob_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/installer/metadatajob_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'metadatajob_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInstaller__UnzipArchiveTask_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__UnzipArchiveTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__UnzipArchiveTask_t qt_meta_stringdata_QInstaller__UnzipArchiveTask = {
    {
QT_MOC_LITERAL(0, 0, 28) // "QInstaller::UnzipArchiveTask"

    },
    "QInstaller::UnzipArchiveTask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__UnzipArchiveTask[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QInstaller::UnzipArchiveTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::UnzipArchiveTask::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractTask<void>::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__UnzipArchiveTask.data,
    qt_meta_data_QInstaller__UnzipArchiveTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::UnzipArchiveTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::UnzipArchiveTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__UnzipArchiveTask.stringdata0))
        return static_cast<void*>(this);
    return AbstractTask<void>::qt_metacast(_clname);
}

int QInstaller::UnzipArchiveTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractTask<void>::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QInstaller__UpdateCacheTask_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__UpdateCacheTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__UpdateCacheTask_t qt_meta_stringdata_QInstaller__UpdateCacheTask = {
    {
QT_MOC_LITERAL(0, 0, 27) // "QInstaller::UpdateCacheTask"

    },
    "QInstaller::UpdateCacheTask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__UpdateCacheTask[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QInstaller::UpdateCacheTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::UpdateCacheTask::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractTask<void>::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__UpdateCacheTask.data,
    qt_meta_data_QInstaller__UpdateCacheTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::UpdateCacheTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::UpdateCacheTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__UpdateCacheTask.stringdata0))
        return static_cast<void*>(this);
    return AbstractTask<void>::qt_metacast(_clname);
}

int QInstaller::UpdateCacheTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractTask<void>::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

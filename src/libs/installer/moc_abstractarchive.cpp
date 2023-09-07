/****************************************************************************
** Meta object code from reading C++ file 'abstractarchive.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/installer/abstractarchive.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractarchive.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInstaller__AbstractArchive_t {
    QByteArrayData data[15];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__AbstractArchive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__AbstractArchive_t qt_meta_stringdata_QInstaller__AbstractArchive = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QInstaller::AbstractArchive"
QT_MOC_LITERAL(1, 28, 19), // "currentEntryChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 8), // "filename"
QT_MOC_LITERAL(4, 58, 16), // "completedChanged"
QT_MOC_LITERAL(5, 75, 9), // "completed"
QT_MOC_LITERAL(6, 85, 5), // "total"
QT_MOC_LITERAL(7, 91, 6), // "cancel"
QT_MOC_LITERAL(8, 98, 16), // "CompressionLevel"
QT_MOC_LITERAL(9, 115, 3), // "Non"
QT_MOC_LITERAL(10, 119, 7), // "Fastest"
QT_MOC_LITERAL(11, 127, 4), // "Fast"
QT_MOC_LITERAL(12, 132, 6), // "Normal"
QT_MOC_LITERAL(13, 139, 7), // "Maximum"
QT_MOC_LITERAL(14, 147, 5) // "Ultra"

    },
    "QInstaller::AbstractArchive\0"
    "currentEntryChanged\0\0filename\0"
    "completedChanged\0completed\0total\0"
    "cancel\0CompressionLevel\0Non\0Fastest\0"
    "Fast\0Normal\0Maximum\0Ultra"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__AbstractArchive[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   38, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,    5,    6,

 // slots: parameters
    QMetaType::Void,

 // enums: name, alias, flags, count, data
       8,    8, 0x0,    6,   43,

 // enum data: key, value
       9, uint(QInstaller::AbstractArchive::Non),
      10, uint(QInstaller::AbstractArchive::Fastest),
      11, uint(QInstaller::AbstractArchive::Fast),
      12, uint(QInstaller::AbstractArchive::Normal),
      13, uint(QInstaller::AbstractArchive::Maximum),
      14, uint(QInstaller::AbstractArchive::Ultra),

       0        // eod
};

void QInstaller::AbstractArchive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractArchive *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentEntryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->completedChanged((*reinterpret_cast< const quint64(*)>(_a[1])),(*reinterpret_cast< const quint64(*)>(_a[2]))); break;
        case 2: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractArchive::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractArchive::currentEntryChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractArchive::*)(const quint64 , const quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractArchive::completedChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::AbstractArchive::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__AbstractArchive.data,
    qt_meta_data_QInstaller__AbstractArchive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::AbstractArchive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::AbstractArchive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__AbstractArchive.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInstaller::AbstractArchive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QInstaller::AbstractArchive::currentEntryChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QInstaller::AbstractArchive::completedChanged(const quint64 _t1, const quint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'task.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/kdtools/task.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'task.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDUpdater__Task_t {
    QByteArrayData data[17];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDUpdater__Task_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDUpdater__Task_t qt_meta_stringdata_KDUpdater__Task = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KDUpdater::Task"
QT_MOC_LITERAL(1, 16, 5), // "error"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "code"
QT_MOC_LITERAL(4, 28, 9), // "errorText"
QT_MOC_LITERAL(5, 38, 13), // "progressValue"
QT_MOC_LITERAL(6, 52, 7), // "percent"
QT_MOC_LITERAL(7, 60, 12), // "progressText"
QT_MOC_LITERAL(8, 73, 7), // "started"
QT_MOC_LITERAL(9, 81, 6), // "paused"
QT_MOC_LITERAL(10, 88, 7), // "resumed"
QT_MOC_LITERAL(11, 96, 7), // "stopped"
QT_MOC_LITERAL(12, 104, 8), // "finished"
QT_MOC_LITERAL(13, 113, 3), // "run"
QT_MOC_LITERAL(14, 117, 4), // "stop"
QT_MOC_LITERAL(15, 122, 5), // "pause"
QT_MOC_LITERAL(16, 128, 6) // "resume"

    },
    "KDUpdater::Task\0error\0\0code\0errorText\0"
    "progressValue\0percent\0progressText\0"
    "started\0paused\0resumed\0stopped\0finished\0"
    "run\0stop\0pause\0resume"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDUpdater__Task[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       5,    1,   79,    2, 0x06 /* Public */,
       7,    1,   82,    2, 0x06 /* Public */,
       8,    0,   85,    2, 0x06 /* Public */,
       9,    0,   86,    2, 0x06 /* Public */,
      10,    0,   87,    2, 0x06 /* Public */,
      11,    0,   88,    2, 0x06 /* Public */,
      12,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   90,    2, 0x0a /* Public */,
      14,    0,   91,    2, 0x0a /* Public */,
      15,    0,   92,    2, 0x0a /* Public */,
      16,    0,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KDUpdater::Task::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Task *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->progressValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->progressText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->started(); break;
        case 4: _t->paused(); break;
        case 5: _t->resumed(); break;
        case 6: _t->stopped(); break;
        case 7: _t->finished(); break;
        case 8: _t->run(); break;
        case 9: _t->stop(); break;
        case 10: _t->pause(); break;
        case 11: _t->resume(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Task::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::error)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Task::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::progressValue)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Task::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::progressText)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Task::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::started)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Task::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::paused)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Task::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::resumed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Task::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::stopped)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Task::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::finished)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDUpdater::Task::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KDUpdater__Task.data,
    qt_meta_data_KDUpdater__Task,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDUpdater::Task::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDUpdater::Task::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDUpdater__Task.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KDUpdater::Task::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void KDUpdater::Task::error(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KDUpdater::Task::progressValue(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KDUpdater::Task::progressText(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KDUpdater::Task::started()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KDUpdater::Task::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KDUpdater::Task::resumed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KDUpdater::Task::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KDUpdater::Task::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

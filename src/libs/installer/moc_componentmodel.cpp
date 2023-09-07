/****************************************************************************
** Meta object code from reading C++ file 'componentmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/libs/installer/componentmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'componentmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInstaller__ComponentModel_t {
    QByteArrayData data[11];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInstaller__ComponentModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInstaller__ComponentModel_t qt_meta_stringdata_QInstaller__ComponentModel = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QInstaller::ComponentModel"
QT_MOC_LITERAL(1, 27, 17), // "checkStateChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 38), // "QInstaller::ComponentModel::M..."
QT_MOC_LITERAL(4, 85, 5), // "state"
QT_MOC_LITERAL(5, 91, 5), // "reset"
QT_MOC_LITERAL(6, 97, 17), // "QList<Component*>"
QT_MOC_LITERAL(7, 115, 14), // "rootComponents"
QT_MOC_LITERAL(8, 130, 15), // "setCheckedState"
QT_MOC_LITERAL(9, 146, 42), // "QInstaller::ComponentModel::M..."
QT_MOC_LITERAL(10, 189, 21) // "onVirtualStateChanged"

    },
    "QInstaller::ComponentModel\0checkStateChanged\0"
    "\0QInstaller::ComponentModel::ModelState\0"
    "state\0reset\0QList<Component*>\0"
    "rootComponents\0setCheckedState\0"
    "QInstaller::ComponentModel::ModelStateFlag\0"
    "onVirtualStateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInstaller__ComponentModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x0a /* Public */,
       5,    0,   45,    2, 0x2a /* Public | MethodCloned */,
       8,    1,   46,    2, 0x0a /* Public */,
      10,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    4,
    QMetaType::Void,

       0        // eod
};

void QInstaller::ComponentModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComponentModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkStateChanged((*reinterpret_cast< QInstaller::ComponentModel::ModelState(*)>(_a[1]))); break;
        case 1: _t->reset((*reinterpret_cast< QList<Component*>(*)>(_a[1]))); break;
        case 2: _t->reset(); break;
        case 3: _t->setCheckedState((*reinterpret_cast< QInstaller::ComponentModel::ModelStateFlag(*)>(_a[1]))); break;
        case 4: _t->onVirtualStateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QInstaller::ComponentModel::ModelState >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Component*> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QInstaller::ComponentModel::ModelStateFlag >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComponentModel::*)(QInstaller::ComponentModel::ModelState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComponentModel::checkStateChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QInstaller::ComponentModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_QInstaller__ComponentModel.data,
    qt_meta_data_QInstaller__ComponentModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QInstaller::ComponentModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInstaller::ComponentModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInstaller__ComponentModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QInstaller::ComponentModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QInstaller::ComponentModel::checkStateChanged(QInstaller::ComponentModel::ModelState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

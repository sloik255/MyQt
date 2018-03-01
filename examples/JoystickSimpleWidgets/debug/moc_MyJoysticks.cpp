/****************************************************************************
** Meta object code from reading C++ file 'MyJoysticks.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/MyJoysticks/MyJoysticks.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyJoysticks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyJoysticks_t {
    QByteArrayData data[18];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyJoysticks_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyJoysticks_t qt_meta_stringdata_MyJoysticks = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MyJoysticks"
QT_MOC_LITERAL(1, 12, 10), // "hatChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "hat"
QT_MOC_LITERAL(4, 28, 5), // "angle"
QT_MOC_LITERAL(5, 34, 11), // "axisChanged"
QT_MOC_LITERAL(6, 46, 4), // "axis"
QT_MOC_LITERAL(7, 51, 5), // "value"
QT_MOC_LITERAL(8, 57, 13), // "buttonChanged"
QT_MOC_LITERAL(9, 71, 6), // "button"
QT_MOC_LITERAL(10, 78, 7), // "pressed"
QT_MOC_LITERAL(11, 86, 10), // "onHatEvent"
QT_MOC_LITERAL(12, 97, 9), // "SHatEvent"
QT_MOC_LITERAL(13, 107, 5), // "event"
QT_MOC_LITERAL(14, 113, 11), // "onAxisEvent"
QT_MOC_LITERAL(15, 125, 10), // "SAxisEvent"
QT_MOC_LITERAL(16, 136, 13), // "onButtonEvent"
QT_MOC_LITERAL(17, 150, 12) // "SButtonEvent"

    },
    "MyJoysticks\0hatChanged\0\0hat\0angle\0"
    "axisChanged\0axis\0value\0buttonChanged\0"
    "button\0pressed\0onHatEvent\0SHatEvent\0"
    "event\0onAxisEvent\0SAxisEvent\0onButtonEvent\0"
    "SButtonEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyJoysticks[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       5,    2,   49,    2, 0x06 /* Public */,
       8,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   59,    2, 0x08 /* Private */,
      14,    1,   62,    2, 0x08 /* Private */,
      16,    1,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   13,
    QMetaType::Void, 0x80000000 | 17,   13,

       0        // eod
};

void MyJoysticks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyJoysticks *_t = static_cast<MyJoysticks *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hatChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 1: _t->axisChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 2: _t->buttonChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 3: _t->onHatEvent((*reinterpret_cast< const SHatEvent(*)>(_a[1]))); break;
        case 4: _t->onAxisEvent((*reinterpret_cast< const SAxisEvent(*)>(_a[1]))); break;
        case 5: _t->onButtonEvent((*reinterpret_cast< const SButtonEvent(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SHatEvent >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SAxisEvent >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SButtonEvent >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyJoysticks::*_t)(const int , const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyJoysticks::hatChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyJoysticks::*_t)(const int , const double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyJoysticks::axisChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MyJoysticks::*_t)(const int , const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyJoysticks::buttonChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject MyJoysticks::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyJoysticks.data,
      qt_meta_data_MyJoysticks,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyJoysticks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyJoysticks::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyJoysticks.stringdata0))
        return static_cast<void*>(const_cast< MyJoysticks*>(this));
    return QObject::qt_metacast(_clname);
}

int MyJoysticks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MyJoysticks::hatChanged(const int _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyJoysticks::axisChanged(const int _t1, const double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyJoysticks::buttonChanged(const int _t1, const bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'joysticks.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/MyJoysticks/joysticks.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joysticks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoysticksGui_t {
    QByteArrayData data[17];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoysticksGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoysticksGui_t qt_meta_stringdata_JoysticksGui = {
    {
QT_MOC_LITERAL(0, 0, 12), // "JoysticksGui"
QT_MOC_LITERAL(1, 13, 16), // "joystickHatEvent"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "hat"
QT_MOC_LITERAL(4, 35, 5), // "angle"
QT_MOC_LITERAL(5, 41, 17), // "joystickAxisEvent"
QT_MOC_LITERAL(6, 59, 4), // "axis"
QT_MOC_LITERAL(7, 64, 5), // "value"
QT_MOC_LITERAL(8, 70, 19), // "joystickButtonEvent"
QT_MOC_LITERAL(9, 90, 6), // "button"
QT_MOC_LITERAL(10, 97, 7), // "pressed"
QT_MOC_LITERAL(11, 105, 10), // "hatChanged"
QT_MOC_LITERAL(12, 116, 11), // "axisChanged"
QT_MOC_LITERAL(13, 128, 13), // "buttonChanged"
QT_MOC_LITERAL(14, 142, 15), // "updateJoysticks"
QT_MOC_LITERAL(15, 158, 11), // "nameChanged"
QT_MOC_LITERAL(16, 170, 4) // "name"

    },
    "JoysticksGui\0joystickHatEvent\0\0hat\0"
    "angle\0joystickAxisEvent\0axis\0value\0"
    "joystickButtonEvent\0button\0pressed\0"
    "hatChanged\0axisChanged\0buttonChanged\0"
    "updateJoysticks\0nameChanged\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoysticksGui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       5,    2,   59,    2, 0x06 /* Public */,
       8,    2,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    2,   69,    2, 0x0a /* Public */,
      12,    2,   74,    2, 0x0a /* Public */,
      13,    2,   79,    2, 0x0a /* Public */,
      14,    0,   84,    2, 0x08 /* Private */,
      15,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QReal,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,

       0        // eod
};

void JoysticksGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JoysticksGui *_t = static_cast<JoysticksGui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->joystickHatEvent((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 1: _t->joystickAxisEvent((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 2: _t->joystickButtonEvent((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 3: _t->hatChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 4: _t->axisChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2]))); break;
        case 5: _t->buttonChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 6: _t->updateJoysticks(); break;
        case 7: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (JoysticksGui::*_t)(const int , const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoysticksGui::joystickHatEvent)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (JoysticksGui::*_t)(const int , const double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoysticksGui::joystickAxisEvent)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (JoysticksGui::*_t)(const int , const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoysticksGui::joystickButtonEvent)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject JoysticksGui::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_JoysticksGui.data,
      qt_meta_data_JoysticksGui,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JoysticksGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoysticksGui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoysticksGui.stringdata0))
        return static_cast<void*>(const_cast< JoysticksGui*>(this));
    return QDialog::qt_metacast(_clname);
}

int JoysticksGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void JoysticksGui::joystickHatEvent(const int _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JoysticksGui::joystickAxisEvent(const int _t1, const double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JoysticksGui::joystickButtonEvent(const int _t1, const bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

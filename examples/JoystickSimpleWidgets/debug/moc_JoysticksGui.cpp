/****************************************************************************
** Meta object code from reading C++ file 'JoysticksGui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/MyJoysticks/JoysticksGui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JoysticksGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoysticksGui_t {
    QByteArrayData data[18];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoysticksGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoysticksGui_t qt_meta_stringdata_JoysticksGui = {
    {
QT_MOC_LITERAL(0, 0, 12), // "JoysticksGui"
QT_MOC_LITERAL(1, 13, 17), // "joystickRefreshed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "joystickHatEvent"
QT_MOC_LITERAL(4, 49, 3), // "hat"
QT_MOC_LITERAL(5, 53, 5), // "angle"
QT_MOC_LITERAL(6, 59, 17), // "joystickAxisEvent"
QT_MOC_LITERAL(7, 77, 4), // "axis"
QT_MOC_LITERAL(8, 82, 5), // "value"
QT_MOC_LITERAL(9, 88, 19), // "joystickButtonEvent"
QT_MOC_LITERAL(10, 108, 6), // "button"
QT_MOC_LITERAL(11, 115, 7), // "pressed"
QT_MOC_LITERAL(12, 123, 10), // "hatChanged"
QT_MOC_LITERAL(13, 134, 11), // "axisChanged"
QT_MOC_LITERAL(14, 146, 13), // "buttonChanged"
QT_MOC_LITERAL(15, 160, 15), // "updateJoysticks"
QT_MOC_LITERAL(16, 176, 11), // "nameChanged"
QT_MOC_LITERAL(17, 188, 4) // "name"

    },
    "JoysticksGui\0joystickRefreshed\0\0"
    "joystickHatEvent\0hat\0angle\0joystickAxisEvent\0"
    "axis\0value\0joystickButtonEvent\0button\0"
    "pressed\0hatChanged\0axisChanged\0"
    "buttonChanged\0updateJoysticks\0nameChanged\0"
    "name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoysticksGui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    2,   60,    2, 0x06 /* Public */,
       6,    2,   65,    2, 0x06 /* Public */,
       9,    2,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    2,   75,    2, 0x0a /* Public */,
      13,    2,   80,    2, 0x0a /* Public */,
      14,    2,   85,    2, 0x0a /* Public */,
      15,    0,   90,    2, 0x08 /* Private */,
      16,    1,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   10,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QReal,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void JoysticksGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JoysticksGui *_t = static_cast<JoysticksGui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->joystickRefreshed(); break;
        case 1: _t->joystickHatEvent((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 2: _t->joystickAxisEvent((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 3: _t->joystickButtonEvent((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 4: _t->hatChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 5: _t->axisChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2]))); break;
        case 6: _t->buttonChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 7: _t->updateJoysticks(); break;
        case 8: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (JoysticksGui::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoysticksGui::joystickRefreshed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (JoysticksGui::*_t)(const int , const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoysticksGui::joystickHatEvent)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (JoysticksGui::*_t)(const int , const double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoysticksGui::joystickAxisEvent)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (JoysticksGui::*_t)(const int , const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoysticksGui::joystickButtonEvent)) {
                *result = 3;
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void JoysticksGui::joystickRefreshed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void JoysticksGui::joystickHatEvent(const int _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JoysticksGui::joystickAxisEvent(const int _t1, const double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void JoysticksGui::joystickButtonEvent(const int _t1, const bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

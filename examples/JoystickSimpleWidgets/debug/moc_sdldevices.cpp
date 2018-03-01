/****************************************************************************
** Meta object code from reading C++ file 'sdldevices.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/MyJoysticks/MyJoysticks/sdldevices.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sdldevices.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SdlDevices_t {
    QByteArrayData data[9];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SdlDevices_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SdlDevices_t qt_meta_stringdata_SdlDevices = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SdlDevices"
QT_MOC_LITERAL(1, 11, 15), // "hatEventOccured"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "SHatEvent"
QT_MOC_LITERAL(4, 38, 5), // "event"
QT_MOC_LITERAL(5, 44, 16), // "axisEventOccured"
QT_MOC_LITERAL(6, 61, 10), // "SAxisEvent"
QT_MOC_LITERAL(7, 72, 18), // "buttonEventOccured"
QT_MOC_LITERAL(8, 91, 12) // "SButtonEvent"

    },
    "SdlDevices\0hatEventOccured\0\0SHatEvent\0"
    "event\0axisEventOccured\0SAxisEvent\0"
    "buttonEventOccured\0SButtonEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SdlDevices[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,
       7,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 8,    4,

       0        // eod
};

void SdlDevices::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SdlDevices *_t = static_cast<SdlDevices *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hatEventOccured((*reinterpret_cast< const SHatEvent(*)>(_a[1]))); break;
        case 1: _t->axisEventOccured((*reinterpret_cast< const SAxisEvent(*)>(_a[1]))); break;
        case 2: _t->buttonEventOccured((*reinterpret_cast< const SButtonEvent(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SHatEvent >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SAxisEvent >(); break;
            }
            break;
        case 2:
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
            typedef void (SdlDevices::*_t)(const SHatEvent & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SdlDevices::hatEventOccured)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SdlDevices::*_t)(const SAxisEvent & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SdlDevices::axisEventOccured)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SdlDevices::*_t)(const SButtonEvent & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SdlDevices::buttonEventOccured)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SdlDevices::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_SdlDevices.data,
      qt_meta_data_SdlDevices,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SdlDevices::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SdlDevices::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SdlDevices.stringdata0))
        return static_cast<void*>(const_cast< SdlDevices*>(this));
    return QThread::qt_metacast(_clname);
}

int SdlDevices::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SdlDevices::hatEventOccured(const SHatEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SdlDevices::axisEventOccured(const SAxisEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SdlDevices::buttonEventOccured(const SButtonEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

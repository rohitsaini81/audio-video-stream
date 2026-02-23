/****************************************************************************
** Meta object code from reading C++ file 'vlchotkeyconverter.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vlchotkeyconverter.hpp"
#include "QKeyEvent"
#include "QWheelEvent"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vlchotkeyconverter.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN19WheelToVLCConverterE_t {};
} // unnamed namespace

template <> constexpr inline auto WheelToVLCConverter::qt_create_metaobjectdata<qt_meta_tag_ZN19WheelToVLCConverterE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WheelToVLCConverter",
        "QML.Element",
        "auto",
        "vlcWheelKey",
        "",
        "vlcKey",
        "wheelUpDown",
        "steps",
        "Qt::KeyboardModifiers",
        "modifiers",
        "wheelLeftRight",
        "wheelEvent",
        "const QWheelEvent*",
        "e",
        "qmlWheelEvent",
        "const QObject*",
        "getWheelOrientation",
        "Qt::Orientations",
        "x",
        "y"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'vlcWheelKey'
        QtMocHelpers::SignalData<void(int)>(3, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Signal 'wheelUpDown'
        QtMocHelpers::SignalData<void(int, Qt::KeyboardModifiers)>(6, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Signal 'wheelLeftRight'
        QtMocHelpers::SignalData<void(int, Qt::KeyboardModifiers)>(10, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'wheelEvent'
        QtMocHelpers::SlotData<void(const QWheelEvent *)>(11, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'qmlWheelEvent'
        QtMocHelpers::SlotData<void(const QObject *)>(14, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 11 },
        }}),
        // Method 'getWheelOrientation'
        QtMocHelpers::MethodData<Qt::Orientations(int, int)>(16, 4, QMC::AccessPublic, 0x80000000 | 17, {{
            { QMetaType::Int, 18 }, { QMetaType::Int, 19 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<WheelToVLCConverter, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject WheelToVLCConverter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19WheelToVLCConverterE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19WheelToVLCConverterE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19WheelToVLCConverterE_t>.metaTypes,
    nullptr
} };

void WheelToVLCConverter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WheelToVLCConverter *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->vlcWheelKey((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->wheelUpDown((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::KeyboardModifiers>>(_a[2]))); break;
        case 2: _t->wheelLeftRight((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::KeyboardModifiers>>(_a[2]))); break;
        case 3: _t->wheelEvent((*reinterpret_cast<std::add_pointer_t<const QWheelEvent*>>(_a[1]))); break;
        case 4: _t->qmlWheelEvent((*reinterpret_cast<std::add_pointer_t<const QObject*>>(_a[1]))); break;
        case 5: { Qt::Orientations _r = _t->getWheelOrientation((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<Qt::Orientations*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WheelToVLCConverter::*)(int )>(_a, &WheelToVLCConverter::vlcWheelKey, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WheelToVLCConverter::*)(int , Qt::KeyboardModifiers )>(_a, &WheelToVLCConverter::wheelUpDown, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WheelToVLCConverter::*)(int , Qt::KeyboardModifiers )>(_a, &WheelToVLCConverter::wheelLeftRight, 2))
            return;
    }
}

const QMetaObject *WheelToVLCConverter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WheelToVLCConverter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19WheelToVLCConverterE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WheelToVLCConverter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void WheelToVLCConverter::vlcWheelKey(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void WheelToVLCConverter::wheelUpDown(int _t1, Qt::KeyboardModifiers _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void WheelToVLCConverter::wheelLeftRight(int _t1, Qt::KeyboardModifiers _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}
QT_WARNING_POP

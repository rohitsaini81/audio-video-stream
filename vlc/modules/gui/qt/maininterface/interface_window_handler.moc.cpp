/****************************************************************************
** Meta object code from reading C++ file 'interface_window_handler.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "interface_window_handler.hpp"
#include "QKeyEvent"
#include "QWheelEvent"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interface_window_handler.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22InterfaceWindowHandlerE_t {};
} // unnamed namespace

template <> constexpr inline auto InterfaceWindowHandler::qt_create_metaobjectdata<qt_meta_tag_ZN22InterfaceWindowHandlerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "InterfaceWindowHandler",
        "minimalViewToggled",
        "",
        "fullscreenInterfaceToggled",
        "interfaceAlwaysOnTopChanged",
        "interfaceFullScreenChanged",
        "incrementIntfUserScaleFactor",
        "increment",
        "kc_pressed",
        "onVideoEmbedChanged",
        "embed",
        "setFullScreen",
        "fs",
        "setInterfaceFullScreen",
        "setInterfaceAlwaysOnTop",
        "on_top",
        "toggleWindowVisibility",
        "setInterfaceVisible",
        "setInterfaceHiden",
        "setInterfaceShown",
        "setInterfaceMinimized",
        "setInterfaceMaximized",
        "setInterfaceNormal",
        "setRaise",
        "setBoss",
        "requestActivate",
        "eventFilter",
        "QEvent*",
        "event"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'minimalViewToggled'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'fullscreenInterfaceToggled'
        QtMocHelpers::SignalData<void(bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'interfaceAlwaysOnTopChanged'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'interfaceFullScreenChanged'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'incrementIntfUserScaleFactor'
        QtMocHelpers::SignalData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Signal 'kc_pressed'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onVideoEmbedChanged'
        QtMocHelpers::SlotData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'setFullScreen'
        QtMocHelpers::SlotData<void(bool)>(11, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'setInterfaceFullScreen'
        QtMocHelpers::SlotData<void(bool)>(13, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'setInterfaceAlwaysOnTop'
        QtMocHelpers::SlotData<void(bool)>(14, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Slot 'toggleWindowVisibility'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'setInterfaceVisible'
        QtMocHelpers::SlotData<void(bool)>(17, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setInterfaceHiden'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'setInterfaceShown'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'setInterfaceMinimized'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'setInterfaceMaximized'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'setInterfaceNormal'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'setRaise'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'setBoss'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'requestActivate'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'eventFilter'
        QtMocHelpers::SlotData<bool(QObject *, QEvent *)>(26, 2, QMC::AccessProtected, QMetaType::Bool, {{
            { QMetaType::QObjectStar, 2 }, { 0x80000000 | 27, 28 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InterfaceWindowHandler, qt_meta_tag_ZN22InterfaceWindowHandlerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject InterfaceWindowHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22InterfaceWindowHandlerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22InterfaceWindowHandlerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22InterfaceWindowHandlerE_t>.metaTypes,
    nullptr
} };

void InterfaceWindowHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InterfaceWindowHandler *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->minimalViewToggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->fullscreenInterfaceToggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->interfaceAlwaysOnTopChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->interfaceFullScreenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->incrementIntfUserScaleFactor((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->kc_pressed(); break;
        case 6: _t->onVideoEmbedChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setFullScreen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setInterfaceFullScreen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->setInterfaceAlwaysOnTop((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->toggleWindowVisibility(); break;
        case 11: _t->setInterfaceVisible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->setInterfaceHiden(); break;
        case 13: _t->setInterfaceShown(); break;
        case 14: _t->setInterfaceMinimized(); break;
        case 15: _t->setInterfaceMaximized(); break;
        case 16: _t->setInterfaceNormal(); break;
        case 17: _t->setRaise(); break;
        case 18: _t->setBoss(); break;
        case 19: _t->requestActivate(); break;
        case 20: { bool _r = _t->eventFilter((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QEvent*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InterfaceWindowHandler::*)(bool )>(_a, &InterfaceWindowHandler::minimalViewToggled, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InterfaceWindowHandler::*)(bool )>(_a, &InterfaceWindowHandler::fullscreenInterfaceToggled, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (InterfaceWindowHandler::*)(bool )>(_a, &InterfaceWindowHandler::interfaceAlwaysOnTopChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (InterfaceWindowHandler::*)(bool )>(_a, &InterfaceWindowHandler::interfaceFullScreenChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (InterfaceWindowHandler::*)(bool )>(_a, &InterfaceWindowHandler::incrementIntfUserScaleFactor, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (InterfaceWindowHandler::*)()>(_a, &InterfaceWindowHandler::kc_pressed, 5))
            return;
    }
}

const QMetaObject *InterfaceWindowHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterfaceWindowHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22InterfaceWindowHandlerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InterfaceWindowHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void InterfaceWindowHandler::minimalViewToggled(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void InterfaceWindowHandler::fullscreenInterfaceToggled(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void InterfaceWindowHandler::interfaceAlwaysOnTopChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void InterfaceWindowHandler::interfaceFullScreenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void InterfaceWindowHandler::incrementIntfUserScaleFactor(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void InterfaceWindowHandler::kc_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP

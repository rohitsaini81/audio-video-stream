/****************************************************************************
** Meta object code from reading C++ file 'extensions_manager.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "extensions_manager.hpp"
#include "util/renderer_manager.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extensions_manager.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17ExtensionsManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto ExtensionsManager::qt_create_metaobjectdata<qt_meta_tag_ZN17ExtensionsManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExtensionsManager",
        "extensionsUpdated",
        "",
        "loadExtensions",
        "unloadExtensions",
        "reloadExtensions",
        "triggerMenu",
        "id",
        "inputChanged",
        "playingChanged",
        "PlayerController::PlayingState",
        "metaChanged",
        "input_item_t*",
        "p_input"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'extensionsUpdated'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadExtensions'
        QtMocHelpers::SlotData<bool()>(3, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'unloadExtensions'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reloadExtensions'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'triggerMenu'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'inputChanged'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'playingChanged'
        QtMocHelpers::SlotData<void(PlayerController::PlayingState)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 2 },
        }}),
        // Slot 'metaChanged'
        QtMocHelpers::SlotData<void(input_item_t *)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExtensionsManager, qt_meta_tag_ZN17ExtensionsManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExtensionsManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ExtensionsManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ExtensionsManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17ExtensionsManagerE_t>.metaTypes,
    nullptr
} };

void ExtensionsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExtensionsManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->extensionsUpdated(); break;
        case 1: { bool _r = _t->loadExtensions();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->unloadExtensions(); break;
        case 3: _t->reloadExtensions(); break;
        case 4: _t->triggerMenu((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->inputChanged(); break;
        case 6: _t->playingChanged((*reinterpret_cast<std::add_pointer_t<PlayerController::PlayingState>>(_a[1]))); break;
        case 7: _t->metaChanged((*reinterpret_cast<std::add_pointer_t<input_item_t*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ExtensionsManager::*)()>(_a, &ExtensionsManager::extensionsUpdated, 0))
            return;
    }
}

const QMetaObject *ExtensionsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtensionsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ExtensionsManagerE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Singleton<ExtensionsManager>"))
        return static_cast< Singleton<ExtensionsManager>*>(this);
    return QObject::qt_metacast(_clname);
}

int ExtensionsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ExtensionsManager::extensionsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'player_controlbar_model.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "player_controlbar_model.hpp"
#include "player/control_list_model.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player_controlbar_model.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN21PlayerControlbarModelE_t {};
} // unnamed namespace

template <> constexpr inline auto PlayerControlbarModel::qt_create_metaobjectdata<qt_meta_tag_ZN21PlayerControlbarModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlayerControlbarModel",
        "dirtyChanged",
        "",
        "dirty",
        "emptyChanged",
        "controlListChanged",
        "setDirty",
        "contentChanged",
        "empty",
        "left",
        "ControlListModel*",
        "center",
        "right",
        "PlayerIdentifier",
        "Videoplayer",
        "Audioplayer",
        "Miniplayer"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'dirtyChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'emptyChanged'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'controlListChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setDirty'
        QtMocHelpers::SlotData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'contentChanged'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'dirty'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 0),
        // property 'empty'
        QtMocHelpers::PropertyData<bool>(8, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 1),
        // property 'left'
        QtMocHelpers::PropertyData<ControlListModel*>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'center'
        QtMocHelpers::PropertyData<ControlListModel*>(11, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'right'
        QtMocHelpers::PropertyData<ControlListModel*>(12, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'PlayerIdentifier'
        QtMocHelpers::EnumData<enum PlayerIdentifier>(13, 13, QMC::EnumFlags{}).add({
            {   14, PlayerIdentifier::Videoplayer },
            {   15, PlayerIdentifier::Audioplayer },
            {   16, PlayerIdentifier::Miniplayer },
        }),
    };
    return QtMocHelpers::metaObjectData<PlayerControlbarModel, qt_meta_tag_ZN21PlayerControlbarModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PlayerControlbarModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21PlayerControlbarModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21PlayerControlbarModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21PlayerControlbarModelE_t>.metaTypes,
    nullptr
} };

void PlayerControlbarModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlayerControlbarModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->dirtyChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->emptyChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->controlListChanged(); break;
        case 3: _t->setDirty((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->contentChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlayerControlbarModel::*)(bool )>(_a, &PlayerControlbarModel::dirtyChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerControlbarModel::*)(bool )>(_a, &PlayerControlbarModel::emptyChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerControlbarModel::*)()>(_a, &PlayerControlbarModel::controlListChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->dirty(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->empty(); break;
        case 2: *reinterpret_cast<ControlListModel**>(_v) = _t->left(); break;
        case 3: *reinterpret_cast<ControlListModel**>(_v) = _t->center(); break;
        case 4: *reinterpret_cast<ControlListModel**>(_v) = _t->right(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDirty(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *PlayerControlbarModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerControlbarModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21PlayerControlbarModelE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlayerControlbarModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PlayerControlbarModel::dirtyChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void PlayerControlbarModel::emptyChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void PlayerControlbarModel::controlListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'control_list_filter.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "control_list_filter.hpp"
#include "maininterface/mainctx.hpp"
#include "player/player_controller.hpp"
#include "player/control_list_model.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'control_list_filter.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17ControlListFilterE_t {};
} // unnamed namespace

template <> constexpr inline auto ControlListFilter::qt_create_metaobjectdata<qt_meta_tag_ZN17ControlListFilterE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ControlListFilter",
        "playerChanged",
        "",
        "ctxChanged",
        "sourceModelChanged1",
        "sourceModel",
        "ControlListModel*",
        "player",
        "PlayerController*",
        "ctx",
        "MainCtx*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'playerChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ctxChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sourceModelChanged1'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'sourceModel'
        QtMocHelpers::PropertyData<ControlListModel*>(5, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 2),
        // property 'player'
        QtMocHelpers::PropertyData<PlayerController*>(7, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 0),
        // property 'ctx'
        QtMocHelpers::PropertyData<MainCtx*>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ControlListFilter, qt_meta_tag_ZN17ControlListFilterE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ControlListFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ControlListFilterE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ControlListFilterE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17ControlListFilterE_t>.metaTypes,
    nullptr
} };

void ControlListFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ControlListFilter *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->playerChanged(); break;
        case 1: _t->ctxChanged(); break;
        case 2: _t->sourceModelChanged1(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ControlListFilter::*)()>(_a, &ControlListFilter::playerChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ControlListFilter::*)()>(_a, &ControlListFilter::ctxChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ControlListFilter::*)()>(_a, &ControlListFilter::sourceModelChanged1, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<ControlListModel**>(_v) = _t->sourceModel(); break;
        case 1: *reinterpret_cast<PlayerController**>(_v) = _t->player(); break;
        case 2: *reinterpret_cast<MainCtx**>(_v) = _t->ctx(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSourceModel(*reinterpret_cast<ControlListModel**>(_v)); break;
        case 1: _t->setPlayer(*reinterpret_cast<PlayerController**>(_v)); break;
        case 2: _t->setCtx(*reinterpret_cast<MainCtx**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *ControlListFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControlListFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ControlListFilterE_t>.strings))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int ControlListFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ControlListFilter::playerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ControlListFilter::ctxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ControlListFilter::sourceModelChanged1()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'mlfoldersmodel.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mlfoldersmodel.hpp"
#include "dialogs/toolbar/controlbar_profile_model.hpp"
#include "util/csdbuttonmodel.hpp"
#include "playlist/playlist_controller.hpp"
#include "maininterface/mainctx_submodels.hpp"
#include "maininterface/videosurface.hpp"
#include "medialibrary/medialib.hpp"
#include "player/player_controller.hpp"
#include "util/color_scheme_model.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mlfoldersmodel.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18MLFoldersBaseModelE_t {};
} // unnamed namespace

template <> constexpr inline auto MLFoldersBaseModel::qt_create_metaobjectdata<qt_meta_tag_ZN18MLFoldersBaseModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MLFoldersBaseModel",
        "ctxChanged",
        "",
        "operationFailed",
        "op",
        "QUrl",
        "url",
        "onMLEntryPointModified",
        "remove",
        "mrl",
        "add",
        "reload",
        "row",
        "removeAt",
        "index",
        "ctx",
        "MainCtx*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'ctxChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'operationFailed'
        QtMocHelpers::SignalData<void(int, QUrl) const>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Signal 'onMLEntryPointModified'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'remove'
        QtMocHelpers::SlotData<void(const QUrl &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 9 },
        }}),
        // Slot 'add'
        QtMocHelpers::SlotData<void(const QUrl &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 9 },
        }}),
        // Slot 'reload'
        QtMocHelpers::SlotData<void(const int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'removeAt'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'ctx'
        QtMocHelpers::PropertyData<MainCtx*>(15, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MLFoldersBaseModel, qt_meta_tag_ZN18MLFoldersBaseModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MLFoldersBaseModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18MLFoldersBaseModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18MLFoldersBaseModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18MLFoldersBaseModelE_t>.metaTypes,
    nullptr
} };

void MLFoldersBaseModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MLFoldersBaseModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ctxChanged(); break;
        case 1: _t->operationFailed((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[2]))); break;
        case 2: _t->onMLEntryPointModified(QPrivateSignal()); break;
        case 3: _t->remove((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 4: _t->add((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 5: _t->reload((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->removeAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MLFoldersBaseModel::*)()>(_a, &MLFoldersBaseModel::ctxChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MLFoldersBaseModel::*)(int , QUrl ) const>(_a, &MLFoldersBaseModel::operationFailed, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MLFoldersBaseModel::*)(QPrivateSignal)>(_a, &MLFoldersBaseModel::onMLEntryPointModified, 2))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MainCtx* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<MainCtx**>(_v) = _t->getCtx(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCtx(*reinterpret_cast<MainCtx**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *MLFoldersBaseModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MLFoldersBaseModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18MLFoldersBaseModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int MLFoldersBaseModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MLFoldersBaseModel::ctxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MLFoldersBaseModel::operationFailed(int _t1, QUrl _t2)const
{
    QMetaObject::activate<void>(const_cast< MLFoldersBaseModel *>(this), &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void MLFoldersBaseModel::onMLEntryPointModified(QPrivateSignal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP

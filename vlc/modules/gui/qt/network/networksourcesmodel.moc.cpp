/****************************************************************************
** Meta object code from reading C++ file 'networksourcesmodel.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "networksourcesmodel.hpp"
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
#error "The header file 'networksourcesmodel.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19NetworkSourcesModelE_t {};
} // unnamed namespace

template <> constexpr inline auto NetworkSourcesModel::qt_create_metaobjectdata<qt_meta_tag_ZN19NetworkSourcesModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NetworkSourcesModel",
        "ctxChanged",
        "",
        "ctx",
        "MainCtx*",
        "Role",
        "SOURCE_NAME",
        "SOURCE_LONGNAME",
        "SOURCE_TYPE",
        "SOURCE_ARTWORK",
        "ItemType",
        "TYPE_DUMMY",
        "TYPE_SOURCE"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'ctxChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'ctx'
        QtMocHelpers::PropertyData<MainCtx*>(3, 0x80000000 | 4, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 0),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Role'
        QtMocHelpers::EnumData<enum Role>(5, 5, QMC::EnumFlags{}).add({
            {    6, Role::SOURCE_NAME },
            {    7, Role::SOURCE_LONGNAME },
            {    8, Role::SOURCE_TYPE },
            {    9, Role::SOURCE_ARTWORK },
        }),
        // enum 'ItemType'
        QtMocHelpers::EnumData<enum ItemType>(10, 10, QMC::EnumFlags{}).add({
            {   11, ItemType::TYPE_DUMMY },
            {   12, ItemType::TYPE_SOURCE },
        }),
    };
    return QtMocHelpers::metaObjectData<NetworkSourcesModel, qt_meta_tag_ZN19NetworkSourcesModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NetworkSourcesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19NetworkSourcesModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19NetworkSourcesModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19NetworkSourcesModelE_t>.metaTypes,
    nullptr
} };

void NetworkSourcesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NetworkSourcesModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ctxChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (NetworkSourcesModel::*)()>(_a, &NetworkSourcesModel::ctxChanged, 0))
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

const QMetaObject *NetworkSourcesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkSourcesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19NetworkSourcesModelE_t>.strings))
        return static_cast<void*>(this);
    return BaseModel::qt_metacast(_clname);
}

int NetworkSourcesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
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
void NetworkSourcesModel::ctxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP

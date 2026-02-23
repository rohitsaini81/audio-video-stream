/****************************************************************************
** Meta object code from reading C++ file 'addonsmodel.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addonsmodel.hpp"
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
#error "The header file 'addonsmodel.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11AddonsModelE_t {};
} // unnamed namespace

template <> constexpr inline auto AddonsModel::qt_create_metaobjectdata<qt_meta_tag_ZN11AddonsModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AddonsModel",
        "ctxChanged",
        "",
        "stateFilterChanged",
        "typeFilterChanged",
        "installService",
        "idx",
        "removeService",
        "loadFromDefaultRepository",
        "loadFromExternalRepository",
        "QUrl",
        "uri",
        "getLabelForType",
        "Type",
        "type",
        "getColorForType",
        "QColor",
        "getIconForType",
        "ctx",
        "MainCtx*",
        "typeFilter",
        "stateFilter",
        "State",
        "maxScore",
        "STATE_NOTINSTALLED",
        "STATE_INSTALLING",
        "STATE_INSTALLED",
        "STATE_UNINSTALLING",
        "STATE_NONE",
        "Role",
        "NAME",
        "AUTHOR",
        "SUMMARY",
        "DESCRIPTION",
        "DOWNLOADS",
        "SCORE",
        "STATE",
        "TYPE",
        "ARTWORK",
        "LINK",
        "FILENAME",
        "ADDON_VERSION",
        "UUID",
        "DOWNLOAD_COUNT",
        "BROKEN",
        "MANAGEABLE",
        "UPDATABLE",
        "TYPE_UNKNOWN",
        "TYPE_EXTENSION",
        "TYPE_PLAYLIST_PARSER",
        "TYPE_SERVICE_DISCOVERY",
        "TYPE_SKIN2",
        "TYPE_PLUGIN",
        "TYPE_INTERFACE",
        "TYPE_META",
        "TYPE_OTHER",
        "TYPE_NONE"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'ctxChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'stateFilterChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'typeFilterChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'installService'
        QtMocHelpers::MethodData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Method 'removeService'
        QtMocHelpers::MethodData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Method 'loadFromDefaultRepository'
        QtMocHelpers::MethodData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'loadFromExternalRepository'
        QtMocHelpers::MethodData<void(QUrl)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Method 'getLabelForType'
        QtMocHelpers::MethodData<QString(enum Type)>(12, 2, QMC::AccessPublic, QMetaType::QString, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Method 'getColorForType'
        QtMocHelpers::MethodData<QColor(enum Type)>(15, 2, QMC::AccessPublic, 0x80000000 | 16, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Method 'getIconForType'
        QtMocHelpers::MethodData<QString(enum Type)>(17, 2, QMC::AccessPublic, QMetaType::QString, {{
            { 0x80000000 | 13, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'ctx'
        QtMocHelpers::PropertyData<MainCtx*>(18, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 0),
        // property 'typeFilter'
        QtMocHelpers::PropertyData<enum Type>(20, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 2),
        // property 'stateFilter'
        QtMocHelpers::PropertyData<enum State>(21, 0x80000000 | 22, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 1),
        // property 'maxScore'
        QtMocHelpers::PropertyData<int>(23, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'State'
        QtMocHelpers::EnumData<enum State>(22, 22, QMC::EnumIsScoped).add({
            {   24, State::STATE_NOTINSTALLED },
            {   25, State::STATE_INSTALLING },
            {   26, State::STATE_INSTALLED },
            {   27, State::STATE_UNINSTALLING },
            {   28, State::STATE_NONE },
        }),
        // enum 'Role'
        QtMocHelpers::EnumData<enum Role>(29, 29, QMC::EnumFlags{}).add({
            {   30, Role::NAME },
            {   31, Role::AUTHOR },
            {   32, Role::SUMMARY },
            {   33, Role::DESCRIPTION },
            {   34, Role::DOWNLOADS },
            {   35, Role::SCORE },
            {   36, Role::STATE },
            {   37, Role::TYPE },
            {   38, Role::ARTWORK },
            {   39, Role::LINK },
            {   40, Role::FILENAME },
            {   41, Role::ADDON_VERSION },
            {   42, Role::UUID },
            {   43, Role::DOWNLOAD_COUNT },
            {   44, Role::BROKEN },
            {   45, Role::MANAGEABLE },
            {   46, Role::UPDATABLE },
        }),
        // enum 'Type'
        QtMocHelpers::EnumData<enum Type>(13, 13, QMC::EnumIsScoped).add({
            {   47, Type::TYPE_UNKNOWN },
            {   48, Type::TYPE_EXTENSION },
            {   49, Type::TYPE_PLAYLIST_PARSER },
            {   50, Type::TYPE_SERVICE_DISCOVERY },
            {   51, Type::TYPE_SKIN2 },
            {   52, Type::TYPE_PLUGIN },
            {   53, Type::TYPE_INTERFACE },
            {   54, Type::TYPE_META },
            {   55, Type::TYPE_OTHER },
            {   56, Type::TYPE_NONE },
        }),
    };
    return QtMocHelpers::metaObjectData<AddonsModel, qt_meta_tag_ZN11AddonsModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AddonsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11AddonsModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11AddonsModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11AddonsModelE_t>.metaTypes,
    nullptr
} };

void AddonsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AddonsModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ctxChanged(); break;
        case 1: _t->stateFilterChanged(); break;
        case 2: _t->typeFilterChanged(); break;
        case 3: _t->installService((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->removeService((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->loadFromDefaultRepository(); break;
        case 6: _t->loadFromExternalRepository((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 7: { QString _r = _t->getLabelForType((*reinterpret_cast<std::add_pointer_t<enum Type>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QColor _r = _t->getColorForType((*reinterpret_cast<std::add_pointer_t<enum Type>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QColor*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->getIconForType((*reinterpret_cast<std::add_pointer_t<enum Type>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AddonsModel::*)()>(_a, &AddonsModel::ctxChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AddonsModel::*)()>(_a, &AddonsModel::stateFilterChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AddonsModel::*)()>(_a, &AddonsModel::typeFilterChanged, 2))
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
        case 1: *reinterpret_cast<enum Type*>(_v) = _t->getTypeFilter(); break;
        case 2: *reinterpret_cast<enum State*>(_v) = _t->getStateFilter(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->getMaxScore(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCtx(*reinterpret_cast<MainCtx**>(_v)); break;
        case 1: _t->setTypeFilter(*reinterpret_cast<enum Type*>(_v)); break;
        case 2: _t->setStateFilter(*reinterpret_cast<enum State*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *AddonsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddonsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11AddonsModelE_t>.strings))
        return static_cast<void*>(this);
    return BaseModel::qt_metacast(_clname);
}

int AddonsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void AddonsModel::ctxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AddonsModel::stateFilterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AddonsModel::typeFilterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP

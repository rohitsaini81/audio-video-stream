/****************************************************************************
** Meta object code from reading C++ file 'networkdevicemodel.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "networkdevicemodel.hpp"
#include "maininterface/mainctx.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkdevicemodel.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18NetworkDeviceModelE_t {};
} // unnamed namespace

template <> constexpr inline auto NetworkDeviceModel::qt_create_metaobjectdata<qt_meta_tag_ZN18NetworkDeviceModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NetworkDeviceModel",
        "ctxChanged",
        "",
        "sdSourceChanged",
        "sourceNameChanged",
        "nameChanged",
        "itemsUpdated",
        "insertIntoPlaylist",
        "QModelIndexList",
        "itemIdList",
        "ssize_t",
        "playlistIndex",
        "addToPlaylist",
        "row",
        "QVariantList",
        "addAndPlay",
        "getItemsForIndexes",
        "indexes",
        "QJSValue",
        "callback",
        "ctx",
        "MainCtx*",
        "sd_source",
        "SDCatType",
        "name",
        "source_name",
        "CAT_UNDEFINED",
        "CAT_DEVICES",
        "CAT_LAN",
        "CAT_INTERNET",
        "CAT_MYCOMPUTER"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'ctxChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sdSourceChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sourceNameChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'nameChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'itemsUpdated'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'insertIntoPlaylist'
        QtMocHelpers::MethodData<bool(const QModelIndexList &, ssize_t)>(7, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 10, 11 },
        }}),
        // Method 'addToPlaylist'
        QtMocHelpers::MethodData<bool(int)>(12, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 13 },
        }}),
        // Method 'addToPlaylist'
        QtMocHelpers::MethodData<bool(const QVariantList &)>(12, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 14, 9 },
        }}),
        // Method 'addToPlaylist'
        QtMocHelpers::MethodData<bool(const QModelIndexList &)>(12, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Method 'addAndPlay'
        QtMocHelpers::MethodData<bool(int)>(15, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 13 },
        }}),
        // Method 'addAndPlay'
        QtMocHelpers::MethodData<bool(const QVariantList &)>(15, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 14, 9 },
        }}),
        // Method 'addAndPlay'
        QtMocHelpers::MethodData<bool(const QModelIndexList &)>(15, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Method 'getItemsForIndexes'
        QtMocHelpers::MethodData<void(const QModelIndexList &, QJSValue)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 17 }, { 0x80000000 | 18, 19 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'ctx'
        QtMocHelpers::PropertyData<MainCtx*>(20, 0x80000000 | 21, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 0),
        // property 'sd_source'
        QtMocHelpers::PropertyData<enum SDCatType>(22, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'name'
        QtMocHelpers::PropertyData<QString>(24, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 3),
        // property 'source_name'
        QtMocHelpers::PropertyData<QString>(25, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 2),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'SDCatType'
        QtMocHelpers::EnumData<enum SDCatType>(23, 23, QMC::EnumFlags{}).add({
            {   26, SDCatType::CAT_UNDEFINED },
            {   27, SDCatType::CAT_DEVICES },
            {   28, SDCatType::CAT_LAN },
            {   29, SDCatType::CAT_INTERNET },
            {   30, SDCatType::CAT_MYCOMPUTER },
        }),
    };
    return QtMocHelpers::metaObjectData<NetworkDeviceModel, qt_meta_tag_ZN18NetworkDeviceModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NetworkDeviceModel::staticMetaObject = { {
    QMetaObject::SuperData::link<NetworkBaseModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18NetworkDeviceModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18NetworkDeviceModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18NetworkDeviceModelE_t>.metaTypes,
    nullptr
} };

void NetworkDeviceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NetworkDeviceModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ctxChanged(); break;
        case 1: _t->sdSourceChanged(); break;
        case 2: _t->sourceNameChanged(); break;
        case 3: _t->nameChanged(); break;
        case 4: _t->itemsUpdated(); break;
        case 5: { bool _r = _t->insertIntoPlaylist((*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<ssize_t>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->addToPlaylist((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->addToPlaylist((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->addToPlaylist((*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->addAndPlay((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->addAndPlay((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->addAndPlay((*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->getItemsForIndexes((*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (NetworkDeviceModel::*)()>(_a, &NetworkDeviceModel::ctxChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkDeviceModel::*)()>(_a, &NetworkDeviceModel::sdSourceChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkDeviceModel::*)()>(_a, &NetworkDeviceModel::sourceNameChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkDeviceModel::*)()>(_a, &NetworkDeviceModel::nameChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkDeviceModel::*)()>(_a, &NetworkDeviceModel::itemsUpdated, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<MainCtx**>(_v) = _t->getCtx(); break;
        case 1: *reinterpret_cast<enum SDCatType*>(_v) = _t->getSdSource(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->getName(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->getSourceName(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCtx(*reinterpret_cast<MainCtx**>(_v)); break;
        case 1: _t->setSdSource(*reinterpret_cast<enum SDCatType*>(_v)); break;
        case 3: _t->setSourceName(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *NetworkDeviceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkDeviceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18NetworkDeviceModelE_t>.strings))
        return static_cast<void*>(this);
    return NetworkBaseModel::qt_metacast(_clname);
}

int NetworkDeviceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NetworkBaseModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
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
void NetworkDeviceModel::ctxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NetworkDeviceModel::sdSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NetworkDeviceModel::sourceNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void NetworkDeviceModel::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void NetworkDeviceModel::itemsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP

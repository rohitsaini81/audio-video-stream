/****************************************************************************
** Meta object code from reading C++ file 'networkmediamodel.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "networkmediamodel.hpp"
#include "maininterface/mainctx.hpp"
#include "maininterface/mainctx.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkmediamodel.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15NetworkTreeItemE_t {};
} // unnamed namespace

template <> constexpr inline auto NetworkTreeItem::qt_create_metaobjectdata<qt_meta_tag_ZN15NetworkTreeItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NetworkTreeItem"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NetworkTreeItem, qt_meta_tag_ZN15NetworkTreeItemE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NetworkTreeItem::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15NetworkTreeItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15NetworkTreeItemE_t>.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15NetworkTreeItemE_t>.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN8PathNodeE_t {};
} // unnamed namespace

template <> constexpr inline auto PathNode::qt_create_metaobjectdata<qt_meta_tag_ZN8PathNodeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PathNode",
        "tree",
        "QVariant",
        "display"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'tree'
        QtMocHelpers::PropertyData<QVariant>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'display'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PathNode, qt_meta_tag_ZN8PathNodeE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PathNode::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8PathNodeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8PathNodeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8PathNodeE_t>.metaTypes,
    nullptr
} };

void PathNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<PathNode *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QVariant*>(_v) = _t->getTree(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->getDisplay(); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN17NetworkMediaModelE_t {};
} // unnamed namespace

template <> constexpr inline auto NetworkMediaModel::qt_create_metaobjectdata<qt_meta_tag_ZN17NetworkMediaModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NetworkMediaModel",
        "nameChanged",
        "",
        "urlChanged",
        "typeChanged",
        "isIndexedChanged",
        "canBeIndexedChanged",
        "ctxChanged",
        "treeChanged",
        "isOnProviderListChanged",
        "sdSourceChanged",
        "pathChanged",
        "insertIntoPlaylist",
        "QModelIndexList",
        "itemIdList",
        "ssize_t",
        "playlistIndex",
        "addToPlaylist",
        "index",
        "QVariantList",
        "addAndPlay",
        "getItemsForIndexes",
        "indexes",
        "QJSValue",
        "callback",
        "ctx",
        "MainCtx*",
        "tree",
        "QVariant",
        "path",
        "name",
        "url",
        "QUrl",
        "type",
        "ItemType",
        "indexed",
        "canBeIndexed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'nameChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'urlChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'typeChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isIndexedChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'canBeIndexedChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ctxChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'treeChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isOnProviderListChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sdSourceChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pathChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'insertIntoPlaylist'
        QtMocHelpers::MethodData<bool(const QModelIndexList &, ssize_t)>(12, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 15, 16 },
        }}),
        // Method 'addToPlaylist'
        QtMocHelpers::MethodData<bool(int)>(17, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 18 },
        }}),
        // Method 'addToPlaylist'
        QtMocHelpers::MethodData<bool(const QVariantList &)>(17, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 19, 14 },
        }}),
        // Method 'addToPlaylist'
        QtMocHelpers::MethodData<bool(const QModelIndexList &)>(17, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Method 'addAndPlay'
        QtMocHelpers::MethodData<bool(int)>(20, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 18 },
        }}),
        // Method 'addAndPlay'
        QtMocHelpers::MethodData<bool(const QVariantList &)>(20, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 19, 14 },
        }}),
        // Method 'addAndPlay'
        QtMocHelpers::MethodData<bool(const QModelIndexList &)>(20, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Method 'getItemsForIndexes'
        QtMocHelpers::MethodData<void(const QModelIndexList &, QJSValue)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 22 }, { 0x80000000 | 23, 24 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'ctx'
        QtMocHelpers::PropertyData<MainCtx*>(25, 0x80000000 | 26, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 5),
        // property 'tree'
        QtMocHelpers::PropertyData<QVariant>(27, 0x80000000 | 28, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 6),
        // property 'path'
        QtMocHelpers::PropertyData<QVariantList>(29, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 9),
        // property 'name'
        QtMocHelpers::PropertyData<QString>(30, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'url'
        QtMocHelpers::PropertyData<QUrl>(31, 0x80000000 | 32, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
        // property 'type'
        QtMocHelpers::PropertyData<ItemType>(33, 0x80000000 | 34, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 2),
        // property 'indexed'
        QtMocHelpers::PropertyData<bool>(35, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'canBeIndexed'
        QtMocHelpers::PropertyData<bool>(36, QMetaType::Bool, QMC::DefaultPropertyFlags, 4),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NetworkMediaModel, qt_meta_tag_ZN17NetworkMediaModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NetworkMediaModel::staticMetaObject = { {
    QMetaObject::SuperData::link<NetworkBaseModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17NetworkMediaModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17NetworkMediaModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17NetworkMediaModelE_t>.metaTypes,
    nullptr
} };

void NetworkMediaModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NetworkMediaModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->urlChanged(); break;
        case 2: _t->typeChanged(); break;
        case 3: _t->isIndexedChanged(); break;
        case 4: _t->canBeIndexedChanged(); break;
        case 5: _t->ctxChanged(); break;
        case 6: _t->treeChanged(); break;
        case 7: _t->isOnProviderListChanged(); break;
        case 8: _t->sdSourceChanged(); break;
        case 9: _t->pathChanged(); break;
        case 10: { bool _r = _t->insertIntoPlaylist((*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<ssize_t>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->addToPlaylist((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->addToPlaylist((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->addToPlaylist((*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->addAndPlay((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->addAndPlay((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->addAndPlay((*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->getItemsForIndexes((*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (NetworkMediaModel::*)()>(_a, &NetworkMediaModel::nameChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkMediaModel::*)()>(_a, &NetworkMediaModel::urlChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkMediaModel::*)()>(_a, &NetworkMediaModel::typeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkMediaModel::*)()>(_a, &NetworkMediaModel::isIndexedChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkMediaModel::*)()>(_a, &NetworkMediaModel::canBeIndexedChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkMediaModel::*)()>(_a, &NetworkMediaModel::ctxChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkMediaModel::*)()>(_a, &NetworkMediaModel::treeChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkMediaModel::*)()>(_a, &NetworkMediaModel::isOnProviderListChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkMediaModel::*)()>(_a, &NetworkMediaModel::sdSourceChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkMediaModel::*)()>(_a, &NetworkMediaModel::pathChanged, 9))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<MainCtx**>(_v) = _t->getCtx(); break;
        case 1: *reinterpret_cast<QVariant*>(_v) = _t->getTree(); break;
        case 2: *reinterpret_cast<QVariantList*>(_v) = _t->getPath(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->getName(); break;
        case 4: *reinterpret_cast<QUrl*>(_v) = _t->getUrl(); break;
        case 5: *reinterpret_cast<ItemType*>(_v) = _t->getType(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->isIndexed(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->canBeIndexed(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCtx(*reinterpret_cast<MainCtx**>(_v)); break;
        case 1: _t->setTree(*reinterpret_cast<QVariant*>(_v)); break;
        case 6: _t->setIndexed(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *NetworkMediaModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkMediaModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17NetworkMediaModelE_t>.strings))
        return static_cast<void*>(this);
    return NetworkBaseModel::qt_metacast(_clname);
}

int NetworkMediaModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NetworkBaseModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void NetworkMediaModel::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NetworkMediaModel::urlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NetworkMediaModel::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void NetworkMediaModel::isIndexedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void NetworkMediaModel::canBeIndexedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void NetworkMediaModel::ctxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void NetworkMediaModel::treeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void NetworkMediaModel::isOnProviderListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void NetworkMediaModel::sdSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void NetworkMediaModel::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP

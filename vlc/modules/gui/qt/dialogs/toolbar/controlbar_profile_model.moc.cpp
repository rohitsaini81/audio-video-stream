/****************************************************************************
** Meta object code from reading C++ file 'controlbar_profile_model.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "controlbar_profile_model.hpp"
#include "player/player_controlbar_model.hpp"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controlbar_profile_model.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22ControlbarProfileModelE_t {};
} // unnamed namespace

template <> constexpr inline auto ControlbarProfileModel::qt_create_metaobjectdata<qt_meta_tag_ZN22ControlbarProfileModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ControlbarProfileModel",
        "countChanged",
        "",
        "selectedProfileChanged",
        "selectedProfileControlListChanged",
        "QList<int>",
        "linearControlList",
        "save",
        "clearDirty",
        "reload",
        "setSelectedProfile",
        "selectedProfile",
        "findModel",
        "std::optional<int>",
        "const ControlbarProfile*",
        "profile",
        "setData",
        "QModelIndex",
        "index",
        "QVariant",
        "value",
        "role",
        "insertRows",
        "row",
        "count",
        "parent",
        "cloneSelectedProfile",
        "newProfileName",
        "getProfile",
        "ControlbarProfile*",
        "newProfile",
        "name",
        "deleteSelectedProfile",
        "currentModel"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'countChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'selectedProfileChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'selectedProfileControlListChanged'
        QtMocHelpers::SignalData<void(const QVector<int> &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'save'
        QtMocHelpers::SlotData<void(bool) const>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Slot 'save'
        QtMocHelpers::SlotData<void() const>(7, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'reload'
        QtMocHelpers::SlotData<bool()>(9, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'setSelectedProfile'
        QtMocHelpers::SlotData<bool(int)>(10, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 11 },
        }}),
        // Slot 'findModel'
        QtMocHelpers::SlotData<std::optional<int>(const ControlbarProfile *) const>(12, 2, QMC::AccessPublic, 0x80000000 | 13, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Method 'setData'
        QtMocHelpers::MethodData<bool(const QModelIndex &, const QVariant &, int)>(16, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 17, 18 }, { 0x80000000 | 19, 20 }, { QMetaType::Int, 21 },
        }}),
        // Method 'setData'
        QtMocHelpers::MethodData<bool(const QModelIndex &, const QVariant &)>(16, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { 0x80000000 | 17, 18 }, { 0x80000000 | 19, 20 },
        }}),
        // Method 'insertRows'
        QtMocHelpers::MethodData<bool(int, int, const QModelIndex &)>(22, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 23 }, { QMetaType::Int, 24 }, { 0x80000000 | 17, 25 },
        }}),
        // Method 'insertRows'
        QtMocHelpers::MethodData<bool(int, int)>(22, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::Int, 23 }, { QMetaType::Int, 24 },
        }}),
        // Method 'cloneSelectedProfile'
        QtMocHelpers::MethodData<void(const QString &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 27 },
        }}),
        // Method 'getProfile'
        QtMocHelpers::MethodData<ControlbarProfile *(int) const>(28, 2, QMC::AccessPublic, 0x80000000 | 29, {{
            { QMetaType::Int, 18 },
        }}),
        // Method 'newProfile'
        QtMocHelpers::MethodData<ControlbarProfile *(const QString &)>(30, 2, QMC::AccessPublic, 0x80000000 | 29, {{
            { QMetaType::QString, 31 },
        }}),
        // Method 'deleteSelectedProfile'
        QtMocHelpers::MethodData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'selectedProfile'
        QtMocHelpers::PropertyData<int>(11, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 1),
        // property 'currentModel'
        QtMocHelpers::PropertyData<ControlbarProfile*>(33, 0x80000000 | 29, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'count'
        QtMocHelpers::PropertyData<int>(24, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Final, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ControlbarProfileModel, qt_meta_tag_ZN22ControlbarProfileModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ControlbarProfileModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ControlbarProfileModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ControlbarProfileModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22ControlbarProfileModelE_t>.metaTypes,
    nullptr
} };

void ControlbarProfileModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ControlbarProfileModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->selectedProfileChanged(); break;
        case 2: _t->selectedProfileControlListChanged((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 3: _t->save((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->save(); break;
        case 5: { bool _r = _t->reload();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->setSelectedProfile((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { std::optional<int> _r = _t->findModel((*reinterpret_cast<std::add_pointer_t<const ControlbarProfile*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<std::optional<int>*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->setData((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->setData((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->insertRows((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->insertRows((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->cloneSelectedProfile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: { ControlbarProfile* _r = _t->getProfile((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<ControlbarProfile**>(_a[0]) = std::move(_r); }  break;
        case 14: { ControlbarProfile* _r = _t->newProfile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<ControlbarProfile**>(_a[0]) = std::move(_r); }  break;
        case 15: _t->deleteSelectedProfile(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ControlbarProfileModel::*)()>(_a, &ControlbarProfileModel::countChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ControlbarProfileModel::*)()>(_a, &ControlbarProfileModel::selectedProfileChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ControlbarProfileModel::*)(const QVector<int> & )>(_a, &ControlbarProfileModel::selectedProfileControlListChanged, 2))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ControlbarProfile* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->selectedProfile(); break;
        case 1: *reinterpret_cast<ControlbarProfile**>(_v) = _t->currentModel(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->rowCount(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectedProfile(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *ControlbarProfileModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControlbarProfileModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ControlbarProfileModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int ControlbarProfileModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
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
void ControlbarProfileModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ControlbarProfileModel::selectedProfileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ControlbarProfileModel::selectedProfileControlListChanged(const QVector<int> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP

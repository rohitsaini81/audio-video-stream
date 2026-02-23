/****************************************************************************
** Meta object code from reading C++ file 'varchoicemodel.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "varchoicemodel.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'varchoicemodel.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17VLCVarChoiceModelE_t {};
} // unnamed namespace

template <> constexpr inline auto VLCVarChoiceModel::qt_create_metaobjectdata<qt_meta_tag_ZN17VLCVarChoiceModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VLCVarChoiceModel",
        "dataUpdated",
        "",
        "const vlc_object_t*",
        "object",
        "QVariant",
        "oldvalue",
        "newvalue",
        "listUpdated",
        "action",
        "hasCurrentChanged",
        "toggleIndex",
        "index",
        "onDataUpdated",
        "onListUpdated",
        "hasCurrent"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'dataUpdated'
        QtMocHelpers::SignalData<void(const vlc_object_t *, QVariant, QVariant)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 5, 7 },
        }}),
        // Signal 'listUpdated'
        QtMocHelpers::SignalData<void(const vlc_object_t *, int, QVariant)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 9 }, { 0x80000000 | 5, 7 },
        }}),
        // Signal 'hasCurrentChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'toggleIndex'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'onDataUpdated'
        QtMocHelpers::SlotData<void(const vlc_object_t *, QVariant, QVariant)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 5, 7 },
        }}),
        // Slot 'onListUpdated'
        QtMocHelpers::SlotData<void(const vlc_object_t *, int, QVariant)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 9 }, { 0x80000000 | 5, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'hasCurrent'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VLCVarChoiceModel, qt_meta_tag_ZN17VLCVarChoiceModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VLCVarChoiceModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17VLCVarChoiceModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17VLCVarChoiceModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17VLCVarChoiceModelE_t>.metaTypes,
    nullptr
} };

void VLCVarChoiceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VLCVarChoiceModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->dataUpdated((*reinterpret_cast<std::add_pointer_t<const vlc_object_t*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[3])), QPrivateSignal()); break;
        case 1: _t->listUpdated((*reinterpret_cast<std::add_pointer_t<const vlc_object_t*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[3])), QPrivateSignal()); break;
        case 2: _t->hasCurrentChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->toggleIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->onDataUpdated((*reinterpret_cast<std::add_pointer_t<const vlc_object_t*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[3]))); break;
        case 5: _t->onListUpdated((*reinterpret_cast<std::add_pointer_t<const vlc_object_t*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[3]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VLCVarChoiceModel::*)(const vlc_object_t * , QVariant , QVariant , QPrivateSignal)>(_a, &VLCVarChoiceModel::dataUpdated, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (VLCVarChoiceModel::*)(const vlc_object_t * , int , QVariant , QPrivateSignal)>(_a, &VLCVarChoiceModel::listUpdated, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (VLCVarChoiceModel::*)(bool )>(_a, &VLCVarChoiceModel::hasCurrentChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->hasCurrent(); break;
        default: break;
        }
    }
}

const QMetaObject *VLCVarChoiceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VLCVarChoiceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17VLCVarChoiceModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int VLCVarChoiceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
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
void VLCVarChoiceModel::dataUpdated(const vlc_object_t * _t1, QVariant _t2, QVariant _t3, QPrivateSignal _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 1
void VLCVarChoiceModel::listUpdated(const vlc_object_t * _t1, int _t2, QVariant _t3, QPrivateSignal _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 2
void VLCVarChoiceModel::hasCurrentChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP

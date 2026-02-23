/****************************************************************************
** Meta object code from reading C++ file 'networkbasemodel.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "networkbasemodel.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkbasemodel.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16NetworkBaseModelE_t {};
} // unnamed namespace

template <> constexpr inline auto NetworkBaseModel::qt_create_metaobjectdata<qt_meta_tag_ZN16NetworkBaseModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NetworkBaseModel",
        "artworkFallbackForType",
        "",
        "ItemType",
        "type",
        "TYPE_UNKNOWN",
        "TYPE_FILE",
        "TYPE_DIRECTORY",
        "TYPE_DISC",
        "TYPE_CARD",
        "TYPE_STREAM",
        "TYPE_PLAYLIST",
        "TYPE_NODE"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'artworkFallbackForType'
        QtMocHelpers::MethodData<QString(const ItemType) const>(1, 2, QMC::AccessPublic, QMetaType::QString, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ItemType'
        QtMocHelpers::EnumData<enum ItemType>(3, 3, QMC::EnumFlags{}).add({
            {    5, ItemType::TYPE_UNKNOWN },
            {    6, ItemType::TYPE_FILE },
            {    7, ItemType::TYPE_DIRECTORY },
            {    8, ItemType::TYPE_DISC },
            {    9, ItemType::TYPE_CARD },
            {   10, ItemType::TYPE_STREAM },
            {   11, ItemType::TYPE_PLAYLIST },
            {   12, ItemType::TYPE_NODE },
        }),
    };
    return QtMocHelpers::metaObjectData<NetworkBaseModel, qt_meta_tag_ZN16NetworkBaseModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NetworkBaseModel::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16NetworkBaseModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16NetworkBaseModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16NetworkBaseModelE_t>.metaTypes,
    nullptr
} };

void NetworkBaseModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NetworkBaseModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QString _r = _t->artworkFallbackForType((*reinterpret_cast<std::add_pointer_t<enum ItemType>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *NetworkBaseModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkBaseModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16NetworkBaseModelE_t>.strings))
        return static_cast<void*>(this);
    return BaseModel::qt_metacast(_clname);
}

int NetworkBaseModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'mlmediamodel.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mlmediamodel.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mlmediamodel.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12MLMediaModelE_t {};
} // unnamed namespace

template <> constexpr inline auto MLMediaModel::qt_create_metaobjectdata<qt_meta_tag_ZN12MLMediaModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MLMediaModel",
        "setMediaIsFavorite",
        "",
        "QModelIndex",
        "index",
        "isFavorite",
        "getParentURL",
        "QUrl",
        "const MLMedia*",
        "media",
        "getPermissions",
        "deleteFileFromSource"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'setMediaIsFavorite'
        QtMocHelpers::MethodData<void(const QModelIndex &, bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 5 },
        }}),
        // Method 'getParentURL'
        QtMocHelpers::MethodData<QUrl(const QModelIndex &)>(6, 2, QMC::AccessPublic, 0x80000000 | 7, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Method 'getParentURL'
        QtMocHelpers::MethodData<QUrl(const MLMedia *) const>(6, 2, QMC::AccessPublic, 0x80000000 | 7, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Method 'getPermissions'
        QtMocHelpers::MethodData<bool(const MLMedia *) const>(10, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Method 'deleteFileFromSource'
        QtMocHelpers::MethodData<void(const QModelIndex &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MLMediaModel, qt_meta_tag_ZN12MLMediaModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MLMediaModel::staticMetaObject = { {
    QMetaObject::SuperData::link<MLBaseModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12MLMediaModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12MLMediaModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12MLMediaModelE_t>.metaTypes,
    nullptr
} };

void MLMediaModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MLMediaModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setMediaIsFavorite((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: { QUrl _r = _t->getParentURL((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QUrl*>(_a[0]) = std::move(_r); }  break;
        case 2: { QUrl _r = _t->getParentURL((*reinterpret_cast<std::add_pointer_t<const MLMedia*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QUrl*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->getPermissions((*reinterpret_cast<std::add_pointer_t<const MLMedia*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->deleteFileFromSource((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MLMediaModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MLMediaModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12MLMediaModelE_t>.strings))
        return static_cast<void*>(this);
    return MLBaseModel::qt_metacast(_clname);
}

int MLMediaModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MLBaseModel::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP

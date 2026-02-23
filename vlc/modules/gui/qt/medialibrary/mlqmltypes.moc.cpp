/****************************************************************************
** Meta object code from reading C++ file 'mlqmltypes.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mlqmltypes.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mlqmltypes.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8MLItemIdE_t {};
} // unnamed namespace

template <> constexpr inline auto MLItemId::qt_create_metaobjectdata<qt_meta_tag_ZN8MLItemIdE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MLItemId",
        "isValid",
        "",
        "hasParent",
        "toString",
        "fromString",
        "QStringView",
        "serialized_id"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'isValid'
        QtMocHelpers::MethodData<bool() const>(1, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'hasParent'
        QtMocHelpers::MethodData<bool() const>(3, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'toString'
        QtMocHelpers::MethodData<QString() const>(4, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'fromString'
        QtMocHelpers::MethodData<MLItemId(const QStringView &)>(5, 2, QMC::AccessPublic, 0x80000000 | 0, {{
            { 0x80000000 | 6, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MLItemId, qt_meta_tag_ZN8MLItemIdE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MLItemId::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8MLItemIdE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8MLItemIdE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8MLItemIdE_t>.metaTypes,
    nullptr
} };

void MLItemId::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<MLItemId *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = _t->isValid();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->hasParent();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { MLItemId _r = _t->fromString((*reinterpret_cast<std::add_pointer_t<QStringView>>(_a[1])));
            if (_a[0]) *reinterpret_cast<MLItemId*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}
QT_WARNING_POP

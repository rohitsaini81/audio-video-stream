/****************************************************************************
** Meta object code from reading C++ file 'effects_image_provider.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "effects_image_provider.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'effects_image_provider.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20EffectsImageProviderE_t {};
} // unnamed namespace

template <> constexpr inline auto EffectsImageProvider::qt_create_metaobjectdata<qt_meta_tag_ZN20EffectsImageProviderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EffectsImageProvider",
        "url",
        "QUrl",
        "",
        "Effect",
        "effect",
        "QVariantMap",
        "properties",
        "RectDropShadow",
        "RoundedRectDropShadow",
        "DoubleRoundedRectDropShadow"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'url'
        QtMocHelpers::MethodData<QUrl(enum Effect, const QVariantMap &)>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Effect'
        QtMocHelpers::EnumData<enum Effect>(4, 4, QMC::EnumFlags{}).add({
            {    8, Effect::RectDropShadow },
            {    9, Effect::RoundedRectDropShadow },
            {   10, Effect::DoubleRoundedRectDropShadow },
        }),
    };
    return QtMocHelpers::metaObjectData<EffectsImageProvider, qt_meta_tag_ZN20EffectsImageProviderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EffectsImageProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickImageProvider::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20EffectsImageProviderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20EffectsImageProviderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20EffectsImageProviderE_t>.metaTypes,
    nullptr
} };

void EffectsImageProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EffectsImageProvider *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QUrl _r = _t->url((*reinterpret_cast<std::add_pointer_t<enum Effect>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QUrl*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *EffectsImageProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EffectsImageProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20EffectsImageProviderE_t>.strings))
        return static_cast<void*>(this);
    return QQuickImageProvider::qt_metacast(_clname);
}

int EffectsImageProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickImageProvider::qt_metacall(_c, _id, _a);
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

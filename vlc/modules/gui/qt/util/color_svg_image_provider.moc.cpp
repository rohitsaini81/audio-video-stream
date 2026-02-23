/****************************************************************************
** Meta object code from reading C++ file 'color_svg_image_provider.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "color_svg_image_provider.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'color_svg_image_provider.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20SVGColorImageBuilderE_t {};
} // unnamed namespace

template <> constexpr inline auto SVGColorImageBuilder::qt_create_metaobjectdata<qt_meta_tag_ZN20SVGColorImageBuilderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SVGColorImageBuilder",
        "uri",
        "",
        "color1",
        "SVGColorImageBuilder*",
        "QColor",
        "c1",
        "color2",
        "c2",
        "accent",
        "background",
        "bg",
        "any",
        "QVariantMap",
        "map"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'uri'
        QtMocHelpers::MethodData<QString() const>(1, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'color1'
        QtMocHelpers::MethodData<SVGColorImageBuilder *(QColor)>(3, 2, QMC::AccessPublic, 0x80000000 | 4, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Method 'color2'
        QtMocHelpers::MethodData<SVGColorImageBuilder *(QColor)>(7, 2, QMC::AccessPublic, 0x80000000 | 4, {{
            { 0x80000000 | 5, 8 },
        }}),
        // Method 'accent'
        QtMocHelpers::MethodData<SVGColorImageBuilder *(QColor)>(9, 2, QMC::AccessPublic, 0x80000000 | 4, {{
            { 0x80000000 | 5, 8 },
        }}),
        // Method 'background'
        QtMocHelpers::MethodData<SVGColorImageBuilder *(QColor)>(10, 2, QMC::AccessPublic, 0x80000000 | 4, {{
            { 0x80000000 | 5, 11 },
        }}),
        // Method 'any'
        QtMocHelpers::MethodData<SVGColorImageBuilder *(QVariantMap)>(12, 2, QMC::AccessPublic, 0x80000000 | 4, {{
            { 0x80000000 | 13, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SVGColorImageBuilder, qt_meta_tag_ZN20SVGColorImageBuilderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SVGColorImageBuilder::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20SVGColorImageBuilderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20SVGColorImageBuilderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20SVGColorImageBuilderE_t>.metaTypes,
    nullptr
} };

void SVGColorImageBuilder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SVGColorImageBuilder *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QString _r = _t->uri();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { SVGColorImageBuilder* _r = _t->color1((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1])));
            if (_a[0]) *reinterpret_cast<SVGColorImageBuilder**>(_a[0]) = std::move(_r); }  break;
        case 2: { SVGColorImageBuilder* _r = _t->color2((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1])));
            if (_a[0]) *reinterpret_cast<SVGColorImageBuilder**>(_a[0]) = std::move(_r); }  break;
        case 3: { SVGColorImageBuilder* _r = _t->accent((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1])));
            if (_a[0]) *reinterpret_cast<SVGColorImageBuilder**>(_a[0]) = std::move(_r); }  break;
        case 4: { SVGColorImageBuilder* _r = _t->background((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1])));
            if (_a[0]) *reinterpret_cast<SVGColorImageBuilder**>(_a[0]) = std::move(_r); }  break;
        case 5: { SVGColorImageBuilder* _r = _t->any((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1])));
            if (_a[0]) *reinterpret_cast<SVGColorImageBuilder**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *SVGColorImageBuilder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SVGColorImageBuilder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20SVGColorImageBuilderE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SVGColorImageBuilder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}
namespace {
struct qt_meta_tag_ZN13SVGColorImageE_t {};
} // unnamed namespace

template <> constexpr inline auto SVGColorImage::qt_create_metaobjectdata<qt_meta_tag_ZN13SVGColorImageE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SVGColorImage",
        "colorize",
        "SVGColorImageBuilder*",
        "",
        "path"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'colorize'
        QtMocHelpers::MethodData<SVGColorImageBuilder *(const QString &)>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SVGColorImage, qt_meta_tag_ZN13SVGColorImageE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SVGColorImage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SVGColorImageE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SVGColorImageE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13SVGColorImageE_t>.metaTypes,
    nullptr
} };

void SVGColorImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SVGColorImage *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { SVGColorImageBuilder* _r = _t->colorize((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<SVGColorImageBuilder**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *SVGColorImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SVGColorImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SVGColorImageE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SVGColorImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

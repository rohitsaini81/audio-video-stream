/****************************************************************************
** Meta object code from reading C++ file 'compositor.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "compositor.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'compositor.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3vlc15CompositorVideoE_t {};
} // unnamed namespace

template <> constexpr inline auto vlc::CompositorVideo::qt_create_metaobjectdata<qt_meta_tag_ZN3vlc15CompositorVideoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "vlc::CompositorVideo",
        "adjustBlurBehind",
        "",
        "onSurfacePositionChanged",
        "QPointF",
        "onSurfaceSizeChanged",
        "QSizeF",
        "onSurfaceScaleChanged",
        "onSurfacePropertiesChanged",
        "std::optional<QSizeF>",
        "size",
        "std::optional<QPointF>",
        "position",
        "std::optional<qreal>",
        "scale"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'adjustBlurBehind'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSurfacePositionChanged'
        QtMocHelpers::SlotData<void(const QPointF &)>(3, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
        // Slot 'onSurfaceSizeChanged'
        QtMocHelpers::SlotData<void(const QSizeF &)>(5, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Slot 'onSurfaceScaleChanged'
        QtMocHelpers::SlotData<void(qreal)>(7, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QReal, 2 },
        }}),
        // Slot 'onSurfacePropertiesChanged'
        QtMocHelpers::SlotData<void(const std::optional<QSizeF> &, const std::optional<QPointF> &, const std::optional<qreal> &)>(8, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 9, 10 }, { 0x80000000 | 11, 12 }, { 0x80000000 | 13, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CompositorVideo, qt_meta_tag_ZN3vlc15CompositorVideoE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject vlc::CompositorVideo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc15CompositorVideoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc15CompositorVideoE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3vlc15CompositorVideoE_t>.metaTypes,
    nullptr
} };

void vlc::CompositorVideo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CompositorVideo *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->adjustBlurBehind(); break;
        case 1: _t->onSurfacePositionChanged((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 2: _t->onSurfaceSizeChanged((*reinterpret_cast<std::add_pointer_t<QSizeF>>(_a[1]))); break;
        case 3: _t->onSurfaceScaleChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 4: _t->onSurfacePropertiesChanged((*reinterpret_cast<std::add_pointer_t<std::optional<QSizeF>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<std::optional<QPointF>>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<std::optional<qreal>>>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject *vlc::CompositorVideo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vlc::CompositorVideo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc15CompositorVideoE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Compositor"))
        return static_cast< Compositor*>(this);
    return QObject::qt_metacast(_clname);
}

int vlc::CompositorVideo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

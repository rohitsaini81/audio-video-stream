/****************************************************************************
** Meta object code from reading C++ file 'compositor_x11_uisurface.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "compositor_x11_uisurface.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'compositor_x11_uisurface.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3vlc26CompositorX11RenderControlE_t {};
} // unnamed namespace

template <> constexpr inline auto vlc::CompositorX11RenderControl::qt_create_metaobjectdata<qt_meta_tag_ZN3vlc26CompositorX11RenderControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "vlc::CompositorX11RenderControl"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CompositorX11RenderControl, qt_meta_tag_ZN3vlc26CompositorX11RenderControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject vlc::CompositorX11RenderControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickRenderControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc26CompositorX11RenderControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc26CompositorX11RenderControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3vlc26CompositorX11RenderControlE_t>.metaTypes,
    nullptr
} };

void vlc::CompositorX11RenderControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CompositorX11RenderControl *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *vlc::CompositorX11RenderControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vlc::CompositorX11RenderControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc26CompositorX11RenderControlE_t>.strings))
        return static_cast<void*>(this);
    return QQuickRenderControl::qt_metacast(_clname);
}

int vlc::CompositorX11RenderControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickRenderControl::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN3vlc22CompositorX11UISurfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto vlc::CompositorX11UISurface::qt_create_metaobjectdata<qt_meta_tag_ZN3vlc22CompositorX11UISurfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "vlc::CompositorX11UISurface",
        "beforeRendering",
        "",
        "afterRendering",
        "sizeChanged",
        "QSize",
        "size",
        "updated",
        "requestPixmapReset"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'beforeRendering'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'afterRendering'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sizeChanged'
        QtMocHelpers::SignalData<void(const QSize &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'updated'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestPixmapReset'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CompositorX11UISurface, qt_meta_tag_ZN3vlc22CompositorX11UISurfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject vlc::CompositorX11UISurface::staticMetaObject = { {
    QMetaObject::SuperData::link<QWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc22CompositorX11UISurfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc22CompositorX11UISurfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3vlc22CompositorX11UISurfaceE_t>.metaTypes,
    nullptr
} };

void vlc::CompositorX11UISurface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CompositorX11UISurface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->beforeRendering(); break;
        case 1: _t->afterRendering(); break;
        case 2: _t->sizeChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 3: _t->updated(); break;
        case 4: _t->requestPixmapReset(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CompositorX11UISurface::*)()>(_a, &CompositorX11UISurface::beforeRendering, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CompositorX11UISurface::*)()>(_a, &CompositorX11UISurface::afterRendering, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CompositorX11UISurface::*)(const QSize & )>(_a, &CompositorX11UISurface::sizeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CompositorX11UISurface::*)()>(_a, &CompositorX11UISurface::updated, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (CompositorX11UISurface::*)()>(_a, &CompositorX11UISurface::requestPixmapReset, 4))
            return;
    }
}

const QMetaObject *vlc::CompositorX11UISurface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vlc::CompositorX11UISurface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc22CompositorX11UISurfaceE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CompositorVideo::QmlUISurface"))
        return static_cast< CompositorVideo::QmlUISurface*>(this);
    return QWindow::qt_metacast(_clname);
}

int vlc::CompositorX11UISurface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWindow::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void vlc::CompositorX11UISurface::beforeRendering()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void vlc::CompositorX11UISurface::afterRendering()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void vlc::CompositorX11UISurface::sizeChanged(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void vlc::CompositorX11UISurface::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void vlc::CompositorX11UISurface::requestPixmapReset()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP

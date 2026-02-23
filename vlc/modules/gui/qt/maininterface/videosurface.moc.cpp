/****************************************************************************
** Meta object code from reading C++ file 'videosurface.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "videosurface.hpp"
#include "QKeyEvent"
#include "QWheelEvent"
#include "maininterface/mainctx.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videosurface.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20VideoSurfaceProviderE_t {};
} // unnamed namespace

template <> constexpr inline auto VideoSurfaceProvider::qt_create_metaobjectdata<qt_meta_tag_ZN20VideoSurfaceProviderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VideoSurfaceProvider",
        "ctxChanged",
        "",
        "MainCtx*",
        "videoEnabledChanged",
        "hasVideoEmbedChanged",
        "surfacePropertiesChanged",
        "std::optional<QSizeF>",
        "size",
        "std::optional<QPointF>",
        "position",
        "std::optional<qreal>",
        "scale",
        "onWindowClosed",
        "onMousePressed",
        "vlcButton",
        "onMouseReleased",
        "onMouseDoubleClick",
        "onMouseMoved",
        "x",
        "y",
        "onMouseWheeled",
        "onKeyPressed",
        "key",
        "Qt::KeyboardModifiers",
        "modifiers",
        "onSurfacePropertiesChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'ctxChanged'
        QtMocHelpers::SignalData<void(MainCtx *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'videoEnabledChanged'
        QtMocHelpers::SignalData<bool(bool)>(4, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'hasVideoEmbedChanged'
        QtMocHelpers::SignalData<bool(bool)>(5, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'surfacePropertiesChanged'
        QtMocHelpers::SignalData<void(const std::optional<QSizeF> &, const std::optional<QPointF> &, const std::optional<qreal> &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 }, { 0x80000000 | 11, 12 },
        }}),
        // Slot 'onWindowClosed'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onMousePressed'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'onMouseReleased'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'onMouseDoubleClick'
        QtMocHelpers::SlotData<void(int)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'onMouseMoved'
        QtMocHelpers::SlotData<void(float, float)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 19 }, { QMetaType::Float, 20 },
        }}),
        // Slot 'onMouseWheeled'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'onKeyPressed'
        QtMocHelpers::SlotData<void(int, Qt::KeyboardModifiers)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 23 }, { 0x80000000 | 24, 25 },
        }}),
        // Slot 'onSurfacePropertiesChanged'
        QtMocHelpers::SlotData<void(const std::optional<QSizeF> &, const std::optional<QPointF> &, const std::optional<qreal> &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 }, { 0x80000000 | 11, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VideoSurfaceProvider, qt_meta_tag_ZN20VideoSurfaceProviderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VideoSurfaceProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20VideoSurfaceProviderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20VideoSurfaceProviderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20VideoSurfaceProviderE_t>.metaTypes,
    nullptr
} };

void VideoSurfaceProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VideoSurfaceProvider *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ctxChanged((*reinterpret_cast<std::add_pointer_t<MainCtx*>>(_a[1]))); break;
        case 1: { bool _r = _t->videoEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->hasVideoEmbedChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->surfacePropertiesChanged((*reinterpret_cast<std::add_pointer_t<std::optional<QSizeF>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<std::optional<QPointF>>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<std::optional<qreal>>>(_a[3]))); break;
        case 4: _t->onWindowClosed(); break;
        case 5: _t->onMousePressed((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->onMouseReleased((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->onMouseDoubleClick((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->onMouseMoved((*reinterpret_cast<std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[2]))); break;
        case 9: _t->onMouseWheeled((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->onKeyPressed((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::KeyboardModifiers>>(_a[2]))); break;
        case 11: _t->onSurfacePropertiesChanged((*reinterpret_cast<std::add_pointer_t<std::optional<QSizeF>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<std::optional<QPointF>>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<std::optional<qreal>>>(_a[3]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VideoSurfaceProvider::*)(MainCtx * )>(_a, &VideoSurfaceProvider::ctxChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<bool (VideoSurfaceProvider::*)(bool )>(_a, &VideoSurfaceProvider::videoEnabledChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<bool (VideoSurfaceProvider::*)(bool )>(_a, &VideoSurfaceProvider::hasVideoEmbedChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (VideoSurfaceProvider::*)(const std::optional<QSizeF> & , const std::optional<QPointF> & , const std::optional<qreal> & )>(_a, &VideoSurfaceProvider::surfacePropertiesChanged, 3))
            return;
    }
}

const QMetaObject *VideoSurfaceProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoSurfaceProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20VideoSurfaceProviderE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VideoSurfaceProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void VideoSurfaceProvider::ctxChanged(MainCtx * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
bool VideoSurfaceProvider::videoEnabledChanged(bool _t1)
{
    bool _t0{};
    QMetaObject::activate<bool>(this, &staticMetaObject, 1, std::addressof(_t0), _t1);
    return _t0;
}

// SIGNAL 2
bool VideoSurfaceProvider::hasVideoEmbedChanged(bool _t1)
{
    bool _t0{};
    QMetaObject::activate<bool>(this, &staticMetaObject, 2, std::addressof(_t0), _t1);
    return _t0;
}

// SIGNAL 3
void VideoSurfaceProvider::surfacePropertiesChanged(const std::optional<QSizeF> & _t1, const std::optional<QPointF> & _t2, const std::optional<qreal> & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3);
}
namespace {
struct qt_meta_tag_ZN12VideoSurfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto VideoSurface::qt_create_metaobjectdata<qt_meta_tag_ZN12VideoSurfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VideoSurface",
        "surfacePropertiesChanged",
        "",
        "std::optional<QSizeF>",
        "size",
        "std::optional<QPointF>",
        "position",
        "std::optional<qreal>",
        "scale",
        "mousePressed",
        "vlcButton",
        "mouseReleased",
        "mouseDblClicked",
        "mouseMoved",
        "x",
        "y",
        "keyPressed",
        "key",
        "Qt::KeyboardModifiers",
        "modifier",
        "videoSurfaceProviderChanged",
        "synchronize",
        "videoSurfaceProvider",
        "VideoSurfaceProvider*",
        "cursorShape",
        "Qt::CursorShape"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'surfacePropertiesChanged'
        QtMocHelpers::SignalData<void(const std::optional<QSizeF> &, const std::optional<QPointF> &, const std::optional<qreal> &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'mousePressed'
        QtMocHelpers::SignalData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Signal 'mouseReleased'
        QtMocHelpers::SignalData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Signal 'mouseDblClicked'
        QtMocHelpers::SignalData<void(int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Signal 'mouseMoved'
        QtMocHelpers::SignalData<void(float, float)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 14 }, { QMetaType::Float, 15 },
        }}),
        // Signal 'keyPressed'
        QtMocHelpers::SignalData<void(int, Qt::KeyboardModifiers)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 17 }, { 0x80000000 | 18, 19 },
        }}),
        // Signal 'videoSurfaceProviderChanged'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'synchronize'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'videoSurfaceProvider'
        QtMocHelpers::PropertyData<VideoSurfaceProvider*>(22, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 6),
        // property 'cursorShape'
        QtMocHelpers::PropertyData<Qt::CursorShape>(24, 0x80000000 | 25, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VideoSurface, qt_meta_tag_ZN12VideoSurfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VideoSurface::staticMetaObject = { {
    QMetaObject::SuperData::link<ViewBlockingRectangle::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12VideoSurfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12VideoSurfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12VideoSurfaceE_t>.metaTypes,
    nullptr
} };

void VideoSurface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VideoSurface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->surfacePropertiesChanged((*reinterpret_cast<std::add_pointer_t<std::optional<QSizeF>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<std::optional<QPointF>>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<std::optional<qreal>>>(_a[3]))); break;
        case 1: _t->mousePressed((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->mouseReleased((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->mouseDblClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->mouseMoved((*reinterpret_cast<std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[2]))); break;
        case 5: _t->keyPressed((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::KeyboardModifiers>>(_a[2]))); break;
        case 6: _t->videoSurfaceProviderChanged(); break;
        case 7: _t->synchronize(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VideoSurface::*)(const std::optional<QSizeF> & , const std::optional<QPointF> & , const std::optional<qreal> & )>(_a, &VideoSurface::surfacePropertiesChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (VideoSurface::*)(int )>(_a, &VideoSurface::mousePressed, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (VideoSurface::*)(int )>(_a, &VideoSurface::mouseReleased, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (VideoSurface::*)(int )>(_a, &VideoSurface::mouseDblClicked, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (VideoSurface::*)(float , float )>(_a, &VideoSurface::mouseMoved, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (VideoSurface::*)(int , Qt::KeyboardModifiers )>(_a, &VideoSurface::keyPressed, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (VideoSurface::*)()>(_a, &VideoSurface::videoSurfaceProviderChanged, 6))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VideoSurfaceProvider* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<VideoSurfaceProvider**>(_v) = _t->videoSurfaceProvider(); break;
        case 1: *reinterpret_cast<Qt::CursorShape*>(_v) = _t->getCursorShape(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVideoSurfaceProvider(*reinterpret_cast<VideoSurfaceProvider**>(_v)); break;
        case 1: _t->setCursorShape(*reinterpret_cast<Qt::CursorShape*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 1: _t->unsetCursor(); break;
        default: break;
        }
    }
}

const QMetaObject *VideoSurface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoSurface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12VideoSurfaceE_t>.strings))
        return static_cast<void*>(this);
    return ViewBlockingRectangle::qt_metacast(_clname);
}

int VideoSurface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ViewBlockingRectangle::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void VideoSurface::surfacePropertiesChanged(const std::optional<QSizeF> & _t1, const std::optional<QPointF> & _t2, const std::optional<qreal> & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void VideoSurface::mousePressed(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void VideoSurface::mouseReleased(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void VideoSurface::mouseDblClicked(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void VideoSurface::mouseMoved(float _t1, float _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void VideoSurface::keyPressed(int _t1, Qt::KeyboardModifiers _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void VideoSurface::videoSurfaceProviderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP

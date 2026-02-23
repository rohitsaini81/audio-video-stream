/****************************************************************************
** Meta object code from reading C++ file 'compositor_x11_renderwindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "compositor_x11_renderwindow.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'compositor_x11_renderwindow.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3vlc10RenderTaskE_t {};
} // unnamed namespace

template <> constexpr inline auto vlc::RenderTask::qt_create_metaobjectdata<qt_meta_tag_ZN3vlc10RenderTaskE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "vlc::RenderTask",
        "requestRefreshInternal",
        "",
        "requestId",
        "render",
        "onWindowSizeChanged",
        "QSize",
        "newSize",
        "requestRefresh",
        "onInterfaceSurfaceChanged",
        "CompositorX11RenderClient*",
        "onVideoSurfaceChanged",
        "onRegisterVideoWindow",
        "surface",
        "onVideoPositionChanged",
        "QRect",
        "position",
        "onInterfaceSizeChanged",
        "size",
        "onVisibilityChanged",
        "visible",
        "onAcrylicChanged",
        "enabled",
        "onExtendedFrameChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'requestRefreshInternal'
        QtMocHelpers::SignalData<void(unsigned int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 3 },
        }}),
        // Slot 'render'
        QtMocHelpers::SlotData<void(unsigned int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 3 },
        }}),
        // Slot 'onWindowSizeChanged'
        QtMocHelpers::SlotData<void(const QSize &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'requestRefresh'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onInterfaceSurfaceChanged'
        QtMocHelpers::SlotData<void(CompositorX11RenderClient *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 },
        }}),
        // Slot 'onVideoSurfaceChanged'
        QtMocHelpers::SlotData<void(CompositorX11RenderClient *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 },
        }}),
        // Slot 'onRegisterVideoWindow'
        QtMocHelpers::SlotData<void(unsigned int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 13 },
        }}),
        // Slot 'onVideoPositionChanged'
        QtMocHelpers::SlotData<void(const QRect &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Slot 'onInterfaceSizeChanged'
        QtMocHelpers::SlotData<void(const QSize &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 18 },
        }}),
        // Slot 'onVisibilityChanged'
        QtMocHelpers::SlotData<void(bool)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 20 },
        }}),
        // Slot 'onAcrylicChanged'
        QtMocHelpers::SlotData<void(bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'onExtendedFrameChanged'
        QtMocHelpers::SlotData<void(bool)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RenderTask, qt_meta_tag_ZN3vlc10RenderTaskE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject vlc::RenderTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc10RenderTaskE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc10RenderTaskE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3vlc10RenderTaskE_t>.metaTypes,
    nullptr
} };

void vlc::RenderTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RenderTask *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->requestRefreshInternal((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])), QPrivateSignal()); break;
        case 1: _t->render((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 2: _t->onWindowSizeChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 3: _t->requestRefresh(); break;
        case 4: _t->onInterfaceSurfaceChanged((*reinterpret_cast<std::add_pointer_t<CompositorX11RenderClient*>>(_a[1]))); break;
        case 5: _t->onVideoSurfaceChanged((*reinterpret_cast<std::add_pointer_t<CompositorX11RenderClient*>>(_a[1]))); break;
        case 6: _t->onRegisterVideoWindow((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 7: _t->onVideoPositionChanged((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 8: _t->onInterfaceSizeChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 9: _t->onVisibilityChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->onAcrylicChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->onExtendedFrameChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (RenderTask::*)(unsigned int , QPrivateSignal)>(_a, &RenderTask::requestRefreshInternal, 0))
            return;
    }
}

const QMetaObject *vlc::RenderTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vlc::RenderTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc10RenderTaskE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int vlc::RenderTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void vlc::RenderTask::requestRefreshInternal(unsigned int _t1, QPrivateSignal _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN3vlc17X11DamageObserverE_t {};
} // unnamed namespace

template <> constexpr inline auto vlc::X11DamageObserver::qt_create_metaobjectdata<qt_meta_tag_ZN3vlc17X11DamageObserverE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "vlc::X11DamageObserver",
        "needRefresh",
        "",
        "onRegisterSurfaceDamage",
        "surface"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'needRefresh'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onRegisterSurfaceDamage'
        QtMocHelpers::SlotData<bool(unsigned int)>(3, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::UInt, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<X11DamageObserver, qt_meta_tag_ZN3vlc17X11DamageObserverE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject vlc::X11DamageObserver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc17X11DamageObserverE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc17X11DamageObserverE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3vlc17X11DamageObserverE_t>.metaTypes,
    nullptr
} };

void vlc::X11DamageObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<X11DamageObserver *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->needRefresh(); break;
        case 1: { bool _r = _t->onRegisterSurfaceDamage((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (X11DamageObserver::*)()>(_a, &X11DamageObserver::needRefresh, 0))
            return;
    }
}

const QMetaObject *vlc::X11DamageObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vlc::X11DamageObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc17X11DamageObserverE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int vlc::X11DamageObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void vlc::X11DamageObserver::needRefresh()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN3vlc25CompositorX11RenderWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto vlc::CompositorX11RenderWindow::qt_create_metaobjectdata<qt_meta_tag_ZN3vlc25CompositorX11RenderWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "vlc::CompositorX11RenderWindow",
        "windowSizeChanged",
        "",
        "QSize",
        "newSize",
        "requestUIRefresh",
        "videoPositionChanged",
        "QRect",
        "position",
        "videoSurfaceChanged",
        "CompositorX11RenderClient*",
        "visiblityChanged",
        "visible",
        "registerVideoWindow",
        "xid",
        "hasExtendedFrameChanged",
        "hasExtendedFrame",
        "acrylicChanged",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'windowSizeChanged'
        QtMocHelpers::SignalData<void(const QSize &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'requestUIRefresh'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'videoPositionChanged'
        QtMocHelpers::SignalData<void(const QRect &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'videoSurfaceChanged'
        QtMocHelpers::SignalData<void(CompositorX11RenderClient *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 },
        }}),
        // Signal 'visiblityChanged'
        QtMocHelpers::SignalData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Signal 'registerVideoWindow'
        QtMocHelpers::SignalData<void(unsigned int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 14 },
        }}),
        // Signal 'hasExtendedFrameChanged'
        QtMocHelpers::SignalData<bool(bool)>(15, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Bool, 16 },
        }}),
        // Signal 'acrylicChanged'
        QtMocHelpers::SignalData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CompositorX11RenderWindow, qt_meta_tag_ZN3vlc25CompositorX11RenderWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject vlc::CompositorX11RenderWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<DummyRenderWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc25CompositorX11RenderWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc25CompositorX11RenderWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3vlc25CompositorX11RenderWindowE_t>.metaTypes,
    nullptr
} };

void vlc::CompositorX11RenderWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CompositorX11RenderWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->windowSizeChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 1: _t->requestUIRefresh(); break;
        case 2: _t->videoPositionChanged((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 3: _t->videoSurfaceChanged((*reinterpret_cast<std::add_pointer_t<CompositorX11RenderClient*>>(_a[1]))); break;
        case 4: _t->visiblityChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->registerVideoWindow((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 6: { bool _r = _t->hasExtendedFrameChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->acrylicChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CompositorX11RenderWindow::*)(const QSize & )>(_a, &CompositorX11RenderWindow::windowSizeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CompositorX11RenderWindow::*)()>(_a, &CompositorX11RenderWindow::requestUIRefresh, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CompositorX11RenderWindow::*)(const QRect & )>(_a, &CompositorX11RenderWindow::videoPositionChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CompositorX11RenderWindow::*)(CompositorX11RenderClient * )>(_a, &CompositorX11RenderWindow::videoSurfaceChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (CompositorX11RenderWindow::*)(bool )>(_a, &CompositorX11RenderWindow::visiblityChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (CompositorX11RenderWindow::*)(unsigned int )>(_a, &CompositorX11RenderWindow::registerVideoWindow, 5))
            return;
        if (QtMocHelpers::indexOfMethod<bool (CompositorX11RenderWindow::*)(bool )>(_a, &CompositorX11RenderWindow::hasExtendedFrameChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (CompositorX11RenderWindow::*)(bool )>(_a, &CompositorX11RenderWindow::acrylicChanged, 7))
            return;
    }
}

const QMetaObject *vlc::CompositorX11RenderWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vlc::CompositorX11RenderWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc25CompositorX11RenderWindowE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AccessibleRenderWindow"))
        return static_cast< AccessibleRenderWindow*>(this);
    return DummyRenderWindow::qt_metacast(_clname);
}

int vlc::CompositorX11RenderWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DummyRenderWindow::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void vlc::CompositorX11RenderWindow::windowSizeChanged(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void vlc::CompositorX11RenderWindow::requestUIRefresh()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void vlc::CompositorX11RenderWindow::videoPositionChanged(const QRect & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void vlc::CompositorX11RenderWindow::videoSurfaceChanged(CompositorX11RenderClient * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void vlc::CompositorX11RenderWindow::visiblityChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void vlc::CompositorX11RenderWindow::registerVideoWindow(unsigned int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
bool vlc::CompositorX11RenderWindow::hasExtendedFrameChanged(bool _t1)
{
    bool _t0{};
    QMetaObject::activate<bool>(this, &staticMetaObject, 6, std::addressof(_t0), _t1);
    return _t0;
}

// SIGNAL 7
void vlc::CompositorX11RenderWindow::acrylicChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}
QT_WARNING_POP

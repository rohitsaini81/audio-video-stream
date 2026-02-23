/****************************************************************************
** Meta object code from reading C++ file 'qml_menu_wrapper.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qml_menu_wrapper.hpp"
#include "dialogs/toolbar/controlbar_profile_model.hpp"
#include "util/csdbuttonmodel.hpp"
#include "playlist/playlist_controller.hpp"
#include "maininterface/mainctx_submodels.hpp"
#include "maininterface/videosurface.hpp"
#include "medialibrary/medialib.hpp"
#include "player/player_controller.hpp"
#include "util/color_scheme_model.hpp"
#include "playlist/playlist_controller.hpp"
#include "playlist/playlist_model.hpp"
#include "player/player_controller.hpp"
#include "network/networkdevicemodel.hpp"
#include "network/networkmediamodel.hpp"
#include "medialibrary/mlplaylistlistmodel.hpp"
#include "medialibrary/mlplaylistmodel.hpp"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qml_menu_wrapper.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18BasicMenuContainerE_t {};
} // unnamed namespace

template <> constexpr inline auto BasicMenuContainer::qt_create_metaobjectdata<qt_meta_tag_ZN18BasicMenuContainerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BasicMenuContainer",
        "visibleChanged",
        "",
        "ctx",
        "MainCtx*",
        "visible"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'visibleChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'ctx'
        QtMocHelpers::PropertyData<MainCtx*>(3, 0x80000000 | 4, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
        // property 'visible'
        QtMocHelpers::PropertyData<bool>(5, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BasicMenuContainer, qt_meta_tag_ZN18BasicMenuContainerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BasicMenuContainer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18BasicMenuContainerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18BasicMenuContainerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18BasicMenuContainerE_t>.metaTypes,
    nullptr
} };

void BasicMenuContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BasicMenuContainer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->visibleChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (BasicMenuContainer::*)()>(_a, &BasicMenuContainer::visibleChanged, 0))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MainCtx* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<MainCtx**>(_v) = _t->getctx(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->visible(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setctx(*reinterpret_cast<MainCtx**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *BasicMenuContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BasicMenuContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18BasicMenuContainerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BasicMenuContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void BasicMenuContainer::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN14StringListMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto StringListMenu::qt_create_metaobjectdata<qt_meta_tag_ZN14StringListMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "StringListMenu",
        "selected",
        "",
        "index",
        "str",
        "popup",
        "QPoint",
        "point",
        "QVariantList",
        "stringList"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'selected'
        QtMocHelpers::SignalData<void(int, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::QString, 4 },
        }}),
        // Method 'popup'
        QtMocHelpers::MethodData<void(const QPoint &, const QVariantList &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<StringListMenu, qt_meta_tag_ZN14StringListMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject StringListMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<BasicMenuContainer::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14StringListMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14StringListMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14StringListMenuE_t>.metaTypes,
    nullptr
} };

void StringListMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<StringListMenu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->popup((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (StringListMenu::*)(int , const QString & )>(_a, &StringListMenu::selected, 0))
            return;
    }
}

const QMetaObject *StringListMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StringListMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14StringListMenuE_t>.strings))
        return static_cast<void*>(this);
    return BasicMenuContainer::qt_metacast(_clname);
}

int StringListMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasicMenuContainer::qt_metacall(_c, _id, _a);
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
void StringListMenu::selected(int _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN8SortMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto SortMenu::qt_create_metaobjectdata<qt_meta_tag_ZN8SortMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SortMenu",
        "selected",
        "",
        "index",
        "shownChanged",
        "popup",
        "QPoint",
        "point",
        "popupAbovePoint",
        "QVariantList",
        "model",
        "close",
        "ctx",
        "MainCtx*",
        "shown"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'selected'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'shownChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'popup'
        QtMocHelpers::MethodData<void(const QPoint &, bool, const QVariantList &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { QMetaType::Bool, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Method 'close'
        QtMocHelpers::MethodData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'ctx'
        QtMocHelpers::PropertyData<MainCtx*>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
        // property 'shown'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SortMenu, qt_meta_tag_ZN8SortMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SortMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8SortMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8SortMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8SortMenuE_t>.metaTypes,
    nullptr
} };

void SortMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SortMenu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->shownChanged(); break;
        case 2: _t->popup((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[3]))); break;
        case 3: _t->close(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SortMenu::*)(int )>(_a, &SortMenu::selected, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SortMenu::*)()>(_a, &SortMenu::shownChanged, 1))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MainCtx* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<MainCtx**>(_v) = _t->getctx(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isShown(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setctx(*reinterpret_cast<MainCtx**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *SortMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SortMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8SortMenuE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SortMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
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
void SortMenu::selected(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void SortMenu::shownChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {
struct qt_meta_tag_ZN13SortMenuVideoE_t {};
} // unnamed namespace

template <> constexpr inline auto SortMenuVideo::qt_create_metaobjectdata<qt_meta_tag_ZN13SortMenuVideoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SortMenuVideo",
        "grouping",
        "",
        "MainCtx::Grouping"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'grouping'
        QtMocHelpers::SignalData<void(MainCtx::Grouping)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 1 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SortMenuVideo, qt_meta_tag_ZN13SortMenuVideoE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SortMenuVideo::staticMetaObject = { {
    QMetaObject::SuperData::link<SortMenu::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SortMenuVideoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SortMenuVideoE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13SortMenuVideoE_t>.metaTypes,
    nullptr
} };

void SortMenuVideo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SortMenuVideo *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->grouping((*reinterpret_cast<std::add_pointer_t<MainCtx::Grouping>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SortMenuVideo::*)(MainCtx::Grouping )>(_a, &SortMenuVideo::grouping, 0))
            return;
    }
}

const QMetaObject *SortMenuVideo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SortMenuVideo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SortMenuVideoE_t>.strings))
        return static_cast<void*>(this);
    return SortMenu::qt_metacast(_clname);
}

int SortMenuVideo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SortMenu::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SortMenuVideo::grouping(MainCtx::Grouping _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN14SortMenuAlbumsE_t {};
} // unnamed namespace

template <> constexpr inline auto SortMenuAlbums::qt_create_metaobjectdata<qt_meta_tag_ZN14SortMenuAlbumsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SortMenuAlbums",
        "sectionsVisible"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'sectionsVisible'
        QtMocHelpers::PropertyData<bool>(1, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SortMenuAlbums, qt_meta_tag_ZN14SortMenuAlbumsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SortMenuAlbums::staticMetaObject = { {
    QMetaObject::SuperData::link<SortMenu::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SortMenuAlbumsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SortMenuAlbumsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14SortMenuAlbumsE_t>.metaTypes,
    nullptr
} };

void SortMenuAlbums::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SortMenuAlbums *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->getsectionsVisible(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setsectionsVisible(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *SortMenuAlbums::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SortMenuAlbums::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SortMenuAlbumsE_t>.strings))
        return static_cast<void*>(this);
    return SortMenu::qt_metacast(_clname);
}

int SortMenuAlbums::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SortMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN13QmlGlobalMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto QmlGlobalMenu::qt_create_metaobjectdata<qt_meta_tag_ZN13QmlGlobalMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QmlGlobalMenu",
        "aboutToShow",
        "",
        "aboutToHide",
        "shownChanged",
        "popup",
        "QPoint",
        "pos",
        "close",
        "ctx",
        "MainCtx*",
        "playerViewVisible",
        "shown"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'aboutToShow'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'aboutToHide'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'shownChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'popup'
        QtMocHelpers::SlotData<void(QPoint)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'close'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'ctx'
        QtMocHelpers::PropertyData<MainCtx*>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
        // property 'playerViewVisible'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final),
        // property 'shown'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QmlGlobalMenu, qt_meta_tag_ZN13QmlGlobalMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QmlGlobalMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<VLCMenuBar::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QmlGlobalMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QmlGlobalMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13QmlGlobalMenuE_t>.metaTypes,
    nullptr
} };

void QmlGlobalMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QmlGlobalMenu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->aboutToShow(); break;
        case 1: _t->aboutToHide(); break;
        case 2: _t->shownChanged(); break;
        case 3: _t->popup((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 4: _t->close(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QmlGlobalMenu::*)()>(_a, &QmlGlobalMenu::aboutToShow, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QmlGlobalMenu::*)()>(_a, &QmlGlobalMenu::aboutToHide, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QmlGlobalMenu::*)()>(_a, &QmlGlobalMenu::shownChanged, 2))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MainCtx* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<MainCtx**>(_v) = _t->getctx(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->getplayerViewVisible(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isShown(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setctx(*reinterpret_cast<MainCtx**>(_v)); break;
        case 1: _t->setplayerViewVisible(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QmlGlobalMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlGlobalMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QmlGlobalMenuE_t>.strings))
        return static_cast<void*>(this);
    return VLCMenuBar::qt_metacast(_clname);
}

int QmlGlobalMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VLCMenuBar::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QmlGlobalMenu::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QmlGlobalMenu::aboutToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QmlGlobalMenu::shownChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
namespace {
struct qt_meta_tag_ZN10QmlMenuBarE_t {};
} // unnamed namespace

template <> constexpr inline auto QmlMenuBar::qt_create_metaobjectdata<qt_meta_tag_ZN10QmlMenuBarE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QmlMenuBar",
        "navigateMenu",
        "",
        "direction",
        "menuClosed",
        "popupMenuEntry",
        "QQuickItem*",
        "button",
        "MenuEntry",
        "entry",
        "popupMediaMenu",
        "popupPlaybackMenu",
        "popupAudioMenu",
        "popupVideoMenu",
        "popupSubtitleMenu",
        "popupToolsMenu",
        "popupViewMenu",
        "popupHelpMenu",
        "popupExtraActionsMenu",
        "QList<MenuEntry>",
        "extraActions",
        "onMenuClosed",
        "menuEntryTitle",
        "ctx",
        "MainCtx*",
        "menubar",
        "openMenuOnHover",
        "playerViewVisible",
        "MEDIA",
        "PLAYBACK",
        "VIDEO",
        "AUDIO",
        "SUBTITLE",
        "TOOL",
        "VIEW",
        "HELP"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'navigateMenu'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'menuClosed'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'popupMenuEntry'
        QtMocHelpers::SlotData<void(QQuickItem *, enum MenuEntry)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'popupMediaMenu'
        QtMocHelpers::SlotData<void(QQuickItem *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'popupPlaybackMenu'
        QtMocHelpers::SlotData<void(QQuickItem *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'popupAudioMenu'
        QtMocHelpers::SlotData<void(QQuickItem *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'popupVideoMenu'
        QtMocHelpers::SlotData<void(QQuickItem *)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'popupSubtitleMenu'
        QtMocHelpers::SlotData<void(QQuickItem *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'popupToolsMenu'
        QtMocHelpers::SlotData<void(QQuickItem *)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'popupViewMenu'
        QtMocHelpers::SlotData<void(QQuickItem *)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'popupHelpMenu'
        QtMocHelpers::SlotData<void(QQuickItem *)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'popupExtraActionsMenu'
        QtMocHelpers::SlotData<void(QQuickItem *, const QList<MenuEntry> &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 19, 20 },
        }}),
        // Slot 'onMenuClosed'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Method 'menuEntryTitle'
        QtMocHelpers::MethodData<QString(enum MenuEntry)>(22, 2, QMC::AccessPublic, QMetaType::QString, {{
            { 0x80000000 | 8, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'ctx'
        QtMocHelpers::PropertyData<MainCtx*>(23, 0x80000000 | 24, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
        // property 'menubar'
        QtMocHelpers::PropertyData<QQuickItem*>(25, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
        // property 'openMenuOnHover'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final),
        // property 'playerViewVisible'
        QtMocHelpers::PropertyData<bool>(27, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'MenuEntry'
        QtMocHelpers::EnumData<enum MenuEntry>(8, 8, QMC::EnumFlags{}).add({
            {   28, MenuEntry::MEDIA },
            {   29, MenuEntry::PLAYBACK },
            {   30, MenuEntry::VIDEO },
            {   31, MenuEntry::AUDIO },
            {   32, MenuEntry::SUBTITLE },
            {   33, MenuEntry::TOOL },
            {   34, MenuEntry::VIEW },
            {   35, MenuEntry::HELP },
        }),
    };
    return QtMocHelpers::metaObjectData<QmlMenuBar, qt_meta_tag_ZN10QmlMenuBarE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QmlMenuBar::staticMetaObject = { {
    QMetaObject::SuperData::link<VLCMenuBar::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10QmlMenuBarE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10QmlMenuBarE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10QmlMenuBarE_t>.metaTypes,
    nullptr
} };

void QmlMenuBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QmlMenuBar *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->navigateMenu((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->menuClosed(); break;
        case 2: _t->popupMenuEntry((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum MenuEntry>>(_a[2]))); break;
        case 3: _t->popupMediaMenu((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 4: _t->popupPlaybackMenu((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 5: _t->popupAudioMenu((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 6: _t->popupVideoMenu((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 7: _t->popupSubtitleMenu((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 8: _t->popupToolsMenu((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 9: _t->popupViewMenu((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 10: _t->popupHelpMenu((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 11: _t->popupExtraActionsMenu((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QList<MenuEntry>>>(_a[2]))); break;
        case 12: _t->onMenuClosed(); break;
        case 13: { QString _r = _t->menuEntryTitle((*reinterpret_cast<std::add_pointer_t<enum MenuEntry>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QmlMenuBar::*)(int )>(_a, &QmlMenuBar::navigateMenu, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QmlMenuBar::*)()>(_a, &QmlMenuBar::menuClosed, 1))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MainCtx* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<MainCtx**>(_v) = _t->getctx(); break;
        case 1: *reinterpret_cast<QQuickItem**>(_v) = _t->getmenubar(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->getopenMenuOnHover(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->getplayerViewVisible(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setctx(*reinterpret_cast<MainCtx**>(_v)); break;
        case 1: _t->setmenubar(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 2: _t->setopenMenuOnHover(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setplayerViewVisible(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QmlMenuBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlMenuBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10QmlMenuBarE_t>.strings))
        return static_cast<void*>(this);
    return VLCMenuBar::qt_metacast(_clname);
}

int QmlMenuBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VLCMenuBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QmlMenuBar::navigateMenu(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QmlMenuBar::menuClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {
struct qt_meta_tag_ZN14QmlMenuBarMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto QmlMenuBarMenu::qt_create_metaobjectdata<qt_meta_tag_ZN14QmlMenuBarMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QmlMenuBarMenu"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QmlMenuBarMenu, qt_meta_tag_ZN14QmlMenuBarMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QmlMenuBarMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14QmlMenuBarMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14QmlMenuBarMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14QmlMenuBarMenuE_t>.metaTypes,
    nullptr
} };

void QmlMenuBarMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QmlMenuBarMenu *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QmlMenuBarMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlMenuBarMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14QmlMenuBarMenuE_t>.strings))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int QmlMenuBarMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN15QmlBookmarkMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto QmlBookmarkMenu::qt_create_metaobjectdata<qt_meta_tag_ZN15QmlBookmarkMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QmlBookmarkMenu",
        "aboutToHide",
        "",
        "aboutToShow",
        "popup",
        "QPoint",
        "position",
        "above",
        "close",
        "ctx",
        "MainCtx*",
        "player",
        "PlayerController*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'aboutToHide'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'aboutToShow'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'popup'
        QtMocHelpers::MethodData<void(const QPoint &, bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { QMetaType::Bool, 7 },
        }}),
        // Method 'popup'
        QtMocHelpers::MethodData<void(const QPoint &)>(4, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Method 'close'
        QtMocHelpers::MethodData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'ctx'
        QtMocHelpers::PropertyData<MainCtx*>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
        // property 'player'
        QtMocHelpers::PropertyData<PlayerController*>(11, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QmlBookmarkMenu, qt_meta_tag_ZN15QmlBookmarkMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QmlBookmarkMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QmlBookmarkMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QmlBookmarkMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15QmlBookmarkMenuE_t>.metaTypes,
    nullptr
} };

void QmlBookmarkMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QmlBookmarkMenu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->aboutToHide(); break;
        case 1: _t->aboutToShow(); break;
        case 2: _t->popup((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 3: _t->popup((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 4: _t->close(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QmlBookmarkMenu::*)()>(_a, &QmlBookmarkMenu::aboutToHide, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QmlBookmarkMenu::*)()>(_a, &QmlBookmarkMenu::aboutToShow, 1))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MainCtx* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<MainCtx**>(_v) = _t->getctx(); break;
        case 1: *reinterpret_cast<PlayerController**>(_v) = _t->getplayer(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setctx(*reinterpret_cast<MainCtx**>(_v)); break;
        case 1: _t->setplayer(*reinterpret_cast<PlayerController**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QmlBookmarkMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlBookmarkMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QmlBookmarkMenuE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QmlBookmarkMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QmlBookmarkMenu::aboutToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QmlBookmarkMenu::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {
struct qt_meta_tag_ZN14QmlProgramMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto QmlProgramMenu::qt_create_metaobjectdata<qt_meta_tag_ZN14QmlProgramMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QmlProgramMenu",
        "aboutToHide",
        "",
        "aboutToShow",
        "popup",
        "QPoint",
        "position",
        "above",
        "close",
        "ctx",
        "MainCtx*",
        "player",
        "PlayerController*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'aboutToHide'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'aboutToShow'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'popup'
        QtMocHelpers::MethodData<void(const QPoint &, bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { QMetaType::Bool, 7 },
        }}),
        // Method 'popup'
        QtMocHelpers::MethodData<void(const QPoint &)>(4, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Method 'close'
        QtMocHelpers::MethodData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'ctx'
        QtMocHelpers::PropertyData<MainCtx*>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
        // property 'player'
        QtMocHelpers::PropertyData<PlayerController*>(11, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QmlProgramMenu, qt_meta_tag_ZN14QmlProgramMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QmlProgramMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14QmlProgramMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14QmlProgramMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14QmlProgramMenuE_t>.metaTypes,
    nullptr
} };

void QmlProgramMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QmlProgramMenu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->aboutToHide(); break;
        case 1: _t->aboutToShow(); break;
        case 2: _t->popup((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 3: _t->popup((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 4: _t->close(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QmlProgramMenu::*)()>(_a, &QmlProgramMenu::aboutToHide, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QmlProgramMenu::*)()>(_a, &QmlProgramMenu::aboutToShow, 1))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MainCtx* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<MainCtx**>(_v) = _t->getctx(); break;
        case 1: *reinterpret_cast<PlayerController**>(_v) = _t->getplayer(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setctx(*reinterpret_cast<MainCtx**>(_v)); break;
        case 1: _t->setplayer(*reinterpret_cast<PlayerController**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QmlProgramMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlProgramMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14QmlProgramMenuE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QmlProgramMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QmlProgramMenu::aboutToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QmlProgramMenu::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {
struct qt_meta_tag_ZN15QmlRendererMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto QmlRendererMenu::qt_create_metaobjectdata<qt_meta_tag_ZN15QmlRendererMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QmlRendererMenu",
        "aboutToHide",
        "",
        "aboutToShow",
        "popup",
        "QPoint",
        "position",
        "above",
        "close",
        "ctx",
        "MainCtx*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'aboutToHide'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'aboutToShow'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'popup'
        QtMocHelpers::MethodData<void(const QPoint &, bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { QMetaType::Bool, 7 },
        }}),
        // Method 'popup'
        QtMocHelpers::MethodData<void(const QPoint &)>(4, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Method 'close'
        QtMocHelpers::MethodData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'ctx'
        QtMocHelpers::PropertyData<MainCtx*>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QmlRendererMenu, qt_meta_tag_ZN15QmlRendererMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QmlRendererMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QmlRendererMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QmlRendererMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15QmlRendererMenuE_t>.metaTypes,
    nullptr
} };

void QmlRendererMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QmlRendererMenu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->aboutToHide(); break;
        case 1: _t->aboutToShow(); break;
        case 2: _t->popup((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 3: _t->popup((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 4: _t->close(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QmlRendererMenu::*)()>(_a, &QmlRendererMenu::aboutToHide, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QmlRendererMenu::*)()>(_a, &QmlRendererMenu::aboutToShow, 1))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MainCtx* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<MainCtx**>(_v) = _t->getctx(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setctx(*reinterpret_cast<MainCtx**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QmlRendererMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlRendererMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QmlRendererMenuE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QmlRendererMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QmlRendererMenu::aboutToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QmlRendererMenu::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {
struct qt_meta_tag_ZN12QmlTrackMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto QmlTrackMenu::qt_create_metaobjectdata<qt_meta_tag_ZN12QmlTrackMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QmlTrackMenu",
        "triggered",
        "",
        "Action",
        "action",
        "popup",
        "QPoint",
        "position",
        "ctx",
        "MainCtx*",
        "Open",
        "Synchronize",
        "Download"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'triggered'
        QtMocHelpers::SignalData<void(enum Action)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Method 'popup'
        QtMocHelpers::MethodData<void(const QPoint &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'ctx'
        QtMocHelpers::PropertyData<MainCtx*>(8, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Action'
        QtMocHelpers::EnumData<enum Action>(3, 3, QMC::EnumFlags{}).add({
            {   10, Action::Open },
            {   11, Action::Synchronize },
            {   12, Action::Download },
        }),
    };
    return QtMocHelpers::metaObjectData<QmlTrackMenu, qt_meta_tag_ZN12QmlTrackMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QmlTrackMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12QmlTrackMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12QmlTrackMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12QmlTrackMenuE_t>.metaTypes,
    nullptr
} };

void QmlTrackMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QmlTrackMenu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->triggered((*reinterpret_cast<std::add_pointer_t<enum Action>>(_a[1]))); break;
        case 1: _t->popup((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QmlTrackMenu::*)(Action )>(_a, &QmlTrackMenu::triggered, 0))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MainCtx* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<MainCtx**>(_v) = _t->getctx(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setctx(*reinterpret_cast<MainCtx**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QmlTrackMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlTrackMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12QmlTrackMenuE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QmlTrackMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QmlTrackMenu::triggered(Action _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN15QmlSubtitleMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto QmlSubtitleMenu::qt_create_metaobjectdata<qt_meta_tag_ZN15QmlSubtitleMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QmlSubtitleMenu",
        "player",
        "PlayerController*"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'player'
        QtMocHelpers::PropertyData<PlayerController*>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QmlSubtitleMenu, qt_meta_tag_ZN15QmlSubtitleMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QmlSubtitleMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QmlTrackMenu::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QmlSubtitleMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QmlSubtitleMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15QmlSubtitleMenuE_t>.metaTypes,
    nullptr
} };

void QmlSubtitleMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QmlSubtitleMenu *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<PlayerController**>(_v) = _t->getplayer(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setplayer(*reinterpret_cast<PlayerController**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QmlSubtitleMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlSubtitleMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QmlSubtitleMenuE_t>.strings))
        return static_cast<void*>(this);
    return QmlTrackMenu::qt_metacast(_clname);
}

int QmlSubtitleMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmlTrackMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN12QmlAudioMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto QmlAudioMenu::qt_create_metaobjectdata<qt_meta_tag_ZN12QmlAudioMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QmlAudioMenu"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QmlAudioMenu, qt_meta_tag_ZN12QmlAudioMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QmlAudioMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QmlTrackMenu::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12QmlAudioMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12QmlAudioMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12QmlAudioMenuE_t>.metaTypes,
    nullptr
} };

void QmlAudioMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QmlAudioMenu *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QmlAudioMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlAudioMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12QmlAudioMenuE_t>.strings))
        return static_cast<void*>(this);
    return QmlTrackMenu::qt_metacast(_clname);
}

int QmlAudioMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmlTrackMenu::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN23PlaylistListContextMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto PlaylistListContextMenu::qt_create_metaobjectdata<qt_meta_tag_ZN23PlaylistListContextMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlaylistListContextMenu",
        "requestDeleteSelectedPlaylists",
        "",
        "popup",
        "QModelIndexList",
        "selected",
        "QPoint",
        "pos",
        "QVariantMap",
        "options",
        "model",
        "MLPlaylistListModel*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'requestDeleteSelectedPlaylists'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'popup'
        QtMocHelpers::SlotData<void(const QModelIndexList &, QPoint, QVariantMap)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'popup'
        QtMocHelpers::SlotData<void(const QModelIndexList &, QPoint)>(3, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'model'
        QtMocHelpers::PropertyData<MLPlaylistListModel*>(10, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlaylistListContextMenu, qt_meta_tag_ZN23PlaylistListContextMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PlaylistListContextMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<BasicMenuContainer::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23PlaylistListContextMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23PlaylistListContextMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23PlaylistListContextMenuE_t>.metaTypes,
    nullptr
} };

void PlaylistListContextMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlaylistListContextMenu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->requestDeleteSelectedPlaylists(); break;
        case 1: _t->popup((*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[3]))); break;
        case 2: _t->popup((*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlaylistListContextMenu::*)()>(_a, &PlaylistListContextMenu::requestDeleteSelectedPlaylists, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<MLPlaylistListModel**>(_v) = _t->getmodel(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setmodel(*reinterpret_cast<MLPlaylistListModel**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *PlaylistListContextMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistListContextMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23PlaylistListContextMenuE_t>.strings))
        return static_cast<void*>(this);
    return BasicMenuContainer::qt_metacast(_clname);
}

int PlaylistListContextMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasicMenuContainer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
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
void PlaylistListContextMenu::requestDeleteSelectedPlaylists()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN19QmlAudioContextMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto QmlAudioContextMenu::qt_create_metaobjectdata<qt_meta_tag_ZN19QmlAudioContextMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QmlAudioContextMenu",
        "popup",
        "",
        "QPoint",
        "position",
        "ctx",
        "MainCtx*"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'popup'
        QtMocHelpers::MethodData<void(const QPoint &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'ctx'
        QtMocHelpers::PropertyData<MainCtx*>(5, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QmlAudioContextMenu, qt_meta_tag_ZN19QmlAudioContextMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QmlAudioContextMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<VLCMenuBar::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QmlAudioContextMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QmlAudioContextMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19QmlAudioContextMenuE_t>.metaTypes,
    nullptr
} };

void QmlAudioContextMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QmlAudioContextMenu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->popup((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MainCtx* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<MainCtx**>(_v) = _t->getctx(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setctx(*reinterpret_cast<MainCtx**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QmlAudioContextMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlAudioContextMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QmlAudioContextMenuE_t>.strings))
        return static_cast<void*>(this);
    return VLCMenuBar::qt_metacast(_clname);
}

int QmlAudioContextMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VLCMenuBar::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN24PlaylistMediaContextMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto PlaylistMediaContextMenu::qt_create_metaobjectdata<qt_meta_tag_ZN24PlaylistMediaContextMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlaylistMediaContextMenu",
        "showMediaInformation",
        "",
        "index",
        "popup",
        "QModelIndexList",
        "selected",
        "QPoint",
        "pos",
        "QVariantMap",
        "options",
        "model",
        "MLPlaylistModel*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showMediaInformation'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'popup'
        QtMocHelpers::SlotData<void(const QModelIndexList &, QPoint, QVariantMap)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Slot 'popup'
        QtMocHelpers::SlotData<void(const QModelIndexList &, QPoint)>(4, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'model'
        QtMocHelpers::PropertyData<MLPlaylistModel*>(11, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlaylistMediaContextMenu, qt_meta_tag_ZN24PlaylistMediaContextMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PlaylistMediaContextMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<BasicMenuContainer::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24PlaylistMediaContextMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24PlaylistMediaContextMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN24PlaylistMediaContextMenuE_t>.metaTypes,
    nullptr
} };

void PlaylistMediaContextMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlaylistMediaContextMenu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showMediaInformation((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->popup((*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[3]))); break;
        case 2: _t->popup((*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlaylistMediaContextMenu::*)(int )>(_a, &PlaylistMediaContextMenu::showMediaInformation, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<MLPlaylistModel**>(_v) = _t->getmodel(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setmodel(*reinterpret_cast<MLPlaylistModel**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *PlaylistMediaContextMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistMediaContextMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24PlaylistMediaContextMenuE_t>.strings))
        return static_cast<void*>(this);
    return BasicMenuContainer::qt_metacast(_clname);
}

int PlaylistMediaContextMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasicMenuContainer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
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
void PlaylistMediaContextMenu::showMediaInformation(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN23NetworkMediaContextMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto NetworkMediaContextMenu::qt_create_metaobjectdata<qt_meta_tag_ZN23NetworkMediaContextMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NetworkMediaContextMenu",
        "popup",
        "",
        "QModelIndexList",
        "selected",
        "QPoint",
        "pos",
        "tableView_popup",
        "model",
        "NetworkMediaModel*"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'popup'
        QtMocHelpers::SlotData<void(const QModelIndexList &, QPoint)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Slot 'tableView_popup'
        QtMocHelpers::SlotData<void(int, const QModelIndexList &, QPoint)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'model'
        QtMocHelpers::PropertyData<NetworkMediaModel*>(8, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NetworkMediaContextMenu, qt_meta_tag_ZN23NetworkMediaContextMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NetworkMediaContextMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<BasicMenuContainer::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23NetworkMediaContextMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23NetworkMediaContextMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23NetworkMediaContextMenuE_t>.metaTypes,
    nullptr
} };

void NetworkMediaContextMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NetworkMediaContextMenu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->popup((*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 1: _t->tableView_popup((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[3]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<NetworkMediaModel**>(_v) = _t->getmodel(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setmodel(*reinterpret_cast<NetworkMediaModel**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *NetworkMediaContextMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkMediaContextMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23NetworkMediaContextMenuE_t>.strings))
        return static_cast<void*>(this);
    return BasicMenuContainer::qt_metacast(_clname);
}

int NetworkMediaContextMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasicMenuContainer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN24NetworkDeviceContextMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto NetworkDeviceContextMenu::qt_create_metaobjectdata<qt_meta_tag_ZN24NetworkDeviceContextMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NetworkDeviceContextMenu",
        "popup",
        "",
        "QModelIndexList",
        "selected",
        "QPoint",
        "pos",
        "tableView_popup",
        "model",
        "NetworkDeviceModel*"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'popup'
        QtMocHelpers::SlotData<void(const QModelIndexList &, QPoint)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Slot 'tableView_popup'
        QtMocHelpers::SlotData<void(int, const QModelIndexList &, QPoint)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'model'
        QtMocHelpers::PropertyData<NetworkDeviceModel*>(8, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NetworkDeviceContextMenu, qt_meta_tag_ZN24NetworkDeviceContextMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NetworkDeviceContextMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<BasicMenuContainer::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24NetworkDeviceContextMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24NetworkDeviceContextMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN24NetworkDeviceContextMenuE_t>.metaTypes,
    nullptr
} };

void NetworkDeviceContextMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NetworkDeviceContextMenu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->popup((*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 1: _t->tableView_popup((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[3]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<NetworkDeviceModel**>(_v) = _t->getmodel(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setmodel(*reinterpret_cast<NetworkDeviceModel**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *NetworkDeviceContextMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkDeviceContextMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24NetworkDeviceContextMenuE_t>.strings))
        return static_cast<void*>(this);
    return BasicMenuContainer::qt_metacast(_clname);
}

int NetworkDeviceContextMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasicMenuContainer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN19PlaylistContextMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto PlaylistContextMenu::qt_create_metaobjectdata<qt_meta_tag_ZN19PlaylistContextMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlaylistContextMenu",
        "jumpToCurrentPlaying",
        "",
        "popup",
        "currentIndex",
        "QPoint",
        "pos",
        "model",
        "vlc::playlist::PlaylistListModel*",
        "controler",
        "vlc::playlist::PlaylistController*",
        "selectionModel",
        "ListSelectionModel*",
        "ctx",
        "MainCtx*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'jumpToCurrentPlaying'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'popup'
        QtMocHelpers::SlotData<void(int, QPoint)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'model'
        QtMocHelpers::PropertyData<vlc::playlist::PlaylistListModel*>(7, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
        // property 'controler'
        QtMocHelpers::PropertyData<vlc::playlist::PlaylistController*>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
        // property 'selectionModel'
        QtMocHelpers::PropertyData<ListSelectionModel*>(11, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
        // property 'ctx'
        QtMocHelpers::PropertyData<MainCtx*>(13, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlaylistContextMenu, qt_meta_tag_ZN19PlaylistContextMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PlaylistContextMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19PlaylistContextMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19PlaylistContextMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19PlaylistContextMenuE_t>.metaTypes,
    nullptr
} };

void PlaylistContextMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlaylistContextMenu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->jumpToCurrentPlaying(); break;
        case 1: _t->popup((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlaylistContextMenu::*)()>(_a, &PlaylistContextMenu::jumpToCurrentPlaying, 0))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ListSelectionModel* >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MainCtx* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<vlc::playlist::PlaylistListModel**>(_v) = _t->getmodel(); break;
        case 1: *reinterpret_cast<vlc::playlist::PlaylistController**>(_v) = _t->getcontroler(); break;
        case 2: *reinterpret_cast<ListSelectionModel**>(_v) = _t->getselectionModel(); break;
        case 3: *reinterpret_cast<MainCtx**>(_v) = _t->getctx(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setmodel(*reinterpret_cast<vlc::playlist::PlaylistListModel**>(_v)); break;
        case 1: _t->setcontroler(*reinterpret_cast<vlc::playlist::PlaylistController**>(_v)); break;
        case 2: _t->setselectionModel(*reinterpret_cast<ListSelectionModel**>(_v)); break;
        case 3: _t->setctx(*reinterpret_cast<MainCtx**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *PlaylistContextMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistContextMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19PlaylistContextMenuE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlaylistContextMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PlaylistContextMenu::jumpToCurrentPlaying()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'custom_menus.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "custom_menus.hpp"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'custom_menus.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17CheckableListMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto CheckableListMenu::qt_create_metaobjectdata<qt_meta_tag_ZN17CheckableListMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CheckableListMenu"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CheckableListMenu, qt_meta_tag_ZN17CheckableListMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CheckableListMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17CheckableListMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17CheckableListMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17CheckableListMenuE_t>.metaTypes,
    nullptr
} };

void CheckableListMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CheckableListMenu *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *CheckableListMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CheckableListMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17CheckableListMenuE_t>.strings))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int CheckableListMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN14ListMenuHelperE_t {};
} // unnamed namespace

template <> constexpr inline auto ListMenuHelper::qt_create_metaobjectdata<qt_meta_tag_ZN14ListMenuHelperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ListMenuHelper",
        "select",
        "",
        "index",
        "checked",
        "countChanged",
        "count",
        "onRowsInserted",
        "QModelIndex",
        "parent",
        "first",
        "last",
        "onRowsRemoved",
        "onDataChanged",
        "topLeft",
        "bottomRight",
        "QList<int>",
        "roles",
        "onModelReset",
        "onTriggered"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'select'
        QtMocHelpers::SignalData<void(int, bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Bool, 4 },
        }}),
        // Signal 'countChanged'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'onRowsInserted'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { QMetaType::Int, 10 }, { QMetaType::Int, 11 },
        }}),
        // Slot 'onRowsRemoved'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { QMetaType::Int, 10 }, { QMetaType::Int, 11 },
        }}),
        // Slot 'onDataChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &, const QVector<int> &)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 14 }, { 0x80000000 | 8, 15 }, { 0x80000000 | 16, 17 },
        }}),
        // Slot 'onDataChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &)>(13, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 8, 14 }, { 0x80000000 | 8, 15 },
        }}),
        // Slot 'onModelReset'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTriggered'
        QtMocHelpers::SlotData<void(bool)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ListMenuHelper, qt_meta_tag_ZN14ListMenuHelperE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ListMenuHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14ListMenuHelperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14ListMenuHelperE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14ListMenuHelperE_t>.metaTypes,
    nullptr
} };

void ListMenuHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ListMenuHelper *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->select((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->countChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->onRowsInserted((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 3: _t->onRowsRemoved((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 4: _t->onDataChanged((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[3]))); break;
        case 5: _t->onDataChanged((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 6: _t->onModelReset(); break;
        case 7: _t->onTriggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ListMenuHelper::*)(int , bool )>(_a, &ListMenuHelper::select, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListMenuHelper::*)(int )>(_a, &ListMenuHelper::countChanged, 1))
            return;
    }
}

const QMetaObject *ListMenuHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListMenuHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14ListMenuHelperE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ListMenuHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ListMenuHelper::select(int _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void ListMenuHelper::countChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN21BooleanPropertyActionE_t {};
} // unnamed namespace

template <> constexpr inline auto BooleanPropertyAction::qt_create_metaobjectdata<qt_meta_tag_ZN21BooleanPropertyActionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BooleanPropertyAction",
        "setModelChecked",
        "",
        "checked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setModelChecked'
        QtMocHelpers::SlotData<void(bool)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BooleanPropertyAction, qt_meta_tag_ZN21BooleanPropertyActionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BooleanPropertyAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21BooleanPropertyActionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21BooleanPropertyActionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21BooleanPropertyActionE_t>.metaTypes,
    nullptr
} };

void BooleanPropertyAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BooleanPropertyAction *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setModelChecked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *BooleanPropertyAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BooleanPropertyAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21BooleanPropertyActionE_t>.strings))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int BooleanPropertyAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN12RendererMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto RendererMenu::qt_create_metaobjectdata<qt_meta_tag_ZN12RendererMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "RendererMenu",
        "updateStatus",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'updateStatus'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RendererMenu, qt_meta_tag_ZN12RendererMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject RendererMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12RendererMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12RendererMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12RendererMenuE_t>.metaTypes,
    nullptr
} };

void RendererMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RendererMenu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateStatus(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *RendererMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RendererMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12RendererMenuE_t>.strings))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int RendererMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN10RecentMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto RecentMenu::qt_create_metaobjectdata<qt_meta_tag_ZN10RecentMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "RecentMenu"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RecentMenu, qt_meta_tag_ZN10RecentMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject RecentMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10RecentMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10RecentMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10RecentMenuE_t>.metaTypes,
    nullptr
} };

void RecentMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RecentMenu *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *RecentMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RecentMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10RecentMenuE_t>.strings))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int RecentMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN12BookmarkMenuE_t {};
} // unnamed namespace

template <> constexpr inline auto BookmarkMenu::qt_create_metaobjectdata<qt_meta_tag_ZN12BookmarkMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BookmarkMenu"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BookmarkMenu, qt_meta_tag_ZN12BookmarkMenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BookmarkMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12BookmarkMenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12BookmarkMenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12BookmarkMenuE_t>.metaTypes,
    nullptr
} };

void BookmarkMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BookmarkMenu *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *BookmarkMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookmarkMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12BookmarkMenuE_t>.strings))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int BookmarkMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP

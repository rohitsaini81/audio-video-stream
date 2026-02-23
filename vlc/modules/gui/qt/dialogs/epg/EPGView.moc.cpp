/****************************************************************************
** Meta object code from reading C++ file 'EPGView.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EPGView.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EPGView.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16EPGGraphicsSceneE_t {};
} // unnamed namespace

template <> constexpr inline auto EPGGraphicsScene::qt_create_metaobjectdata<qt_meta_tag_ZN16EPGGraphicsSceneE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EPGGraphicsScene"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EPGGraphicsScene, qt_meta_tag_ZN16EPGGraphicsSceneE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EPGGraphicsScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16EPGGraphicsSceneE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16EPGGraphicsSceneE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16EPGGraphicsSceneE_t>.metaTypes,
    nullptr
} };

void EPGGraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EPGGraphicsScene *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *EPGGraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EPGGraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16EPGGraphicsSceneE_t>.strings))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int EPGGraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN7EPGViewE_t {};
} // unnamed namespace

template <> constexpr inline auto EPGView::qt_create_metaobjectdata<qt_meta_tag_ZN7EPGViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EPGView",
        "rangeChanged",
        "",
        "itemFocused",
        "EPGItem*",
        "programAdded",
        "const EPGProgram*",
        "programActivated",
        "focusItem"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'rangeChanged'
        QtMocHelpers::SignalData<void(const QDateTime &, const QDateTime &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDateTime, 2 }, { QMetaType::QDateTime, 2 },
        }}),
        // Signal 'itemFocused'
        QtMocHelpers::SignalData<void(EPGItem *)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
        // Signal 'programAdded'
        QtMocHelpers::SignalData<void(const EPGProgram *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Signal 'programActivated'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'focusItem'
        QtMocHelpers::SlotData<void(EPGItem *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EPGView, qt_meta_tag_ZN7EPGViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EPGView::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7EPGViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7EPGViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7EPGViewE_t>.metaTypes,
    nullptr
} };

void EPGView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EPGView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->rangeChanged((*reinterpret_cast<std::add_pointer_t<QDateTime>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDateTime>>(_a[2]))); break;
        case 1: _t->itemFocused((*reinterpret_cast<std::add_pointer_t<EPGItem*>>(_a[1]))); break;
        case 2: _t->programAdded((*reinterpret_cast<std::add_pointer_t<const EPGProgram*>>(_a[1]))); break;
        case 3: _t->programActivated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->focusItem((*reinterpret_cast<std::add_pointer_t<EPGItem*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EPGView::*)(const QDateTime & , const QDateTime & )>(_a, &EPGView::rangeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (EPGView::*)(EPGItem * )>(_a, &EPGView::itemFocused, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (EPGView::*)(const EPGProgram * )>(_a, &EPGView::programAdded, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (EPGView::*)(int )>(_a, &EPGView::programActivated, 3))
            return;
    }
}

const QMetaObject *EPGView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EPGView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7EPGViewE_t>.strings))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int EPGView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
void EPGView::rangeChanged(const QDateTime & _t1, const QDateTime & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void EPGView::itemFocused(EPGItem * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void EPGView::programAdded(const EPGProgram * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void EPGView::programActivated(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP

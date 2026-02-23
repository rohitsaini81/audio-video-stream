/****************************************************************************
** Meta object code from reading C++ file 'listcache.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "listcache.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listcache.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13ListCacheBaseE_t {};
} // unnamed namespace

template <> constexpr inline auto ListCacheBase::qt_create_metaobjectdata<qt_meta_tag_ZN13ListCacheBaseE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ListCacheBase",
        "localSizeChanged",
        "",
        "size_t",
        "querySize",
        "maximumSize",
        "localDataChanged",
        "sourceFirst",
        "sourceLast",
        "beginInsertRows",
        "endInsertRows",
        "beginRemoveRows",
        "endRemoveRows",
        "beginMoveRows",
        "destination",
        "endMoveRows"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'localSizeChanged'
        QtMocHelpers::SignalData<void(size_t, size_t)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 },
        }}),
        // Signal 'localDataChanged'
        QtMocHelpers::SignalData<void(int, int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::Int, 8 },
        }}),
        // Signal 'beginInsertRows'
        QtMocHelpers::SignalData<void(int, int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::Int, 8 },
        }}),
        // Signal 'endInsertRows'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'beginRemoveRows'
        QtMocHelpers::SignalData<void(int, int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::Int, 8 },
        }}),
        // Signal 'endRemoveRows'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'beginMoveRows'
        QtMocHelpers::SignalData<void(int, int, int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::Int, 8 }, { QMetaType::Int, 14 },
        }}),
        // Signal 'endMoveRows'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ListCacheBase, qt_meta_tag_ZN13ListCacheBaseE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ListCacheBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ListCacheBaseE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ListCacheBaseE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13ListCacheBaseE_t>.metaTypes,
    nullptr
} };

void ListCacheBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ListCacheBase *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->localSizeChanged((*reinterpret_cast<std::add_pointer_t<size_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<size_t>>(_a[2]))); break;
        case 1: _t->localDataChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->beginInsertRows((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->endInsertRows(); break;
        case 4: _t->beginRemoveRows((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->endRemoveRows(); break;
        case 6: _t->beginMoveRows((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 7: _t->endMoveRows(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ListCacheBase::*)(size_t , size_t )>(_a, &ListCacheBase::localSizeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListCacheBase::*)(int , int )>(_a, &ListCacheBase::localDataChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListCacheBase::*)(int , int )>(_a, &ListCacheBase::beginInsertRows, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListCacheBase::*)()>(_a, &ListCacheBase::endInsertRows, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListCacheBase::*)(int , int )>(_a, &ListCacheBase::beginRemoveRows, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListCacheBase::*)()>(_a, &ListCacheBase::endRemoveRows, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListCacheBase::*)(int , int , int )>(_a, &ListCacheBase::beginMoveRows, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListCacheBase::*)()>(_a, &ListCacheBase::endMoveRows, 7))
            return;
    }
}

const QMetaObject *ListCacheBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListCacheBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ListCacheBaseE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ListCacheBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ListCacheBase::localSizeChanged(size_t _t1, size_t _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void ListCacheBase::localDataChanged(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void ListCacheBase::beginInsertRows(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void ListCacheBase::endInsertRows()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ListCacheBase::beginRemoveRows(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void ListCacheBase::endRemoveRows()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ListCacheBase::beginMoveRows(int _t1, int _t2, int _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2, _t3);
}

// SIGNAL 7
void ListCacheBase::endMoveRows()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP

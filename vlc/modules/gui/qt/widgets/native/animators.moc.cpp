/****************************************************************************
** Meta object code from reading C++ file 'animators.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "animators.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animators.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13BasicAnimatorE_t {};
} // unnamed namespace

template <> constexpr inline auto BasicAnimator::qt_create_metaobjectdata<qt_meta_tag_ZN13BasicAnimatorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BasicAnimator",
        "frameChanged",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'frameChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BasicAnimator, qt_meta_tag_ZN13BasicAnimatorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BasicAnimator::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractAnimation::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13BasicAnimatorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13BasicAnimatorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13BasicAnimatorE_t>.metaTypes,
    nullptr
} };

void BasicAnimator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BasicAnimator *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->frameChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (BasicAnimator::*)()>(_a, &BasicAnimator::frameChanged, 0))
            return;
    }
}

const QMetaObject *BasicAnimator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BasicAnimator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13BasicAnimatorE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractAnimation::qt_metacast(_clname);
}

int BasicAnimator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractAnimation::qt_metacall(_c, _id, _a);
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
void BasicAnimator::frameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN14PixmapAnimatorE_t {};
} // unnamed namespace

template <> constexpr inline auto PixmapAnimator::qt_create_metaobjectdata<qt_meta_tag_ZN14PixmapAnimatorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PixmapAnimator",
        "pixmapReady",
        "",
        "QPixmap"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pixmapReady'
        QtMocHelpers::SignalData<void(const QPixmap &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PixmapAnimator, qt_meta_tag_ZN14PixmapAnimatorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PixmapAnimator::staticMetaObject = { {
    QMetaObject::SuperData::link<BasicAnimator::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14PixmapAnimatorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14PixmapAnimatorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14PixmapAnimatorE_t>.metaTypes,
    nullptr
} };

void PixmapAnimator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PixmapAnimator *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pixmapReady((*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PixmapAnimator::*)(const QPixmap & )>(_a, &PixmapAnimator::pixmapReady, 0))
            return;
    }
}

const QMetaObject *PixmapAnimator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PixmapAnimator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14PixmapAnimatorE_t>.strings))
        return static_cast<void*>(this);
    return BasicAnimator::qt_metacast(_clname);
}

int PixmapAnimator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasicAnimator::qt_metacall(_c, _id, _a);
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
void PixmapAnimator::pixmapReady(const QPixmap & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN23DelegateAnimationHelperE_t {};
} // unnamed namespace

template <> constexpr inline auto DelegateAnimationHelper::qt_create_metaobjectdata<qt_meta_tag_ZN23DelegateAnimationHelperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DelegateAnimationHelper",
        "run",
        "",
        "updateDelegate"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'run'
        QtMocHelpers::SlotData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'updateDelegate'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DelegateAnimationHelper, qt_meta_tag_ZN23DelegateAnimationHelperE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DelegateAnimationHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23DelegateAnimationHelperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23DelegateAnimationHelperE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23DelegateAnimationHelperE_t>.metaTypes,
    nullptr
} };

void DelegateAnimationHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DelegateAnimationHelper *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->run((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->updateDelegate(); break;
        default: ;
        }
    }
}

const QMetaObject *DelegateAnimationHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DelegateAnimationHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23DelegateAnimationHelperE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DelegateAnimationHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP

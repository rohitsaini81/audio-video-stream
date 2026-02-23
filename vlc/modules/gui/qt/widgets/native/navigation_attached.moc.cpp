/****************************************************************************
** Meta object code from reading C++ file 'navigation_attached.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "navigation_attached.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navigation_attached.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18NavigationAttachedE_t {};
} // unnamed namespace

template <> constexpr inline auto NavigationAttached::qt_create_metaobjectdata<qt_meta_tag_ZN18NavigationAttachedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NavigationAttached",
        "QML.Element",
        "Navigation",
        "QML.Creatable",
        "false",
        "QML.UncreatableReason",
        "Navigation is only available via attached properties.",
        "QML.Attached",
        "navigableChanged",
        "",
        "parentItemChanged",
        "upItemChanged",
        "upActionChanged",
        "downItemChanged",
        "downActionChanged",
        "leftItemChanged",
        "leftActionChanged",
        "rightItemChanged",
        "rightActionChanged",
        "cancelItemChanged",
        "cancelActionChanged",
        "defaultKeyAction",
        "event",
        "defaultKeyReleaseAction",
        "defaultNavigationUp",
        "defaultNavigationDown",
        "defaultNavigationLeft",
        "defaultNavigationRight",
        "defaultNavigationCancel",
        "navigable",
        "parentItem",
        "QQuickItem*",
        "upItem",
        "upAction",
        "QJSValue",
        "downItem",
        "downAction",
        "leftItem",
        "leftAction",
        "rightItem",
        "rightAction",
        "cancelItem",
        "cancelAction"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'navigableChanged'
        QtMocHelpers::SignalData<void()>(8, 9, QMC::AccessPublic, QMetaType::Void),
        // Signal 'parentItemChanged'
        QtMocHelpers::SignalData<void()>(10, 9, QMC::AccessPublic, QMetaType::Void),
        // Signal 'upItemChanged'
        QtMocHelpers::SignalData<void()>(11, 9, QMC::AccessPublic, QMetaType::Void),
        // Signal 'upActionChanged'
        QtMocHelpers::SignalData<void()>(12, 9, QMC::AccessPublic, QMetaType::Void),
        // Signal 'downItemChanged'
        QtMocHelpers::SignalData<void()>(13, 9, QMC::AccessPublic, QMetaType::Void),
        // Signal 'downActionChanged'
        QtMocHelpers::SignalData<void()>(14, 9, QMC::AccessPublic, QMetaType::Void),
        // Signal 'leftItemChanged'
        QtMocHelpers::SignalData<void()>(15, 9, QMC::AccessPublic, QMetaType::Void),
        // Signal 'leftActionChanged'
        QtMocHelpers::SignalData<void()>(16, 9, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rightItemChanged'
        QtMocHelpers::SignalData<void()>(17, 9, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rightActionChanged'
        QtMocHelpers::SignalData<void()>(18, 9, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cancelItemChanged'
        QtMocHelpers::SignalData<void()>(19, 9, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cancelActionChanged'
        QtMocHelpers::SignalData<void()>(20, 9, QMC::AccessPublic, QMetaType::Void),
        // Method 'defaultKeyAction'
        QtMocHelpers::MethodData<void(QObject *)>(21, 9, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QObjectStar, 22 },
        }}),
        // Method 'defaultKeyReleaseAction'
        QtMocHelpers::MethodData<void(QObject *)>(23, 9, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QObjectStar, 22 },
        }}),
        // Method 'defaultNavigationUp'
        QtMocHelpers::MethodData<void()>(24, 9, QMC::AccessPublic, QMetaType::Void),
        // Method 'defaultNavigationDown'
        QtMocHelpers::MethodData<void()>(25, 9, QMC::AccessPublic, QMetaType::Void),
        // Method 'defaultNavigationLeft'
        QtMocHelpers::MethodData<void()>(26, 9, QMC::AccessPublic, QMetaType::Void),
        // Method 'defaultNavigationRight'
        QtMocHelpers::MethodData<void()>(27, 9, QMC::AccessPublic, QMetaType::Void),
        // Method 'defaultNavigationCancel'
        QtMocHelpers::MethodData<void()>(28, 9, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'navigable'
        QtMocHelpers::PropertyData<bool>(29, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 0),
        // property 'parentItem'
        QtMocHelpers::PropertyData<QQuickItem*>(30, 0x80000000 | 31, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'upItem'
        QtMocHelpers::PropertyData<QQuickItem*>(32, 0x80000000 | 31, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 2),
        // property 'upAction'
        QtMocHelpers::PropertyData<QJSValue>(33, 0x80000000 | 34, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 3),
        // property 'downItem'
        QtMocHelpers::PropertyData<QQuickItem*>(35, 0x80000000 | 31, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 4),
        // property 'downAction'
        QtMocHelpers::PropertyData<QJSValue>(36, 0x80000000 | 34, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 5),
        // property 'leftItem'
        QtMocHelpers::PropertyData<QQuickItem*>(37, 0x80000000 | 31, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 6),
        // property 'leftAction'
        QtMocHelpers::PropertyData<QJSValue>(38, 0x80000000 | 34, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 7),
        // property 'rightItem'
        QtMocHelpers::PropertyData<QQuickItem*>(39, 0x80000000 | 31, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 8),
        // property 'rightAction'
        QtMocHelpers::PropertyData<QJSValue>(40, 0x80000000 | 34, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 9),
        // property 'cancelItem'
        QtMocHelpers::PropertyData<QQuickItem*>(41, 0x80000000 | 31, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 10),
        // property 'cancelAction'
        QtMocHelpers::PropertyData<QJSValue>(42, 0x80000000 | 34, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 11),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
            {    5,    6 },
            {    7,    0 },
    });
    return QtMocHelpers::metaObjectData<NavigationAttached, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject NavigationAttached::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18NavigationAttachedE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18NavigationAttachedE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18NavigationAttachedE_t>.metaTypes,
    nullptr
} };

void NavigationAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NavigationAttached *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->navigableChanged(); break;
        case 1: _t->parentItemChanged(); break;
        case 2: _t->upItemChanged(); break;
        case 3: _t->upActionChanged(); break;
        case 4: _t->downItemChanged(); break;
        case 5: _t->downActionChanged(); break;
        case 6: _t->leftItemChanged(); break;
        case 7: _t->leftActionChanged(); break;
        case 8: _t->rightItemChanged(); break;
        case 9: _t->rightActionChanged(); break;
        case 10: _t->cancelItemChanged(); break;
        case 11: _t->cancelActionChanged(); break;
        case 12: _t->defaultKeyAction((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 13: _t->defaultKeyReleaseAction((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 14: _t->defaultNavigationUp(); break;
        case 15: _t->defaultNavigationDown(); break;
        case 16: _t->defaultNavigationLeft(); break;
        case 17: _t->defaultNavigationRight(); break;
        case 18: _t->defaultNavigationCancel(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (NavigationAttached::*)()>(_a, &NavigationAttached::navigableChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationAttached::*)()>(_a, &NavigationAttached::parentItemChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationAttached::*)()>(_a, &NavigationAttached::upItemChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationAttached::*)()>(_a, &NavigationAttached::upActionChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationAttached::*)()>(_a, &NavigationAttached::downItemChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationAttached::*)()>(_a, &NavigationAttached::downActionChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationAttached::*)()>(_a, &NavigationAttached::leftItemChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationAttached::*)()>(_a, &NavigationAttached::leftActionChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationAttached::*)()>(_a, &NavigationAttached::rightItemChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationAttached::*)()>(_a, &NavigationAttached::rightActionChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationAttached::*)()>(_a, &NavigationAttached::cancelItemChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationAttached::*)()>(_a, &NavigationAttached::cancelActionChanged, 11))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
        case 9:
        case 7:
        case 5:
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        case 10:
        case 8:
        case 6:
        case 4:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->getnavigable(); break;
        case 1: *reinterpret_cast<QQuickItem**>(_v) = _t->getparentItem(); break;
        case 2: *reinterpret_cast<QQuickItem**>(_v) = _t->getupItem(); break;
        case 3: *reinterpret_cast<QJSValue*>(_v) = _t->getupAction(); break;
        case 4: *reinterpret_cast<QQuickItem**>(_v) = _t->getdownItem(); break;
        case 5: *reinterpret_cast<QJSValue*>(_v) = _t->getdownAction(); break;
        case 6: *reinterpret_cast<QQuickItem**>(_v) = _t->getleftItem(); break;
        case 7: *reinterpret_cast<QJSValue*>(_v) = _t->getleftAction(); break;
        case 8: *reinterpret_cast<QQuickItem**>(_v) = _t->getrightItem(); break;
        case 9: *reinterpret_cast<QJSValue*>(_v) = _t->getrightAction(); break;
        case 10: *reinterpret_cast<QQuickItem**>(_v) = _t->getcancelItem(); break;
        case 11: *reinterpret_cast<QJSValue*>(_v) = _t->getcancelAction(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setnavigable(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setparentItem(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 2: _t->setupItem(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 3: _t->setupAction(*reinterpret_cast<QJSValue*>(_v)); break;
        case 4: _t->setdownItem(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 5: _t->setdownAction(*reinterpret_cast<QJSValue*>(_v)); break;
        case 6: _t->setleftItem(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 7: _t->setleftAction(*reinterpret_cast<QJSValue*>(_v)); break;
        case 8: _t->setrightItem(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 9: _t->setrightAction(*reinterpret_cast<QJSValue*>(_v)); break;
        case 10: _t->setcancelItem(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 11: _t->setcancelAction(*reinterpret_cast<QJSValue*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *NavigationAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavigationAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18NavigationAttachedE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NavigationAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void NavigationAttached::navigableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NavigationAttached::parentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NavigationAttached::upItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void NavigationAttached::upActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void NavigationAttached::downItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void NavigationAttached::downActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void NavigationAttached::leftItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void NavigationAttached::leftActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void NavigationAttached::rightItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void NavigationAttached::rightActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void NavigationAttached::cancelItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void NavigationAttached::cancelActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP

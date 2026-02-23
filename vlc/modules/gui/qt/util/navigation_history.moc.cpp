/****************************************************************************
** Meta object code from reading C++ file 'navigation_history.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "navigation_history.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navigation_history.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17NavigationHistoryE_t {};
} // unnamed namespace

template <> constexpr inline auto NavigationHistory::qt_create_metaobjectdata<qt_meta_tag_ZN17NavigationHistoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NavigationHistory",
        "navigate",
        "",
        "Qt::FocusReason",
        "previousEmptyChanged",
        "empty",
        "viewPathChanged",
        "viewPath",
        "viewPropChanged",
        "QQmlPropertyMap*",
        "push",
        "path",
        "QVariantMap",
        "properties",
        "focusReason",
        "update",
        "previous",
        "match",
        "pattern",
        "exactMatch",
        "previousEmpty",
        "viewProp",
        "PostAction",
        "Stay",
        "Go"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'navigate'
        QtMocHelpers::SignalData<void(Qt::FocusReason)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'previousEmptyChanged'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Signal 'viewPathChanged'
        QtMocHelpers::SignalData<void(const QStringList &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 7 },
        }}),
        // Signal 'viewPropChanged'
        QtMocHelpers::SignalData<void(QQmlPropertyMap *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 2 },
        }}),
        // Slot 'push'
        QtMocHelpers::SlotData<void(QStringList, const QVariantMap &, Qt::FocusReason)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 11 }, { 0x80000000 | 12, 13 }, { 0x80000000 | 3, 14 },
        }}),
        // Slot 'push'
        QtMocHelpers::SlotData<void(QStringList, const QVariantMap &)>(10, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QStringList, 11 }, { 0x80000000 | 12, 13 },
        }}),
        // Slot 'push'
        QtMocHelpers::SlotData<void(QStringList, Qt::FocusReason)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 11 }, { 0x80000000 | 3, 14 },
        }}),
        // Slot 'push'
        QtMocHelpers::SlotData<void(QStringList)>(10, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QStringList, 11 },
        }}),
        // Slot 'update'
        QtMocHelpers::SlotData<void(QStringList)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 11 },
        }}),
        // Slot 'update'
        QtMocHelpers::SlotData<void(QStringList, const QVariantMap &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 11 }, { 0x80000000 | 12, 13 },
        }}),
        // Slot 'previous'
        QtMocHelpers::SlotData<void(Qt::FocusReason)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'previous'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Method 'match'
        QtMocHelpers::MethodData<bool(const QStringList &, const QStringList &)>(17, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 11 }, { QMetaType::QStringList, 18 },
        }}),
        // Method 'exactMatch'
        QtMocHelpers::MethodData<bool(const QStringList &, const QStringList &)>(19, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 11 }, { QMetaType::QStringList, 18 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'previousEmpty'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 1),
        // property 'viewPath'
        QtMocHelpers::PropertyData<QStringList>(7, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Final, 2),
        // property 'viewProp'
        QtMocHelpers::PropertyData<QQmlPropertyMap*>(21, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 3),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'PostAction'
        QtMocHelpers::EnumData<enum PostAction>(22, 22, QMC::EnumIsScoped).add({
            {   23, PostAction::Stay },
            {   24, PostAction::Go },
        }),
    };
    return QtMocHelpers::metaObjectData<NavigationHistory, qt_meta_tag_ZN17NavigationHistoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NavigationHistory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17NavigationHistoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17NavigationHistoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17NavigationHistoryE_t>.metaTypes,
    nullptr
} };

void NavigationHistory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NavigationHistory *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->navigate((*reinterpret_cast<std::add_pointer_t<Qt::FocusReason>>(_a[1]))); break;
        case 1: _t->previousEmptyChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->viewPathChanged((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 3: _t->viewPropChanged((*reinterpret_cast<std::add_pointer_t<QQmlPropertyMap*>>(_a[1]))); break;
        case 4: _t->push((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Qt::FocusReason>>(_a[3]))); break;
        case 5: _t->push((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2]))); break;
        case 6: _t->push((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::FocusReason>>(_a[2]))); break;
        case 7: _t->push((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 8: _t->update((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 9: _t->update((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2]))); break;
        case 10: _t->previous((*reinterpret_cast<std::add_pointer_t<Qt::FocusReason>>(_a[1]))); break;
        case 11: _t->previous(); break;
        case 12: { bool _r = _t->match((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->exactMatch((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQmlPropertyMap* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (NavigationHistory::*)(Qt::FocusReason )>(_a, &NavigationHistory::navigate, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationHistory::*)(bool )>(_a, &NavigationHistory::previousEmptyChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationHistory::*)(const QStringList & )>(_a, &NavigationHistory::viewPathChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationHistory::*)(QQmlPropertyMap * )>(_a, &NavigationHistory::viewPropChanged, 3))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlPropertyMap* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isPreviousEmpty(); break;
        case 1: *reinterpret_cast<QStringList*>(_v) = _t->viewPath(); break;
        case 2: *reinterpret_cast<QQmlPropertyMap**>(_v) = _t->viewProp(); break;
        default: break;
        }
    }
}

const QMetaObject *NavigationHistory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavigationHistory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17NavigationHistoryE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NavigationHistory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void NavigationHistory::navigate(Qt::FocusReason _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void NavigationHistory::previousEmptyChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void NavigationHistory::viewPathChanged(const QStringList & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void NavigationHistory::viewPropChanged(QQmlPropertyMap * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP

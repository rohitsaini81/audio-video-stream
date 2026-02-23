/****************************************************************************
** Meta object code from reading C++ file 'colorcontext.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "colorcontext.hpp"
#include "style/systempalette.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorcontext.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13ColorPropertyE_t {};
} // unnamed namespace

template <> constexpr inline auto ColorProperty::qt_create_metaobjectdata<qt_meta_tag_ZN13ColorPropertyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ColorProperty",
        "primary",
        "QColor",
        "secondary",
        "highlight",
        "link",
        "positive",
        "neutral",
        "negative"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'primary'
        QtMocHelpers::PropertyData<QColor>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'secondary'
        QtMocHelpers::PropertyData<QColor>(3, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'highlight'
        QtMocHelpers::PropertyData<QColor>(4, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'link'
        QtMocHelpers::PropertyData<QColor>(5, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'positive'
        QtMocHelpers::PropertyData<QColor>(6, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'neutral'
        QtMocHelpers::PropertyData<QColor>(7, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'negative'
        QtMocHelpers::PropertyData<QColor>(8, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ColorProperty, qt_meta_tag_ZN13ColorPropertyE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ColorProperty::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ColorPropertyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ColorPropertyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13ColorPropertyE_t>.metaTypes,
    nullptr
} };

void ColorProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<ColorProperty *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QColor*>(_v) = _t->primary(); break;
        case 1: *reinterpret_cast<QColor*>(_v) = _t->secondary(); break;
        case 2: *reinterpret_cast<QColor*>(_v) = _t->highlight(); break;
        case 3: *reinterpret_cast<QColor*>(_v) = _t->link(); break;
        case 4: *reinterpret_cast<QColor*>(_v) = _t->positive(); break;
        case 5: *reinterpret_cast<QColor*>(_v) = _t->neutral(); break;
        case 6: *reinterpret_cast<QColor*>(_v) = _t->negative(); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN12ColorContextE_t {};
} // unnamed namespace

template <> constexpr inline auto ColorContext::qt_create_metaobjectdata<qt_meta_tag_ZN12ColorContextE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ColorContext",
        "colorsChanged",
        "",
        "paletteChanged",
        "SystemPalette*",
        "colorSetChanged",
        "ColorSet",
        "enabledChanged",
        "hoveredChanged",
        "focusedChanged",
        "pressedChanged",
        "initializedChanged",
        "sharedStateChanged",
        "palette",
        "colorSet",
        "enabled",
        "hovered",
        "focused",
        "pressed",
        "bg",
        "ColorProperty",
        "fg",
        "visualFocus",
        "QColor",
        "border",
        "separator",
        "indicator",
        "shadow",
        "accent",
        "initialized",
        "View",
        "Window",
        "Item",
        "Badge",
        "ButtonStandard",
        "ButtonAccent",
        "ToolButton",
        "TabButton",
        "MenuBar",
        "Tooltip",
        "Slider",
        "ComboBox",
        "SpinBox",
        "TextField",
        "Switch",
        "ColorSetUndefined"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'colorsChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'paletteChanged'
        QtMocHelpers::SignalData<void(SystemPalette *)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
        // Signal 'colorSetChanged'
        QtMocHelpers::SignalData<void(enum ColorSet)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Signal 'enabledChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hoveredChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'focusedChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pressedChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'initializedChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sharedStateChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'palette'
        QtMocHelpers::PropertyData<SystemPalette*>(13, 0x80000000 | 4, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 1),
        // property 'colorSet'
        QtMocHelpers::PropertyData<enum ColorSet>(14, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 2),
        // property 'enabled'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 3),
        // property 'hovered'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 4),
        // property 'focused'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 5),
        // property 'pressed'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 6),
        // property 'bg'
        QtMocHelpers::PropertyData<ColorProperty>(19, 0x80000000 | 20, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 0),
        // property 'fg'
        QtMocHelpers::PropertyData<ColorProperty>(21, 0x80000000 | 20, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 0),
        // property 'visualFocus'
        QtMocHelpers::PropertyData<QColor>(22, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 0),
        // property 'border'
        QtMocHelpers::PropertyData<QColor>(24, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 0),
        // property 'separator'
        QtMocHelpers::PropertyData<QColor>(25, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 0),
        // property 'indicator'
        QtMocHelpers::PropertyData<QColor>(26, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 0),
        // property 'shadow'
        QtMocHelpers::PropertyData<QColor>(27, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 0),
        // property 'accent'
        QtMocHelpers::PropertyData<QColor>(28, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 0),
        // property 'initialized'
        QtMocHelpers::PropertyData<bool>(29, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 7),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ColorSet'
        QtMocHelpers::EnumData<enum ColorSet>(6, 6, QMC::EnumFlags{}).add({
            {   30, ColorSet::View },
            {   31, ColorSet::Window },
            {   32, ColorSet::Item },
            {   33, ColorSet::Badge },
            {   34, ColorSet::ButtonStandard },
            {   35, ColorSet::ButtonAccent },
            {   36, ColorSet::ToolButton },
            {   37, ColorSet::TabButton },
            {   38, ColorSet::MenuBar },
            {   39, ColorSet::Tooltip },
            {   40, ColorSet::Slider },
            {   41, ColorSet::ComboBox },
            {   42, ColorSet::SpinBox },
            {   43, ColorSet::TextField },
            {   44, ColorSet::Switch },
            {   45, ColorSet::ColorSetUndefined },
        }),
    };
    return QtMocHelpers::metaObjectData<ColorContext, qt_meta_tag_ZN12ColorContextE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ColorContext::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ColorContextE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ColorContextE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12ColorContextE_t>.metaTypes,
    nullptr
} };

void ColorContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ColorContext *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->colorsChanged(); break;
        case 1: _t->paletteChanged((*reinterpret_cast<std::add_pointer_t<SystemPalette*>>(_a[1]))); break;
        case 2: _t->colorSetChanged((*reinterpret_cast<std::add_pointer_t<enum ColorSet>>(_a[1]))); break;
        case 3: _t->enabledChanged(); break;
        case 4: _t->hoveredChanged(); break;
        case 5: _t->focusedChanged(); break;
        case 6: _t->pressedChanged(); break;
        case 7: _t->initializedChanged(); break;
        case 8: _t->sharedStateChanged(QPrivateSignal()); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ColorContext::*)()>(_a, &ColorContext::colorsChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColorContext::*)(SystemPalette * )>(_a, &ColorContext::paletteChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColorContext::*)(ColorSet )>(_a, &ColorContext::colorSetChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColorContext::*)()>(_a, &ColorContext::enabledChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColorContext::*)()>(_a, &ColorContext::hoveredChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColorContext::*)()>(_a, &ColorContext::focusedChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColorContext::*)()>(_a, &ColorContext::pressedChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColorContext::*)()>(_a, &ColorContext::initializedChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColorContext::*)(QPrivateSignal)>(_a, &ColorContext::sharedStateChanged, 8))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ColorProperty >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<SystemPalette**>(_v) = _t->palette(); break;
        case 1: *reinterpret_cast<enum ColorSet*>(_v) = _t->colorSet(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->enabled(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->hovered(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->focused(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->pressed(); break;
        case 6: *reinterpret_cast<ColorProperty*>(_v) = _t->bg(); break;
        case 7: *reinterpret_cast<ColorProperty*>(_v) = _t->fg(); break;
        case 8: *reinterpret_cast<QColor*>(_v) = _t->visualFocus(); break;
        case 9: *reinterpret_cast<QColor*>(_v) = _t->border(); break;
        case 10: *reinterpret_cast<QColor*>(_v) = _t->separator(); break;
        case 11: *reinterpret_cast<QColor*>(_v) = _t->indicator(); break;
        case 12: *reinterpret_cast<QColor*>(_v) = _t->shadow(); break;
        case 13: *reinterpret_cast<QColor*>(_v) = _t->accent(); break;
        case 14: *reinterpret_cast<bool*>(_v) = _t->initialized(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPalette(*reinterpret_cast<SystemPalette**>(_v)); break;
        case 1: _t->setColorSet(*reinterpret_cast<enum ColorSet*>(_v)); break;
        case 2: _t->setEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setHovered(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setFocused(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setPressed(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *ColorContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorContext::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ColorContextE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int ColorContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void ColorContext::colorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ColorContext::paletteChanged(SystemPalette * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void ColorContext::colorSetChanged(ColorSet _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void ColorContext::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ColorContext::hoveredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ColorContext::focusedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ColorContext::pressedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ColorContext::initializedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ColorContext::sharedStateChanged(QPrivateSignal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN17ColorContextStateE_t {};
} // unnamed namespace

template <> constexpr inline auto ColorContextState::qt_create_metaobjectdata<qt_meta_tag_ZN17ColorContextStateE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ColorContextState",
        "stateChanged",
        "",
        "colorsChanged",
        "enabledChanged",
        "hoveredChanged",
        "focusedChanged",
        "pressedChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'stateChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'colorsChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enabledChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hoveredChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'focusedChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pressedChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ColorContextState, qt_meta_tag_ZN17ColorContextStateE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ColorContextState::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ColorContextStateE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ColorContextStateE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17ColorContextStateE_t>.metaTypes,
    nullptr
} };

void ColorContextState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ColorContextState *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->stateChanged(); break;
        case 1: _t->colorsChanged(); break;
        case 2: _t->enabledChanged(); break;
        case 3: _t->hoveredChanged(); break;
        case 4: _t->focusedChanged(); break;
        case 5: _t->pressedChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ColorContextState::*)()>(_a, &ColorContextState::stateChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColorContextState::*)()>(_a, &ColorContextState::colorsChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColorContextState::*)()>(_a, &ColorContextState::enabledChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColorContextState::*)()>(_a, &ColorContextState::hoveredChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColorContextState::*)()>(_a, &ColorContextState::focusedChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColorContextState::*)()>(_a, &ColorContextState::pressedChanged, 5))
            return;
    }
}

const QMetaObject *ColorContextState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorContextState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ColorContextStateE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ColorContextState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ColorContextState::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ColorContextState::colorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ColorContextState::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ColorContextState::hoveredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ColorContextState::focusedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ColorContextState::pressedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP

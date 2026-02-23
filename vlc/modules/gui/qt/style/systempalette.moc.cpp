/****************************************************************************
** Meta object code from reading C++ file 'systempalette.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "systempalette.hpp"
#include "style/systempalette.hpp"
#include "maininterface/mainctx.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systempalette.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10CSDMetricsE_t {};
} // unnamed namespace

template <> constexpr inline auto CSDMetrics::qt_create_metaobjectdata<qt_meta_tag_ZN10CSDMetricsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CSDMetrics",
        "interNavButtonSpacing",
        "csdFrameMarginLeft",
        "csdFrameMarginRight",
        "csdFrameMarginTop",
        "csdFrameMarginBottom"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'interNavButtonSpacing'
        QtMocHelpers::PropertyData<int>(1, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'csdFrameMarginLeft'
        QtMocHelpers::PropertyData<int>(2, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'csdFrameMarginRight'
        QtMocHelpers::PropertyData<int>(3, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'csdFrameMarginTop'
        QtMocHelpers::PropertyData<int>(4, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'csdFrameMarginBottom'
        QtMocHelpers::PropertyData<int>(5, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CSDMetrics, qt_meta_tag_ZN10CSDMetricsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CSDMetrics::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10CSDMetricsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10CSDMetricsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10CSDMetricsE_t>.metaTypes,
    nullptr
} };

void CSDMetrics::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CSDMetrics *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->interNavButtonSpacing; break;
        case 1: *reinterpret_cast<int*>(_v) = _t->csdFrameMarginLeft; break;
        case 2: *reinterpret_cast<int*>(_v) = _t->csdFrameMarginRight; break;
        case 3: *reinterpret_cast<int*>(_v) = _t->csdFrameMarginTop; break;
        case 4: *reinterpret_cast<int*>(_v) = _t->csdFrameMarginBottom; break;
        default: break;
        }
    }
}

const QMetaObject *CSDMetrics::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CSDMetrics::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10CSDMetricsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CSDMetrics::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN19ExternalPaletteImplE_t {};
} // unnamed namespace

template <> constexpr inline auto ExternalPaletteImpl::qt_create_metaobjectdata<qt_meta_tag_ZN19ExternalPaletteImplE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExternalPaletteImpl",
        "paletteChanged",
        "",
        "CSDMetricsChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'paletteChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'CSDMetricsChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExternalPaletteImpl, qt_meta_tag_ZN19ExternalPaletteImplE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExternalPaletteImpl::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ExternalPaletteImplE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ExternalPaletteImplE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19ExternalPaletteImplE_t>.metaTypes,
    nullptr
} };

void ExternalPaletteImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExternalPaletteImpl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->paletteChanged(); break;
        case 1: _t->CSDMetricsChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ExternalPaletteImpl::*)()>(_a, &ExternalPaletteImpl::paletteChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExternalPaletteImpl::*)()>(_a, &ExternalPaletteImpl::CSDMetricsChanged, 1))
            return;
    }
}

const QMetaObject *ExternalPaletteImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExternalPaletteImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ExternalPaletteImplE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ExternalPaletteImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ExternalPaletteImpl::paletteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ExternalPaletteImpl::CSDMetricsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {
struct qt_meta_tag_ZN13SystemPaletteE_t {};
} // unnamed namespace

template <> constexpr inline auto SystemPalette::qt_create_metaobjectdata<qt_meta_tag_ZN13SystemPaletteE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SystemPalette",
        "sourceChanged",
        "",
        "paletteChanged",
        "hasCSDImageChanged",
        "ctxChanged",
        "CSDMetricsChanged",
        "setSource",
        "ColorSchemeModel::ColorScheme",
        "source",
        "setCtx",
        "MainCtx*",
        "ctx",
        "isDark",
        "hasCSDImage",
        "csdMetrics",
        "CSDMetrics*",
        "orange500",
        "QColor",
        "orange800",
        "orange400",
        "orange200",
        "darkGrey200",
        "darkGrey300",
        "darkGrey400",
        "darkGrey500",
        "darkGrey600",
        "darkGrey700",
        "darkGrey800",
        "lightGrey100",
        "lightGrey200",
        "lightGrey300",
        "lightGrey400",
        "lightGrey500",
        "lightGrey600",
        "lightGrey700",
        "red500"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'sourceChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'paletteChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hasCSDImageChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ctxChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'CSDMetricsChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setSource'
        QtMocHelpers::SlotData<void(ColorSchemeModel::ColorScheme)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'setCtx'
        QtMocHelpers::SlotData<void(MainCtx *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'ctx'
        QtMocHelpers::PropertyData<MainCtx*>(12, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 3),
        // property 'source'
        QtMocHelpers::PropertyData<ColorSchemeModel::ColorScheme>(9, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 0),
        // property 'isDark'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 1),
        // property 'hasCSDImage'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 2),
        // property 'csdMetrics'
        QtMocHelpers::PropertyData<CSDMetrics*>(15, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 4),
        // property 'orange500'
        QtMocHelpers::PropertyData<QColor>(17, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'orange800'
        QtMocHelpers::PropertyData<QColor>(19, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'orange400'
        QtMocHelpers::PropertyData<QColor>(20, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'orange200'
        QtMocHelpers::PropertyData<QColor>(21, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'darkGrey200'
        QtMocHelpers::PropertyData<QColor>(22, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'darkGrey300'
        QtMocHelpers::PropertyData<QColor>(23, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'darkGrey400'
        QtMocHelpers::PropertyData<QColor>(24, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'darkGrey500'
        QtMocHelpers::PropertyData<QColor>(25, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'darkGrey600'
        QtMocHelpers::PropertyData<QColor>(26, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'darkGrey700'
        QtMocHelpers::PropertyData<QColor>(27, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'darkGrey800'
        QtMocHelpers::PropertyData<QColor>(28, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'lightGrey100'
        QtMocHelpers::PropertyData<QColor>(29, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'lightGrey200'
        QtMocHelpers::PropertyData<QColor>(30, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'lightGrey300'
        QtMocHelpers::PropertyData<QColor>(31, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'lightGrey400'
        QtMocHelpers::PropertyData<QColor>(32, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'lightGrey500'
        QtMocHelpers::PropertyData<QColor>(33, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'lightGrey600'
        QtMocHelpers::PropertyData<QColor>(34, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'lightGrey700'
        QtMocHelpers::PropertyData<QColor>(35, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'red500'
        QtMocHelpers::PropertyData<QColor>(36, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SystemPalette, qt_meta_tag_ZN13SystemPaletteE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN13SystemPaletteE[] = {
    QMetaObject::SuperData::link<ColorSchemeModel::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject SystemPalette::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SystemPaletteE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SystemPaletteE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN13SystemPaletteE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13SystemPaletteE_t>.metaTypes,
    nullptr
} };

void SystemPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SystemPalette *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sourceChanged(); break;
        case 1: _t->paletteChanged(); break;
        case 2: _t->hasCSDImageChanged(); break;
        case 3: _t->ctxChanged(); break;
        case 4: _t->CSDMetricsChanged(); break;
        case 5: _t->setSource((*reinterpret_cast<std::add_pointer_t<ColorSchemeModel::ColorScheme>>(_a[1]))); break;
        case 6: _t->setCtx((*reinterpret_cast<std::add_pointer_t<MainCtx*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SystemPalette::*)()>(_a, &SystemPalette::sourceChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemPalette::*)()>(_a, &SystemPalette::paletteChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemPalette::*)()>(_a, &SystemPalette::hasCSDImageChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemPalette::*)()>(_a, &SystemPalette::ctxChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemPalette::*)()>(_a, &SystemPalette::CSDMetricsChanged, 4))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CSDMetrics* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<MainCtx**>(_v) = _t->getCtx(); break;
        case 1: *reinterpret_cast<ColorSchemeModel::ColorScheme*>(_v) = _t->source(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->m_isDark; break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->hasCSDImage(); break;
        case 4: *reinterpret_cast<CSDMetrics**>(_v) = _t->getCSDMetrics(); break;
        case 5: *reinterpret_cast<QColor*>(_v) = _t->get_orange500(); break;
        case 6: *reinterpret_cast<QColor*>(_v) = _t->get_orange800(); break;
        case 7: *reinterpret_cast<QColor*>(_v) = _t->get_orange400(); break;
        case 8: *reinterpret_cast<QColor*>(_v) = _t->get_orange200(); break;
        case 9: *reinterpret_cast<QColor*>(_v) = _t->get_darkGrey200(); break;
        case 10: *reinterpret_cast<QColor*>(_v) = _t->get_darkGrey300(); break;
        case 11: *reinterpret_cast<QColor*>(_v) = _t->get_darkGrey400(); break;
        case 12: *reinterpret_cast<QColor*>(_v) = _t->get_darkGrey500(); break;
        case 13: *reinterpret_cast<QColor*>(_v) = _t->get_darkGrey600(); break;
        case 14: *reinterpret_cast<QColor*>(_v) = _t->get_darkGrey700(); break;
        case 15: *reinterpret_cast<QColor*>(_v) = _t->get_darkGrey800(); break;
        case 16: *reinterpret_cast<QColor*>(_v) = _t->get_lightGrey100(); break;
        case 17: *reinterpret_cast<QColor*>(_v) = _t->get_lightGrey200(); break;
        case 18: *reinterpret_cast<QColor*>(_v) = _t->get_lightGrey300(); break;
        case 19: *reinterpret_cast<QColor*>(_v) = _t->get_lightGrey400(); break;
        case 20: *reinterpret_cast<QColor*>(_v) = _t->get_lightGrey500(); break;
        case 21: *reinterpret_cast<QColor*>(_v) = _t->get_lightGrey600(); break;
        case 22: *reinterpret_cast<QColor*>(_v) = _t->get_lightGrey700(); break;
        case 23: *reinterpret_cast<QColor*>(_v) = _t->get_red500(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCtx(*reinterpret_cast<MainCtx**>(_v)); break;
        case 1: _t->setSource(*reinterpret_cast<ColorSchemeModel::ColorScheme*>(_v)); break;
        case 2:
            if (QtMocHelpers::setProperty(_t->m_isDark, *reinterpret_cast<bool*>(_v)))
                Q_EMIT _t->paletteChanged();
            break;
        default: break;
        }
    }
}

const QMetaObject *SystemPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SystemPaletteE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void SystemPalette::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SystemPalette::paletteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SystemPalette::hasCSDImageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SystemPalette::ctxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SystemPalette::CSDMetricsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP

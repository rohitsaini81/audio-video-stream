/****************************************************************************
** Meta object code from reading C++ file 'preferences_widgets.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "preferences_widgets.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preferences_widgets.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22InterfacePreviewWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto InterfacePreviewWidget::qt_create_metaobjectdata<qt_meta_tag_ZN22InterfacePreviewWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "InterfacePreviewWidget",
        "setPreview",
        "",
        "enum_style",
        "setNormalPreview",
        "b_minimal"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setPreview'
        QtMocHelpers::SlotData<void(enum enum_style)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'setNormalPreview'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InterfacePreviewWidget, qt_meta_tag_ZN22InterfacePreviewWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject InterfacePreviewWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22InterfacePreviewWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22InterfacePreviewWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22InterfacePreviewWidgetE_t>.metaTypes,
    nullptr
} };

void InterfacePreviewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InterfacePreviewWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setPreview((*reinterpret_cast<std::add_pointer_t<enum enum_style>>(_a[1]))); break;
        case 1: _t->setNormalPreview((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *InterfacePreviewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterfacePreviewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22InterfacePreviewWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int InterfacePreviewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN13ConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto ConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN13ConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ConfigControl",
        "changed",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'changed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ConfigControl, qt_meta_tag_ZN13ConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13ConfigControlE_t>.metaTypes,
    nullptr
} };

void ConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ConfigControl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ConfigControl::*)()>(_a, &ConfigControl::changed, 0))
            return;
    }
}

const QMetaObject *ConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void ConfigControl::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN17VIntConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto VIntConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN17VIntConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VIntConfigControl"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VIntConfigControl, qt_meta_tag_ZN17VIntConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VIntConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<ConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17VIntConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17VIntConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17VIntConfigControlE_t>.metaTypes,
    nullptr
} };

void VIntConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VIntConfigControl *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *VIntConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VIntConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17VIntConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return ConfigControl::qt_metacast(_clname);
}

int VIntConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigControl::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN20IntegerConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto IntegerConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN20IntegerConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "IntegerConfigControl"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<IntegerConfigControl, qt_meta_tag_ZN20IntegerConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject IntegerConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<VIntConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20IntegerConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20IntegerConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20IntegerConfigControlE_t>.metaTypes,
    nullptr
} };

void IntegerConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IntegerConfigControl *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *IntegerConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IntegerConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20IntegerConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return VIntConfigControl::qt_metacast(_clname);
}

int IntegerConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VIntConfigControl::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN25IntegerRangeConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto IntegerRangeConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN25IntegerRangeConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "IntegerRangeConfigControl"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<IntegerRangeConfigControl, qt_meta_tag_ZN25IntegerRangeConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject IntegerRangeConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<IntegerConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25IntegerRangeConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25IntegerRangeConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25IntegerRangeConfigControlE_t>.metaTypes,
    nullptr
} };

void IntegerRangeConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IntegerRangeConfigControl *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *IntegerRangeConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IntegerRangeConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25IntegerRangeConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return IntegerConfigControl::qt_metacast(_clname);
}

int IntegerRangeConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IntegerConfigControl::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN31IntegerRangeSliderConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto IntegerRangeSliderConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN31IntegerRangeSliderConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "IntegerRangeSliderConfigControl"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<IntegerRangeSliderConfigControl, qt_meta_tag_ZN31IntegerRangeSliderConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject IntegerRangeSliderConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<VIntConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN31IntegerRangeSliderConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN31IntegerRangeSliderConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN31IntegerRangeSliderConfigControlE_t>.metaTypes,
    nullptr
} };

void IntegerRangeSliderConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IntegerRangeSliderConfigControl *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *IntegerRangeSliderConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IntegerRangeSliderConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN31IntegerRangeSliderConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return VIntConfigControl::qt_metacast(_clname);
}

int IntegerRangeSliderConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VIntConfigControl::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN24IntegerListConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto IntegerListConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN24IntegerListConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "IntegerListConfigControl"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<IntegerListConfigControl, qt_meta_tag_ZN24IntegerListConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject IntegerListConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<VIntConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24IntegerListConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24IntegerListConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN24IntegerListConfigControlE_t>.metaTypes,
    nullptr
} };

void IntegerListConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IntegerListConfigControl *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *IntegerListConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IntegerListConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24IntegerListConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return VIntConfigControl::qt_metacast(_clname);
}

int IntegerListConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VIntConfigControl::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN17BoolConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto BoolConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN17BoolConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BoolConfigControl"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BoolConfigControl, qt_meta_tag_ZN17BoolConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BoolConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<VIntConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17BoolConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17BoolConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17BoolConfigControlE_t>.metaTypes,
    nullptr
} };

void BoolConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BoolConfigControl *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *BoolConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoolConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17BoolConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return VIntConfigControl::qt_metacast(_clname);
}

int BoolConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VIntConfigControl::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN18ColorConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto ColorConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN18ColorConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ColorConfigControl",
        "selectColor",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'selectColor'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ColorConfigControl, qt_meta_tag_ZN18ColorConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ColorConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<VIntConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ColorConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ColorConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18ColorConfigControlE_t>.metaTypes,
    nullptr
} };

void ColorConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ColorConfigControl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectColor(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ColorConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ColorConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return VIntConfigControl::qt_metacast(_clname);
}

int ColorConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VIntConfigControl::qt_metacall(_c, _id, _a);
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
struct qt_meta_tag_ZN19VFloatConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto VFloatConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN19VFloatConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VFloatConfigControl"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VFloatConfigControl, qt_meta_tag_ZN19VFloatConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VFloatConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<ConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19VFloatConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19VFloatConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19VFloatConfigControlE_t>.metaTypes,
    nullptr
} };

void VFloatConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VFloatConfigControl *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *VFloatConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VFloatConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19VFloatConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return ConfigControl::qt_metacast(_clname);
}

int VFloatConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigControl::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN18FloatConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto FloatConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN18FloatConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FloatConfigControl"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FloatConfigControl, qt_meta_tag_ZN18FloatConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FloatConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<VFloatConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18FloatConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18FloatConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18FloatConfigControlE_t>.metaTypes,
    nullptr
} };

void FloatConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FloatConfigControl *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *FloatConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FloatConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18FloatConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return VFloatConfigControl::qt_metacast(_clname);
}

int FloatConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VFloatConfigControl::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN23FloatRangeConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto FloatRangeConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN23FloatRangeConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FloatRangeConfigControl"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FloatRangeConfigControl, qt_meta_tag_ZN23FloatRangeConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FloatRangeConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<FloatConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23FloatRangeConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23FloatRangeConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23FloatRangeConfigControlE_t>.metaTypes,
    nullptr
} };

void FloatRangeConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FloatRangeConfigControl *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *FloatRangeConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FloatRangeConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23FloatRangeConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return FloatConfigControl::qt_metacast(_clname);
}

int FloatRangeConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FloatConfigControl::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN20VStringConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto VStringConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN20VStringConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VStringConfigControl"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VStringConfigControl, qt_meta_tag_ZN20VStringConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VStringConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<ConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20VStringConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20VStringConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20VStringConfigControlE_t>.metaTypes,
    nullptr
} };

void VStringConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VStringConfigControl *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *VStringConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VStringConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20VStringConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return ConfigControl::qt_metacast(_clname);
}

int VStringConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigControl::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN19StringConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto StringConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN19StringConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "StringConfigControl"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<StringConfigControl, qt_meta_tag_ZN19StringConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject StringConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<VStringConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19StringConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19StringConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19StringConfigControlE_t>.metaTypes,
    nullptr
} };

void StringConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<StringConfigControl *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *StringConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StringConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19StringConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return VStringConfigControl::qt_metacast(_clname);
}

int StringConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN21PasswordConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto PasswordConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN21PasswordConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PasswordConfigControl"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PasswordConfigControl, qt_meta_tag_ZN21PasswordConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PasswordConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<StringConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21PasswordConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21PasswordConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21PasswordConfigControlE_t>.metaTypes,
    nullptr
} };

void PasswordConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PasswordConfigControl *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *PasswordConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PasswordConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21PasswordConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return StringConfigControl::qt_metacast(_clname);
}

int PasswordConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StringConfigControl::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN17FileConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto FileConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN17FileConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FileConfigControl",
        "updateField",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'updateField'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FileConfigControl, qt_meta_tag_ZN17FileConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FileConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<VStringConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17FileConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17FileConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17FileConfigControlE_t>.metaTypes,
    nullptr
} };

void FileConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FileConfigControl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateField(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *FileConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17FileConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return VStringConfigControl::qt_metacast(_clname);
}

int FileConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
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
struct qt_meta_tag_ZN22DirectoryConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto DirectoryConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN22DirectoryConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DirectoryConfigControl",
        "updateField",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'updateField'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DirectoryConfigControl, qt_meta_tag_ZN22DirectoryConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DirectoryConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<FileConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22DirectoryConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22DirectoryConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22DirectoryConfigControlE_t>.metaTypes,
    nullptr
} };

void DirectoryConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DirectoryConfigControl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateField(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *DirectoryConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DirectoryConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22DirectoryConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return FileConfigControl::qt_metacast(_clname);
}

int DirectoryConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileConfigControl::qt_metacall(_c, _id, _a);
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
struct qt_meta_tag_ZN17FontConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto FontConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN17FontConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FontConfigControl"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FontConfigControl, qt_meta_tag_ZN17FontConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FontConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<VStringConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17FontConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17FontConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17FontConfigControlE_t>.metaTypes,
    nullptr
} };

void FontConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FontConfigControl *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *FontConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FontConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17FontConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return VStringConfigControl::qt_metacast(_clname);
}

int FontConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN19ModuleConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto ModuleConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN19ModuleConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ModuleConfigControl"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ModuleConfigControl, qt_meta_tag_ZN19ModuleConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ModuleConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<VStringConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ModuleConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ModuleConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19ModuleConfigControlE_t>.metaTypes,
    nullptr
} };

void ModuleConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ModuleConfigControl *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *ModuleConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModuleConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ModuleConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return VStringConfigControl::qt_metacast(_clname);
}

int ModuleConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN23ModuleListConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto ModuleListConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN23ModuleListConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ModuleListConfigControl",
        "onUpdate",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onUpdate'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ModuleListConfigControl, qt_meta_tag_ZN23ModuleListConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ModuleListConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<VStringConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23ModuleListConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23ModuleListConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23ModuleListConfigControlE_t>.metaTypes,
    nullptr
} };

void ModuleListConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ModuleListConfigControl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onUpdate(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ModuleListConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModuleListConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23ModuleListConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return VStringConfigControl::qt_metacast(_clname);
}

int ModuleListConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
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
struct qt_meta_tag_ZN23StringListConfigControlE_t {};
} // unnamed namespace

template <> constexpr inline auto StringListConfigControl::qt_create_metaobjectdata<qt_meta_tag_ZN23StringListConfigControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "StringListConfigControl",
        "comboIndexChanged",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'comboIndexChanged'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<StringListConfigControl, qt_meta_tag_ZN23StringListConfigControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject StringListConfigControl::staticMetaObject = { {
    QMetaObject::SuperData::link<VStringConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23StringListConfigControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23StringListConfigControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23StringListConfigControlE_t>.metaTypes,
    nullptr
} };

void StringListConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<StringListConfigControl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->comboIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *StringListConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StringListConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23StringListConfigControlE_t>.strings))
        return static_cast<void*>(this);
    return VStringConfigControl::qt_metacast(_clname);
}

int StringListConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
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
struct qt_meta_tag_ZN18KeySelectorControlE_t {};
} // unnamed namespace

template <> constexpr inline auto KeySelectorControl::qt_create_metaobjectdata<qt_meta_tag_ZN18KeySelectorControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KeySelectorControl",
        "selectKey",
        "",
        "QTreeWidgetItem*",
        "filter"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'selectKey'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'filter'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<KeySelectorControl, qt_meta_tag_ZN18KeySelectorControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KeySelectorControl::staticMetaObject = { {
    QMetaObject::SuperData::link<ConfigControl::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18KeySelectorControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18KeySelectorControlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18KeySelectorControlE_t>.metaTypes,
    nullptr
} };

void KeySelectorControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KeySelectorControl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectKey((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->filter(); break;
        default: ;
        }
    }
}

const QMetaObject *KeySelectorControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeySelectorControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18KeySelectorControlE_t>.strings))
        return static_cast<void*>(this);
    return ConfigControl::qt_metacast(_clname);
}

int KeySelectorControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigControl::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN14KeyInputDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto KeyInputDialog::qt_create_metaobjectdata<qt_meta_tag_ZN14KeyInputDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KeyInputDialog",
        "unsetAction",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'unsetAction'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<KeyInputDialog, qt_meta_tag_ZN14KeyInputDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KeyInputDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14KeyInputDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14KeyInputDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14KeyInputDialogE_t>.metaTypes,
    nullptr
} };

void KeyInputDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KeyInputDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->unsetAction(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *KeyInputDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeyInputDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14KeyInputDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int KeyInputDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_tag_ZN17KeyConflictDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto KeyConflictDialog::qt_create_metaobjectdata<qt_meta_tag_ZN17KeyConflictDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KeyConflictDialog"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<KeyConflictDialog, qt_meta_tag_ZN17KeyConflictDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KeyConflictDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17KeyConflictDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17KeyConflictDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17KeyConflictDialogE_t>.metaTypes,
    nullptr
} };

void KeyConflictDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KeyConflictDialog *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KeyConflictDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeyConflictDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17KeyConflictDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int KeyConflictDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP

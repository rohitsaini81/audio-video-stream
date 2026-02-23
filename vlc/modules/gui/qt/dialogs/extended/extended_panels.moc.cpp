/****************************************************************************
** Meta object code from reading C++ file 'extended_panels.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "extended_panels.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extended_panels.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8ExtVideoE_t {};
} // unnamed namespace

template <> constexpr inline auto ExtVideo::qt_create_metaobjectdata<qt_meta_tag_ZN8ExtVideoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExtVideo",
        "configChanged",
        "",
        "name",
        "QVariant",
        "value",
        "updateFilters",
        "updateFilterOptions",
        "cropChange",
        "browseLogo",
        "browseEraseFile"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'configChanged'
        QtMocHelpers::SignalData<void(QString, QVariant)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Slot 'updateFilters'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateFilterOptions'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'cropChange'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'browseLogo'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'browseEraseFile'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExtVideo, qt_meta_tag_ZN8ExtVideoE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExtVideo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8ExtVideoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8ExtVideoE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8ExtVideoE_t>.metaTypes,
    nullptr
} };

void ExtVideo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExtVideo *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->configChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 1: _t->updateFilters(); break;
        case 2: _t->updateFilterOptions(); break;
        case 3: _t->cropChange(); break;
        case 4: _t->browseLogo(); break;
        case 5: _t->browseEraseFile(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ExtVideo::*)(QString , QVariant )>(_a, &ExtVideo::configChanged, 0))
            return;
    }
}

const QMetaObject *ExtVideo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtVideo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8ExtVideoE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ExtVideo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ExtVideo::configChanged(QString _t1, QVariant _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN7ExtV4l2E_t {};
} // unnamed namespace

template <> constexpr inline auto ExtV4l2::qt_create_metaobjectdata<qt_meta_tag_ZN7ExtV4l2E_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExtV4l2",
        "Refresh",
        "",
        "ValueChange",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'Refresh'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ValueChange'
        QtMocHelpers::SlotData<void(int)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Slot 'ValueChange'
        QtMocHelpers::SlotData<void(bool)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExtV4l2, qt_meta_tag_ZN7ExtV4l2E_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExtV4l2::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7ExtV4l2E_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7ExtV4l2E_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7ExtV4l2E_t>.metaTypes,
    nullptr
} };

void ExtV4l2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExtV4l2 *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->Refresh(); break;
        case 1: _t->ValueChange((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->ValueChange((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ExtV4l2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtV4l2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7ExtV4l2E_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ExtV4l2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN16FilterSliderDataE_t {};
} // unnamed namespace

template <> constexpr inline auto FilterSliderData::qt_create_metaobjectdata<qt_meta_tag_ZN16FilterSliderDataE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FilterSliderData",
        "configChanged",
        "",
        "name",
        "QVariant",
        "value",
        "onValueChanged",
        "i",
        "updateText"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'configChanged'
        QtMocHelpers::SignalData<void(QString, QVariant)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Slot 'onValueChanged'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'updateText'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FilterSliderData, qt_meta_tag_ZN16FilterSliderDataE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FilterSliderData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16FilterSliderDataE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16FilterSliderDataE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16FilterSliderDataE_t>.metaTypes,
    nullptr
} };

void FilterSliderData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FilterSliderData *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->configChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 1: _t->onValueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->updateText((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FilterSliderData::*)(QString , QVariant )>(_a, &FilterSliderData::configChanged, 0))
            return;
    }
}

const QMetaObject *FilterSliderData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilterSliderData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16FilterSliderDataE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FilterSliderData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void FilterSliderData::configChanged(QString _t1, QVariant _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN24AudioFilterControlWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto AudioFilterControlWidget::qt_create_metaobjectdata<qt_meta_tag_ZN24AudioFilterControlWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AudioFilterControlWidget",
        "configChanged",
        "",
        "name",
        "QVariant",
        "value",
        "enable"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'configChanged'
        QtMocHelpers::SignalData<void(QString, QVariant)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Slot 'enable'
        QtMocHelpers::SlotData<void(bool)>(6, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AudioFilterControlWidget, qt_meta_tag_ZN24AudioFilterControlWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AudioFilterControlWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24AudioFilterControlWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24AudioFilterControlWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN24AudioFilterControlWidgetE_t>.metaTypes,
    nullptr
} };

void AudioFilterControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AudioFilterControlWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->configChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 1: _t->enable((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AudioFilterControlWidget::*)(QString , QVariant )>(_a, &AudioFilterControlWidget::configChanged, 0))
            return;
    }
}

const QMetaObject *AudioFilterControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioFilterControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24AudioFilterControlWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AudioFilterControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void AudioFilterControlWidget::configChanged(QString _t1, QVariant _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN19EqualizerSliderDataE_t {};
} // unnamed namespace

template <> constexpr inline auto EqualizerSliderData::qt_create_metaobjectdata<qt_meta_tag_ZN19EqualizerSliderDataE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EqualizerSliderData",
        "onValueChanged",
        "",
        "i"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onValueChanged'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EqualizerSliderData, qt_meta_tag_ZN19EqualizerSliderDataE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EqualizerSliderData::staticMetaObject = { {
    QMetaObject::SuperData::link<FilterSliderData::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19EqualizerSliderDataE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19EqualizerSliderDataE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19EqualizerSliderDataE_t>.metaTypes,
    nullptr
} };

void EqualizerSliderData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EqualizerSliderData *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onValueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *EqualizerSliderData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EqualizerSliderData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19EqualizerSliderDataE_t>.strings))
        return static_cast<void*>(this);
    return FilterSliderData::qt_metacast(_clname);
}

int EqualizerSliderData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FilterSliderData::qt_metacall(_c, _id, _a);
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
struct qt_meta_tag_ZN9EqualizerE_t {};
} // unnamed namespace

template <> constexpr inline auto Equalizer::qt_create_metaobjectdata<qt_meta_tag_ZN9EqualizerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Equalizer",
        "setCorePreset",
        "",
        "enable2Pass"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setCorePreset'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'enable2Pass'
        QtMocHelpers::SlotData<void(bool)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Equalizer, qt_meta_tag_ZN9EqualizerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Equalizer::staticMetaObject = { {
    QMetaObject::SuperData::link<AudioFilterControlWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9EqualizerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9EqualizerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9EqualizerE_t>.metaTypes,
    nullptr
} };

void Equalizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Equalizer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setCorePreset((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->enable2Pass((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Equalizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Equalizer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9EqualizerE_t>.strings))
        return static_cast<void*>(this);
    return AudioFilterControlWidget::qt_metacast(_clname);
}

int Equalizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioFilterControlWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_tag_ZN10CompressorE_t {};
} // unnamed namespace

template <> constexpr inline auto Compressor::qt_create_metaobjectdata<qt_meta_tag_ZN10CompressorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Compressor"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Compressor, qt_meta_tag_ZN10CompressorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Compressor::staticMetaObject = { {
    QMetaObject::SuperData::link<AudioFilterControlWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10CompressorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10CompressorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10CompressorE_t>.metaTypes,
    nullptr
} };

void Compressor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Compressor *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Compressor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Compressor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10CompressorE_t>.strings))
        return static_cast<void*>(this);
    return AudioFilterControlWidget::qt_metacast(_clname);
}

int Compressor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioFilterControlWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN11SpatializerE_t {};
} // unnamed namespace

template <> constexpr inline auto Spatializer::qt_create_metaobjectdata<qt_meta_tag_ZN11SpatializerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Spatializer"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Spatializer, qt_meta_tag_ZN11SpatializerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Spatializer::staticMetaObject = { {
    QMetaObject::SuperData::link<AudioFilterControlWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11SpatializerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11SpatializerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11SpatializerE_t>.metaTypes,
    nullptr
} };

void Spatializer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Spatializer *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Spatializer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Spatializer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11SpatializerE_t>.strings))
        return static_cast<void*>(this);
    return AudioFilterControlWidget::qt_metacast(_clname);
}

int Spatializer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioFilterControlWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN13StereoWidenerE_t {};
} // unnamed namespace

template <> constexpr inline auto StereoWidener::qt_create_metaobjectdata<qt_meta_tag_ZN13StereoWidenerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "StereoWidener"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<StereoWidener, qt_meta_tag_ZN13StereoWidenerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject StereoWidener::staticMetaObject = { {
    QMetaObject::SuperData::link<AudioFilterControlWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13StereoWidenerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13StereoWidenerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13StereoWidenerE_t>.metaTypes,
    nullptr
} };

void StereoWidener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<StereoWidener *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *StereoWidener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StereoWidener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13StereoWidenerE_t>.strings))
        return static_cast<void*>(this);
    return AudioFilterControlWidget::qt_metacast(_clname);
}

int StereoWidener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioFilterControlWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN12PitchShifterE_t {};
} // unnamed namespace

template <> constexpr inline auto PitchShifter::qt_create_metaobjectdata<qt_meta_tag_ZN12PitchShifterE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PitchShifter"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PitchShifter, qt_meta_tag_ZN12PitchShifterE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PitchShifter::staticMetaObject = { {
    QMetaObject::SuperData::link<AudioFilterControlWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12PitchShifterE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12PitchShifterE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12PitchShifterE_t>.metaTypes,
    nullptr
} };

void PitchShifter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PitchShifter *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *PitchShifter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PitchShifter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12PitchShifterE_t>.strings))
        return static_cast<void*>(this);
    return AudioFilterControlWidget::qt_metacast(_clname);
}

int PitchShifter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioFilterControlWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN12StereoPannerE_t {};
} // unnamed namespace

template <> constexpr inline auto StereoPanner::qt_create_metaobjectdata<qt_meta_tag_ZN12StereoPannerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "StereoPanner"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<StereoPanner, qt_meta_tag_ZN12StereoPannerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject StereoPanner::staticMetaObject = { {
    QMetaObject::SuperData::link<AudioFilterControlWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12StereoPannerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12StereoPannerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12StereoPannerE_t>.metaTypes,
    nullptr
} };

void StereoPanner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<StereoPanner *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *StereoPanner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StereoPanner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12StereoPannerE_t>.strings))
        return static_cast<void*>(this);
    return AudioFilterControlWidget::qt_metacast(_clname);
}

int StereoPanner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioFilterControlWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN10SyncWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto SyncWidget::qt_create_metaobjectdata<qt_meta_tag_ZN10SyncWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SyncWidget",
        "valueChanged",
        "",
        "valueChangedHandler",
        "d"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(double)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 2 },
        }}),
        // Slot 'valueChangedHandler'
        QtMocHelpers::SlotData<void(double)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SyncWidget, qt_meta_tag_ZN10SyncWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SyncWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SyncWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SyncWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10SyncWidgetE_t>.metaTypes,
    nullptr
} };

void SyncWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SyncWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->valueChangedHandler((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SyncWidget::*)(double )>(_a, &SyncWidget::valueChanged, 0))
            return;
    }
}

const QMetaObject *SyncWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SyncWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SyncWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SyncWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void SyncWidget::valueChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN12SyncControlsE_t {};
} // unnamed namespace

template <> constexpr inline auto SyncControls::qt_create_metaobjectdata<qt_meta_tag_ZN12SyncControlsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SyncControls",
        "update",
        "",
        "advanceAudio",
        "advanceSubs",
        "advanceSecondarySubs",
        "adjustSubsSpeed",
        "adjustSubsDuration"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'advanceAudio'
        QtMocHelpers::SlotData<void(double)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 2 },
        }}),
        // Slot 'advanceSubs'
        QtMocHelpers::SlotData<void(double)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 2 },
        }}),
        // Slot 'advanceSecondarySubs'
        QtMocHelpers::SlotData<void(double)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 2 },
        }}),
        // Slot 'adjustSubsSpeed'
        QtMocHelpers::SlotData<void(double)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 2 },
        }}),
        // Slot 'adjustSubsDuration'
        QtMocHelpers::SlotData<void(double)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SyncControls, qt_meta_tag_ZN12SyncControlsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SyncControls::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SyncControlsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SyncControlsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12SyncControlsE_t>.metaTypes,
    nullptr
} };

void SyncControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SyncControls *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->advanceAudio((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->advanceSubs((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->advanceSecondarySubs((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->adjustSubsSpeed((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->adjustSubsDuration((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *SyncControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SyncControls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SyncControlsE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SyncControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP

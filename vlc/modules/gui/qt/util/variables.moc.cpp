/****************************************************************************
** Meta object code from reading C++ file 'variables.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "variables.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'variables.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8QVLCBoolE_t {};
} // unnamed namespace

template <> constexpr inline auto QVLCBool::qt_create_metaobjectdata<qt_meta_tag_ZN8QVLCBoolE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QVLCBool",
        "valueChanged",
        "",
        "valueChangedInternal",
        "vlc_object_t*",
        "setValue",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'valueChangedInternal'
        QtMocHelpers::SignalData<void(vlc_object_t *, bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 }, { QMetaType::Bool, 2 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'value'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QVLCBool, qt_meta_tag_ZN8QVLCBoolE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QVLCBool::staticMetaObject = { {
    QMetaObject::SuperData::link<QVLCVariable<QVLCBool,bool>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8QVLCBoolE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8QVLCBoolE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8QVLCBoolE_t>.metaTypes,
    nullptr
} };

void QVLCBool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QVLCBool *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->valueChangedInternal((*reinterpret_cast<std::add_pointer_t<vlc_object_t*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 2: _t->setValue((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QVLCBool::*)(bool )>(_a, &QVLCBool::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QVLCBool::*)(vlc_object_t * , bool )>(_a, &QVLCBool::valueChangedInternal, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->getValue(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QVLCBool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVLCBool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8QVLCBoolE_t>.strings))
        return static_cast<void*>(this);
    return QVLCVariable<QVLCBool,bool>::qt_metacast(_clname);
}

int QVLCBool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCVariable<QVLCBool,bool>::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QVLCBool::valueChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QVLCBool::valueChangedInternal(vlc_object_t * _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN10QVLCStringE_t {};
} // unnamed namespace

template <> constexpr inline auto QVLCString::qt_create_metaobjectdata<qt_meta_tag_ZN10QVLCStringE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QVLCString",
        "valueChanged",
        "",
        "valueChangedInternal",
        "vlc_object_t*",
        "setValue",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'valueChangedInternal'
        QtMocHelpers::SignalData<void(vlc_object_t *, QString)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 }, { QMetaType::QString, 2 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(const QString &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'value'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QVLCString, qt_meta_tag_ZN10QVLCStringE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QVLCString::staticMetaObject = { {
    QMetaObject::SuperData::link<QVLCVariable<QVLCString,QString>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10QVLCStringE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10QVLCStringE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10QVLCStringE_t>.metaTypes,
    nullptr
} };

void QVLCString::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QVLCString *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->valueChangedInternal((*reinterpret_cast<std::add_pointer_t<vlc_object_t*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->setValue((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QVLCString::*)(QString )>(_a, &QVLCString::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QVLCString::*)(vlc_object_t * , QString )>(_a, &QVLCString::valueChangedInternal, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->getValue(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QVLCString::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVLCString::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10QVLCStringE_t>.strings))
        return static_cast<void*>(this);
    return QVLCVariable<QVLCString,QString>::qt_metacast(_clname);
}

int QVLCString::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCVariable<QVLCString,QString>::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QVLCString::valueChanged(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QVLCString::valueChangedInternal(vlc_object_t * _t1, QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN9QVLCFloatE_t {};
} // unnamed namespace

template <> constexpr inline auto QVLCFloat::qt_create_metaobjectdata<qt_meta_tag_ZN9QVLCFloatE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QVLCFloat",
        "valueChanged",
        "",
        "valueChangedInternal",
        "vlc_object_t*",
        "setValue",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(float)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 2 },
        }}),
        // Signal 'valueChangedInternal'
        QtMocHelpers::SignalData<void(vlc_object_t *, float)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 }, { QMetaType::Float, 2 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(float)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'value'
        QtMocHelpers::PropertyData<float>(6, QMetaType::Float, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QVLCFloat, qt_meta_tag_ZN9QVLCFloatE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QVLCFloat::staticMetaObject = { {
    QMetaObject::SuperData::link<QVLCVariable<QVLCFloat,float>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9QVLCFloatE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9QVLCFloatE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9QVLCFloatE_t>.metaTypes,
    nullptr
} };

void QVLCFloat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QVLCFloat *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 1: _t->valueChangedInternal((*reinterpret_cast<std::add_pointer_t<vlc_object_t*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[2]))); break;
        case 2: _t->setValue((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QVLCFloat::*)(float )>(_a, &QVLCFloat::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QVLCFloat::*)(vlc_object_t * , float )>(_a, &QVLCFloat::valueChangedInternal, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<float*>(_v) = _t->getValue(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast<float*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QVLCFloat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVLCFloat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9QVLCFloatE_t>.strings))
        return static_cast<void*>(this);
    return QVLCVariable<QVLCFloat,float>::qt_metacast(_clname);
}

int QVLCFloat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCVariable<QVLCFloat,float>::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QVLCFloat::valueChanged(float _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QVLCFloat::valueChangedInternal(vlc_object_t * _t1, float _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN11QVLCIntegerE_t {};
} // unnamed namespace

template <> constexpr inline auto QVLCInteger::qt_create_metaobjectdata<qt_meta_tag_ZN11QVLCIntegerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QVLCInteger",
        "valueChanged",
        "",
        "int64_t",
        "valueChangedInternal",
        "vlc_object_t*",
        "setValue",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(int64_t)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'valueChangedInternal'
        QtMocHelpers::SignalData<void(vlc_object_t *, int64_t)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 }, { 0x80000000 | 3, 2 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(int64_t)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'value'
        QtMocHelpers::PropertyData<int64_t>(7, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QVLCInteger, qt_meta_tag_ZN11QVLCIntegerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QVLCInteger::staticMetaObject = { {
    QMetaObject::SuperData::link<QVLCVariable<QVLCInteger,int64_t>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11QVLCIntegerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11QVLCIntegerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11QVLCIntegerE_t>.metaTypes,
    nullptr
} };

void QVLCInteger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QVLCInteger *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast<std::add_pointer_t<int64_t>>(_a[1]))); break;
        case 1: _t->valueChangedInternal((*reinterpret_cast<std::add_pointer_t<vlc_object_t*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int64_t>>(_a[2]))); break;
        case 2: _t->setValue((*reinterpret_cast<std::add_pointer_t<int64_t>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QVLCInteger::*)(int64_t )>(_a, &QVLCInteger::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QVLCInteger::*)(vlc_object_t * , int64_t )>(_a, &QVLCInteger::valueChangedInternal, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int64_t*>(_v) = _t->getValue(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast<int64_t*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QVLCInteger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVLCInteger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11QVLCIntegerE_t>.strings))
        return static_cast<void*>(this);
    return QVLCVariable<QVLCInteger,int64_t>::qt_metacast(_clname);
}

int QVLCInteger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCVariable<QVLCInteger,int64_t>::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QVLCInteger::valueChanged(int64_t _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QVLCInteger::valueChangedInternal(vlc_object_t * _t1, int64_t _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
QT_WARNING_POP

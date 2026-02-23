/****************************************************************************
** Meta object code from reading C++ file 'delay_estimator.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "delay_estimator.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'delay_estimator.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14DelayEstimatorE_t {};
} // unnamed namespace

template <> constexpr inline auto DelayEstimator::qt_create_metaobjectdata<qt_meta_tag_ZN14DelayEstimatorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DelayEstimator",
        "heardTimeChanged",
        "",
        "spottedTimeChanged",
        "delayChanged",
        "markHeardTime",
        "markSpottedTime",
        "reset",
        "isHeardTimeMarked",
        "isSpottedTimeMarked",
        "delay",
        "VLCDuration"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'heardTimeChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'spottedTimeChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'delayChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'markHeardTime'
        QtMocHelpers::MethodData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'markSpottedTime'
        QtMocHelpers::MethodData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'reset'
        QtMocHelpers::MethodData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'isHeardTimeMarked'
        QtMocHelpers::PropertyData<bool>(8, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 0),
        // property 'isSpottedTimeMarked'
        QtMocHelpers::PropertyData<bool>(9, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 1),
        // property 'delay'
        QtMocHelpers::PropertyData<VLCDuration>(10, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DelayEstimator, qt_meta_tag_ZN14DelayEstimatorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DelayEstimator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14DelayEstimatorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14DelayEstimatorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14DelayEstimatorE_t>.metaTypes,
    nullptr
} };

void DelayEstimator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DelayEstimator *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->heardTimeChanged(); break;
        case 1: _t->spottedTimeChanged(); break;
        case 2: _t->delayChanged(); break;
        case 3: _t->markHeardTime(); break;
        case 4: _t->markSpottedTime(); break;
        case 5: _t->reset(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DelayEstimator::*)()>(_a, &DelayEstimator::heardTimeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DelayEstimator::*)()>(_a, &DelayEstimator::spottedTimeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DelayEstimator::*)()>(_a, &DelayEstimator::delayChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isHeardTimeMarked(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isSpottedTimeMarked(); break;
        case 2: *reinterpret_cast<VLCDuration*>(_v) = _t->getDelay(); break;
        default: break;
        }
    }
}

const QMetaObject *DelayEstimator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DelayEstimator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14DelayEstimatorE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DelayEstimator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DelayEstimator::heardTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DelayEstimator::spottedTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DelayEstimator::delayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP

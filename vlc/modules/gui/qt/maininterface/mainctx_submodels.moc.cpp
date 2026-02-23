/****************************************************************************
** Meta object code from reading C++ file 'mainctx_submodels.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainctx_submodels.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainctx_submodels.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9SearchCtxE_t {};
} // unnamed namespace

template <> constexpr inline auto SearchCtx::qt_create_metaobjectdata<qt_meta_tag_ZN9SearchCtxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SearchCtx",
        "askShow",
        "",
        "patternChanged",
        "pattern",
        "availableChanged",
        "available"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'askShow'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'patternChanged'
        QtMocHelpers::SignalData<void(const QString &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Signal 'availableChanged'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'pattern'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 1),
        // property 'available'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SearchCtx, qt_meta_tag_ZN9SearchCtxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SearchCtx::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SearchCtxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SearchCtxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9SearchCtxE_t>.metaTypes,
    nullptr
} };

void SearchCtx::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SearchCtx *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->askShow(); break;
        case 1: _t->patternChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->availableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SearchCtx::*)()>(_a, &SearchCtx::askShow, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SearchCtx::*)(const QString & )>(_a, &SearchCtx::patternChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SearchCtx::*)(bool )>(_a, &SearchCtx::availableChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->m_pattern; break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->m_available; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (QtMocHelpers::setProperty(_t->m_pattern, *reinterpret_cast<QString*>(_v)))
                Q_EMIT _t->patternChanged(_t->m_pattern);
            break;
        case 1:
            if (QtMocHelpers::setProperty(_t->m_available, *reinterpret_cast<bool*>(_v)))
                Q_EMIT _t->availableChanged(_t->m_available);
            break;
        default: break;
        }
    }
}

const QMetaObject *SearchCtx::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchCtx::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SearchCtxE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SearchCtx::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SearchCtx::askShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SearchCtx::patternChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void SearchCtx::availableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN7SortCtxE_t {};
} // unnamed namespace

template <> constexpr inline auto SortCtx::qt_create_metaobjectdata<qt_meta_tag_ZN7SortCtxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SortCtx",
        "askShow",
        "",
        "availableChanged",
        "available",
        "modelChanged",
        "QJSValue",
        "model",
        "criteriaChanged",
        "criteria",
        "orderChanged",
        "Qt::SortOrder",
        "order"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'askShow'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'availableChanged'
        QtMocHelpers::SignalData<void(bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'modelChanged'
        QtMocHelpers::SignalData<void(const QJSValue &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'criteriaChanged'
        QtMocHelpers::SignalData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Signal 'orderChanged'
        QtMocHelpers::SignalData<void(const Qt::SortOrder &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'available'
        QtMocHelpers::PropertyData<bool>(4, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 1),
        // property 'model'
        QtMocHelpers::PropertyData<QJSValue>(7, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 2),
        // property 'criteria'
        QtMocHelpers::PropertyData<QString>(9, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 3),
        // property 'order'
        QtMocHelpers::PropertyData<Qt::SortOrder>(12, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 4),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SortCtx, qt_meta_tag_ZN7SortCtxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SortCtx::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7SortCtxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7SortCtxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7SortCtxE_t>.metaTypes,
    nullptr
} };

void SortCtx::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SortCtx *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->askShow(); break;
        case 1: _t->availableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->modelChanged((*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[1]))); break;
        case 3: _t->criteriaChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->orderChanged((*reinterpret_cast<std::add_pointer_t<Qt::SortOrder>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SortCtx::*)()>(_a, &SortCtx::askShow, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SortCtx::*)(bool )>(_a, &SortCtx::availableChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SortCtx::*)(const QJSValue & )>(_a, &SortCtx::modelChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SortCtx::*)(const QString & )>(_a, &SortCtx::criteriaChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SortCtx::*)(const Qt::SortOrder & )>(_a, &SortCtx::orderChanged, 4))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->getAvailable(); break;
        case 1: *reinterpret_cast<QJSValue*>(_v) = _t->getModel(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->getCriteria(); break;
        case 3: *reinterpret_cast<Qt::SortOrder*>(_v) = _t->m_order; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAvailable(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setModel(*reinterpret_cast<QJSValue*>(_v)); break;
        case 2: _t->setCriteria(*reinterpret_cast<QString*>(_v)); break;
        case 3:
            if (QtMocHelpers::setProperty(_t->m_order, *reinterpret_cast<Qt::SortOrder*>(_v)))
                Q_EMIT _t->orderChanged(_t->m_order);
            break;
        default: break;
        }
    }
}

const QMetaObject *SortCtx::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SortCtx::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7SortCtxE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SortCtx::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SortCtx::askShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SortCtx::availableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void SortCtx::modelChanged(const QJSValue & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void SortCtx::criteriaChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void SortCtx::orderChanged(const Qt::SortOrder & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP

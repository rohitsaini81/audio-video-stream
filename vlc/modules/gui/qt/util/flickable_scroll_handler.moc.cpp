/****************************************************************************
** Meta object code from reading C++ file 'flickable_scroll_handler.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "flickable_scroll_handler.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flickable_scroll_handler.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22FlickableScrollHandlerE_t {};
} // unnamed namespace

template <> constexpr inline auto FlickableScrollHandler::qt_create_metaobjectdata<qt_meta_tag_ZN22FlickableScrollHandlerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FlickableScrollHandler",
        "initialized",
        "",
        "scaleFactorChanged",
        "enabledChanged",
        "effectiveScaleFactorChanged",
        "fallbackScrollChanged",
        "handleOnlyPixelDeltaChanged",
        "adjustScrollBarV",
        "adjustScrollBarH",
        "parent",
        "scaleFactor",
        "effectiveScaleFactor",
        "enabled",
        "fallbackScroll",
        "handleOnlyPixelDelta"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'initialized'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scaleFactorChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enabledChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'effectiveScaleFactorChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fallbackScrollChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'handleOnlyPixelDeltaChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'adjustScrollBarV'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'adjustScrollBarH'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'parent'
        QtMocHelpers::PropertyData<QObject*>(10, QMetaType::QObjectStar, QMC::DefaultPropertyFlags | QMC::Final, 0),
        // property 'scaleFactor'
        QtMocHelpers::PropertyData<qreal>(11, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 1),
        // property 'effectiveScaleFactor'
        QtMocHelpers::PropertyData<qreal>(12, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Final, 3),
        // property 'enabled'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 2),
        // property 'fallbackScroll'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 4),
        // property 'handleOnlyPixelDelta'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 5),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FlickableScrollHandler, qt_meta_tag_ZN22FlickableScrollHandlerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FlickableScrollHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22FlickableScrollHandlerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22FlickableScrollHandlerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22FlickableScrollHandlerE_t>.metaTypes,
    nullptr
} };

void FlickableScrollHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FlickableScrollHandler *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->initialized(); break;
        case 1: _t->scaleFactorChanged(); break;
        case 2: _t->enabledChanged(); break;
        case 3: _t->effectiveScaleFactorChanged(); break;
        case 4: _t->fallbackScrollChanged(); break;
        case 5: _t->handleOnlyPixelDeltaChanged(); break;
        case 6: _t->adjustScrollBarV(); break;
        case 7: _t->adjustScrollBarH(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FlickableScrollHandler::*)()>(_a, &FlickableScrollHandler::initialized, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlickableScrollHandler::*)()>(_a, &FlickableScrollHandler::scaleFactorChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlickableScrollHandler::*)()>(_a, &FlickableScrollHandler::enabledChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlickableScrollHandler::*)()>(_a, &FlickableScrollHandler::effectiveScaleFactorChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlickableScrollHandler::*)()>(_a, &FlickableScrollHandler::fallbackScrollChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlickableScrollHandler::*)()>(_a, &FlickableScrollHandler::handleOnlyPixelDeltaChanged, 5))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QObject**>(_v) = _t->parent(); break;
        case 1: *reinterpret_cast<qreal*>(_v) = _t->scaleFactor(); break;
        case 2: *reinterpret_cast<qreal*>(_v) = _t->effectiveScaleFactor(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->enabled(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->m_fallbackScroll; break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->m_handleOnlyPixelDelta; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setScaleFactor(*reinterpret_cast<qreal*>(_v)); break;
        case 3: _t->setEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 4:
            if (QtMocHelpers::setProperty(_t->m_fallbackScroll, *reinterpret_cast<bool*>(_v)))
                Q_EMIT _t->fallbackScrollChanged();
            break;
        case 5:
            if (QtMocHelpers::setProperty(_t->m_handleOnlyPixelDelta, *reinterpret_cast<bool*>(_v)))
                Q_EMIT _t->handleOnlyPixelDeltaChanged();
            break;
        default: break;
        }
    }
}

const QMetaObject *FlickableScrollHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlickableScrollHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22FlickableScrollHandlerE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int FlickableScrollHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void FlickableScrollHandler::initialized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FlickableScrollHandler::scaleFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FlickableScrollHandler::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FlickableScrollHandler::effectiveScaleFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FlickableScrollHandler::fallbackScrollChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void FlickableScrollHandler::handleOnlyPixelDeltaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP

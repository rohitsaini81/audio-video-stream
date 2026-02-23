/****************************************************************************
** Meta object code from reading C++ file 'csdbuttonmodel.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "csdbuttonmodel.hpp"
#include "maininterface/mainctx.hpp"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'csdbuttonmodel.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9CSDButtonE_t {};
} // unnamed namespace

template <> constexpr inline auto CSDButton::qt_create_metaobjectdata<qt_meta_tag_ZN9CSDButtonE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CSDButton",
        "showHoveredChanged",
        "",
        "rectChanged",
        "clicked",
        "doubleClicked",
        "externalPressedChanged",
        "click",
        "doubleClick",
        "type",
        "ButtonType",
        "showHovered",
        "rect",
        "QRect",
        "externalPressed",
        "Minimize",
        "MaximizeRestore",
        "Close",
        "SystemMenu",
        "TypeCount"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showHoveredChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rectChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'clicked'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'doubleClicked'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'externalPressedChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'click'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'doubleClick'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'type'
        QtMocHelpers::PropertyData<enum ButtonType>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'showHovered'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'rect'
        QtMocHelpers::PropertyData<QRect>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'externalPressed'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 4),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ButtonType'
        QtMocHelpers::EnumData<enum ButtonType>(10, 10, QMC::EnumFlags{}).add({
            {   15, ButtonType::Minimize },
            {   16, ButtonType::MaximizeRestore },
            {   17, ButtonType::Close },
            {   18, ButtonType::SystemMenu },
            {   19, ButtonType::TypeCount },
        }),
    };
    return QtMocHelpers::metaObjectData<CSDButton, qt_meta_tag_ZN9CSDButtonE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CSDButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9CSDButtonE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9CSDButtonE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9CSDButtonE_t>.metaTypes,
    nullptr
} };

void CSDButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CSDButton *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showHoveredChanged(); break;
        case 1: _t->rectChanged(); break;
        case 2: _t->clicked(); break;
        case 3: _t->doubleClicked(); break;
        case 4: _t->externalPressedChanged(); break;
        case 5: _t->click(); break;
        case 6: _t->doubleClick(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CSDButton::*)()>(_a, &CSDButton::showHoveredChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CSDButton::*)()>(_a, &CSDButton::rectChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CSDButton::*)()>(_a, &CSDButton::clicked, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CSDButton::*)()>(_a, &CSDButton::doubleClicked, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (CSDButton::*)()>(_a, &CSDButton::externalPressedChanged, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum ButtonType*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->showHovered(); break;
        case 2: *reinterpret_cast<QRect*>(_v) = _t->rect(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->externalPressed(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setShowHovered(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setRect(*reinterpret_cast<QRect*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *CSDButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CSDButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9CSDButtonE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CSDButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CSDButton::showHoveredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CSDButton::rectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CSDButton::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CSDButton::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CSDButton::externalPressedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
namespace {
struct qt_meta_tag_ZN14CSDButtonModelE_t {};
} // unnamed namespace

template <> constexpr inline auto CSDButtonModel::qt_create_metaobjectdata<qt_meta_tag_ZN14CSDButtonModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CSDButtonModel",
        "minimizeButtonClicked",
        "",
        "maximizeRestoreButtonClicked",
        "closeButtonClicked",
        "windowCSDButtons",
        "QList<CSDButton*>"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'minimizeButtonClicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'maximizeRestoreButtonClicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'closeButtonClicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'windowCSDButtons'
        QtMocHelpers::PropertyData<QList<CSDButton*>>(5, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CSDButtonModel, qt_meta_tag_ZN14CSDButtonModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CSDButtonModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14CSDButtonModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14CSDButtonModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14CSDButtonModelE_t>.metaTypes,
    nullptr
} };

void CSDButtonModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CSDButtonModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->minimizeButtonClicked(); break;
        case 1: _t->maximizeRestoreButtonClicked(); break;
        case 2: _t->closeButtonClicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<CSDButton*> >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QList<CSDButton*>*>(_v) = _t->windowCSDButtons(); break;
        default: break;
        }
    }
}

const QMetaObject *CSDButtonModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CSDButtonModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14CSDButtonModelE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CSDButtonModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP

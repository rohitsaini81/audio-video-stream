/****************************************************************************
** Meta object code from reading C++ file 'csdthemeimage.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "csdthemeimage.hpp"
#include "style/systempalette.hpp"
#include "maininterface/mainctx.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'csdthemeimage.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13CSDThemeImageE_t {};
} // unnamed namespace

template <> constexpr inline auto CSDThemeImage::qt_create_metaobjectdata<qt_meta_tag_ZN13CSDThemeImageE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CSDThemeImage",
        "requestContentUpdate",
        "",
        "themeChanged",
        "buttonTypeChanged",
        "buttonStateChanged",
        "bannerHeightChanged",
        "windowMaximizedChanged",
        "windowActiveChanged",
        "updateContent",
        "theme",
        "SystemPalette*",
        "buttonType",
        "ButtonType",
        "buttonState",
        "ButtonState",
        "bannerHeight",
        "windowMaximized",
        "windowActive",
        "MAXIMIZE",
        "MINIMIZE",
        "RESTORE",
        "CLOSE",
        "DISABLED",
        "HOVERED",
        "NORMAL",
        "PRESSED"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'requestContentUpdate'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'themeChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'buttonTypeChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'buttonStateChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'bannerHeightChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowMaximizedChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowActiveChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateContent'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'theme'
        QtMocHelpers::PropertyData<SystemPalette*>(10, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'buttonType'
        QtMocHelpers::PropertyData<enum ButtonType>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'buttonState'
        QtMocHelpers::PropertyData<enum ButtonState>(14, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'bannerHeight'
        QtMocHelpers::PropertyData<int>(16, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'windowMaximized'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'windowActive'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ButtonType'
        QtMocHelpers::EnumData<enum ButtonType>(13, 13, QMC::EnumFlags{}).add({
            {   19, ButtonType::MAXIMIZE },
            {   20, ButtonType::MINIMIZE },
            {   21, ButtonType::RESTORE },
            {   22, ButtonType::CLOSE },
        }),
        // enum 'ButtonState'
        QtMocHelpers::EnumData<enum ButtonState>(15, 15, QMC::EnumFlags{}).add({
            {   23, ButtonState::DISABLED },
            {   24, ButtonState::HOVERED },
            {   25, ButtonState::NORMAL },
            {   26, ButtonState::PRESSED },
        }),
    };
    return QtMocHelpers::metaObjectData<CSDThemeImage, qt_meta_tag_ZN13CSDThemeImageE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CSDThemeImage::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13CSDThemeImageE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13CSDThemeImageE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13CSDThemeImageE_t>.metaTypes,
    nullptr
} };

void CSDThemeImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CSDThemeImage *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->requestContentUpdate(); break;
        case 1: _t->themeChanged(); break;
        case 2: _t->buttonTypeChanged(); break;
        case 3: _t->buttonStateChanged(); break;
        case 4: _t->bannerHeightChanged(); break;
        case 5: _t->windowMaximizedChanged(); break;
        case 6: _t->windowActiveChanged(); break;
        case 7: _t->updateContent(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CSDThemeImage::*)()>(_a, &CSDThemeImage::requestContentUpdate, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CSDThemeImage::*)()>(_a, &CSDThemeImage::themeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CSDThemeImage::*)()>(_a, &CSDThemeImage::buttonTypeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CSDThemeImage::*)()>(_a, &CSDThemeImage::buttonStateChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (CSDThemeImage::*)()>(_a, &CSDThemeImage::bannerHeightChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (CSDThemeImage::*)()>(_a, &CSDThemeImage::windowMaximizedChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (CSDThemeImage::*)()>(_a, &CSDThemeImage::windowActiveChanged, 6))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SystemPalette* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<SystemPalette**>(_v) = _t->getTheme(); break;
        case 1: *reinterpret_cast<enum ButtonType*>(_v) = _t->getButtonType(); break;
        case 2: *reinterpret_cast<enum ButtonState*>(_v) = _t->getButtonState(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->getBannerHeight(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->getWindowMaximized(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->getWindowActive(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTheme(*reinterpret_cast<SystemPalette**>(_v)); break;
        case 1: _t->setButtonType(*reinterpret_cast<enum ButtonType*>(_v)); break;
        case 2: _t->setButtonState(*reinterpret_cast<enum ButtonState*>(_v)); break;
        case 3: _t->setBannerHeight(*reinterpret_cast<int*>(_v)); break;
        case 4: _t->setWindowMaximized(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setWindowActive(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *CSDThemeImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CSDThemeImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13CSDThemeImageE_t>.strings))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int CSDThemeImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
void CSDThemeImage::requestContentUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CSDThemeImage::themeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CSDThemeImage::buttonTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CSDThemeImage::buttonStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CSDThemeImage::bannerHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void CSDThemeImage::windowMaximizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void CSDThemeImage::windowActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP

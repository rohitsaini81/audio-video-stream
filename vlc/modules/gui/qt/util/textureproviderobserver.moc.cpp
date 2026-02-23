/****************************************************************************
** Meta object code from reading C++ file 'textureproviderobserver.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "textureproviderobserver.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textureproviderobserver.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23TextureProviderObserverE_t {};
} // unnamed namespace

template <> constexpr inline auto TextureProviderObserver::qt_create_metaobjectdata<qt_meta_tag_ZN23TextureProviderObserverE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TextureProviderObserver",
        "notifyAllChangesChanged",
        "",
        "sourceChanged",
        "textureSizeChanged",
        "QSize",
        "nativeTextureSizeChanged",
        "normalizedTextureSubRectChanged",
        "QRectF",
        "hasAlphaChannelChanged",
        "hasMipmapsChanged",
        "isAtlasTextureChanged",
        "isValidChanged",
        "comparisonKeyChanged",
        "updateProperties",
        "resetProperties",
        "std::memory_order",
        "memoryOrder",
        "source",
        "const QQuickItem*",
        "notifyAllChanges",
        "textureSize",
        "nativeTextureSize",
        "normalizedTextureSubRect",
        "comparisonKey",
        "hasAlphaChannel",
        "hasMipmaps",
        "isAtlasTexture",
        "isValid"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'notifyAllChangesChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sourceChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'textureSizeChanged'
        QtMocHelpers::SignalData<void(const QSize &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Signal 'nativeTextureSizeChanged'
        QtMocHelpers::SignalData<void(const QSize &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Signal 'normalizedTextureSubRectChanged'
        QtMocHelpers::SignalData<void(const QRectF &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
        // Signal 'hasAlphaChannelChanged'
        QtMocHelpers::SignalData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'hasMipmapsChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'isAtlasTextureChanged'
        QtMocHelpers::SignalData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'isValidChanged'
        QtMocHelpers::SignalData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'comparisonKeyChanged'
        QtMocHelpers::SignalData<void(qint64)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 2 },
        }}),
        // Slot 'updateProperties'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'resetProperties'
        QtMocHelpers::SlotData<void(std::memory_order)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Slot 'resetProperties'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'source'
        QtMocHelpers::PropertyData<const QQuickItem*>(18, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 1),
        // property 'notifyAllChanges'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 0),
        // property 'textureSize'
        QtMocHelpers::PropertyData<QSize>(21, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 2),
        // property 'nativeTextureSize'
        QtMocHelpers::PropertyData<QSize>(22, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 3),
        // property 'normalizedTextureSubRect'
        QtMocHelpers::PropertyData<QRectF>(23, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 4),
        // property 'comparisonKey'
        QtMocHelpers::PropertyData<qint64>(24, QMetaType::LongLong, QMC::DefaultPropertyFlags | QMC::Final, 9),
        // property 'hasAlphaChannel'
        QtMocHelpers::PropertyData<bool>(25, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 5),
        // property 'hasMipmaps'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 6),
        // property 'isAtlasTexture'
        QtMocHelpers::PropertyData<bool>(27, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 7),
        // property 'isValid'
        QtMocHelpers::PropertyData<bool>(28, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 8),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TextureProviderObserver, qt_meta_tag_ZN23TextureProviderObserverE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TextureProviderObserver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23TextureProviderObserverE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23TextureProviderObserverE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23TextureProviderObserverE_t>.metaTypes,
    nullptr
} };

void TextureProviderObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TextureProviderObserver *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->notifyAllChangesChanged(); break;
        case 1: _t->sourceChanged(); break;
        case 2: _t->textureSizeChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 3: _t->nativeTextureSizeChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 4: _t->normalizedTextureSubRectChanged((*reinterpret_cast<std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 5: _t->hasAlphaChannelChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->hasMipmapsChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->isAtlasTextureChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->isValidChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->comparisonKeyChanged((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 10: _t->updateProperties(); break;
        case 11: _t->resetProperties((*reinterpret_cast<std::add_pointer_t<std::memory_order>>(_a[1]))); break;
        case 12: _t->resetProperties(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TextureProviderObserver::*)()>(_a, &TextureProviderObserver::notifyAllChangesChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureProviderObserver::*)()>(_a, &TextureProviderObserver::sourceChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureProviderObserver::*)(const QSize & )>(_a, &TextureProviderObserver::textureSizeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureProviderObserver::*)(const QSize & )>(_a, &TextureProviderObserver::nativeTextureSizeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureProviderObserver::*)(const QRectF & )>(_a, &TextureProviderObserver::normalizedTextureSubRectChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureProviderObserver::*)(bool )>(_a, &TextureProviderObserver::hasAlphaChannelChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureProviderObserver::*)(bool )>(_a, &TextureProviderObserver::hasMipmapsChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureProviderObserver::*)(bool )>(_a, &TextureProviderObserver::isAtlasTextureChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureProviderObserver::*)(bool )>(_a, &TextureProviderObserver::isValidChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureProviderObserver::*)(qint64 )>(_a, &TextureProviderObserver::comparisonKeyChanged, 9))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<const QQuickItem**>(_v) = _t->m_source; break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->m_notifyAllChanges; break;
        case 2: *reinterpret_cast<QSize*>(_v) = _t->textureSize(); break;
        case 3: *reinterpret_cast<QSize*>(_v) = _t->nativeTextureSize(); break;
        case 4: *reinterpret_cast<QRectF*>(_v) = _t->normalizedTextureSubRect(); break;
        case 5: *reinterpret_cast<qint64*>(_v) = _t->comparisonKey(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->hasAlphaChannel(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->hasMipmaps(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->isAtlasTexture(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->isValid(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast<const QQuickItem**>(_v)); break;
        case 1:
            if (QtMocHelpers::setProperty(_t->m_notifyAllChanges, *reinterpret_cast<bool*>(_v)))
                Q_EMIT _t->notifyAllChangesChanged();
            break;
        default: break;
        }
    }
}

const QMetaObject *TextureProviderObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextureProviderObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23TextureProviderObserverE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TextureProviderObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void TextureProviderObserver::notifyAllChangesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TextureProviderObserver::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TextureProviderObserver::textureSizeChanged(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void TextureProviderObserver::nativeTextureSizeChanged(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void TextureProviderObserver::normalizedTextureSubRectChanged(const QRectF & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void TextureProviderObserver::hasAlphaChannelChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void TextureProviderObserver::hasMipmapsChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void TextureProviderObserver::isAtlasTextureChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void TextureProviderObserver::isValidChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void TextureProviderObserver::comparisonKeyChanged(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}
QT_WARNING_POP

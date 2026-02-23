/****************************************************************************
** Meta object code from reading C++ file 'textureprovideritem.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "textureprovideritem.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textureprovideritem.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22QSGTextureViewProviderE_t {};
} // unnamed namespace

template <> constexpr inline auto QSGTextureViewProvider::qt_create_metaobjectdata<qt_meta_tag_ZN22QSGTextureViewProviderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QSGTextureViewProvider"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QSGTextureViewProvider, qt_meta_tag_ZN22QSGTextureViewProviderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QSGTextureViewProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QSGTextureProvider::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QSGTextureViewProviderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QSGTextureViewProviderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22QSGTextureViewProviderE_t>.metaTypes,
    nullptr
} };

void QSGTextureViewProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QSGTextureViewProvider *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QSGTextureViewProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSGTextureViewProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QSGTextureViewProviderE_t>.strings))
        return static_cast<void*>(this);
    return QSGTextureProvider::qt_metacast(_clname);
}

int QSGTextureViewProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSGTextureProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN19TextureProviderItemE_t {};
} // unnamed namespace

template <> constexpr inline auto TextureProviderItem::qt_create_metaobjectdata<qt_meta_tag_ZN19TextureProviderItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TextureProviderItem",
        "QML.Element",
        "auto",
        "sourceChanged",
        "",
        "const QQuickItem*",
        "source",
        "rectChanged",
        "QRect",
        "rect",
        "anisotropyLevelChanged",
        "QSGTexture::AnisotropyLevel",
        "filteringChanged",
        "QSGTexture::Filtering",
        "mipmapFilteringChanged",
        "horizontalWrapModeChanged",
        "QSGTexture::WrapMode",
        "verticalWrapModeChanged",
        "detachAtlasTexturesChanged",
        "invalidateSceneGraph",
        "textureSubRect",
        "detachAtlasTextures",
        "anisotropyLevel",
        "horizontalWrapMode",
        "verticalWrapMode",
        "filtering",
        "mipmapFiltering",
        "_WrapMode",
        "Repeat",
        "ClampToEdge",
        "MirroredRepeat",
        "_Filtering",
        "None",
        "Nearest",
        "Linear",
        "_AnisotropyLevel",
        "AnisotropyNone",
        "Anisotropy2x",
        "Anisotropy4x",
        "Anisotropy8x",
        "Anisotropy16x"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'sourceChanged'
        QtMocHelpers::SignalData<void(const QQuickItem *)>(3, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'rectChanged'
        QtMocHelpers::SignalData<void(const QRect &)>(7, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'anisotropyLevelChanged'
        QtMocHelpers::SignalData<void(QSGTexture::AnisotropyLevel)>(10, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 4 },
        }}),
        // Signal 'filteringChanged'
        QtMocHelpers::SignalData<void(QSGTexture::Filtering)>(12, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 4 },
        }}),
        // Signal 'mipmapFilteringChanged'
        QtMocHelpers::SignalData<void(QSGTexture::Filtering)>(14, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 4 },
        }}),
        // Signal 'horizontalWrapModeChanged'
        QtMocHelpers::SignalData<void(QSGTexture::WrapMode)>(15, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 4 },
        }}),
        // Signal 'verticalWrapModeChanged'
        QtMocHelpers::SignalData<void(QSGTexture::WrapMode)>(17, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 4 },
        }}),
        // Signal 'detachAtlasTexturesChanged'
        QtMocHelpers::SignalData<void(bool)>(18, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Slot 'invalidateSceneGraph'
        QtMocHelpers::SlotData<void()>(19, 4, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'source'
        QtMocHelpers::PropertyData<const QQuickItem*>(6, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 0),
        // property 'textureSubRect'
        QtMocHelpers::PropertyData<QRect>(20, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'detachAtlasTextures'
        QtMocHelpers::PropertyData<bool>(21, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 7),
        // property 'anisotropyLevel'
        QtMocHelpers::PropertyData<QSGTexture::AnisotropyLevel>(22, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 2),
        // property 'horizontalWrapMode'
        QtMocHelpers::PropertyData<QSGTexture::WrapMode>(23, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 5),
        // property 'verticalWrapMode'
        QtMocHelpers::PropertyData<QSGTexture::WrapMode>(24, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 6),
        // property 'filtering'
        QtMocHelpers::PropertyData<QSGTexture::Filtering>(25, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 3),
        // property 'mipmapFiltering'
        QtMocHelpers::PropertyData<QSGTexture::Filtering>(26, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 4),
    };
    QtMocHelpers::UintData qt_enums {
        // enum '_WrapMode'
        QtMocHelpers::EnumData<enum _WrapMode>(27, 27, QMC::EnumFlags{}).add({
            {   28, _WrapMode::Repeat },
            {   29, _WrapMode::ClampToEdge },
            {   30, _WrapMode::MirroredRepeat },
        }),
        // enum '_Filtering'
        QtMocHelpers::EnumData<enum _Filtering>(31, 31, QMC::EnumFlags{}).add({
            {   32, _Filtering::None },
            {   33, _Filtering::Nearest },
            {   34, _Filtering::Linear },
        }),
        // enum '_AnisotropyLevel'
        QtMocHelpers::EnumData<enum _AnisotropyLevel>(35, 35, QMC::EnumFlags{}).add({
            {   36, _AnisotropyLevel::AnisotropyNone },
            {   37, _AnisotropyLevel::Anisotropy2x },
            {   38, _AnisotropyLevel::Anisotropy4x },
            {   39, _AnisotropyLevel::Anisotropy8x },
            {   40, _AnisotropyLevel::Anisotropy16x },
        }),
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<TextureProviderItem, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN19TextureProviderItemE[] = {
    QMetaObject::SuperData::link<QSGTexture::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject TextureProviderItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19TextureProviderItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19TextureProviderItemE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN19TextureProviderItemE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19TextureProviderItemE_t>.metaTypes,
    nullptr
} };

void TextureProviderItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TextureProviderItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sourceChanged((*reinterpret_cast<std::add_pointer_t<const QQuickItem*>>(_a[1]))); break;
        case 1: _t->rectChanged((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 2: _t->anisotropyLevelChanged((*reinterpret_cast<std::add_pointer_t<QSGTexture::AnisotropyLevel>>(_a[1]))); break;
        case 3: _t->filteringChanged((*reinterpret_cast<std::add_pointer_t<QSGTexture::Filtering>>(_a[1]))); break;
        case 4: _t->mipmapFilteringChanged((*reinterpret_cast<std::add_pointer_t<QSGTexture::Filtering>>(_a[1]))); break;
        case 5: _t->horizontalWrapModeChanged((*reinterpret_cast<std::add_pointer_t<QSGTexture::WrapMode>>(_a[1]))); break;
        case 6: _t->verticalWrapModeChanged((*reinterpret_cast<std::add_pointer_t<QSGTexture::WrapMode>>(_a[1]))); break;
        case 7: _t->detachAtlasTexturesChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->invalidateSceneGraph(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TextureProviderItem::*)(const QQuickItem * )>(_a, &TextureProviderItem::sourceChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureProviderItem::*)(const QRect & )>(_a, &TextureProviderItem::rectChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureProviderItem::*)(QSGTexture::AnisotropyLevel )>(_a, &TextureProviderItem::anisotropyLevelChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureProviderItem::*)(QSGTexture::Filtering )>(_a, &TextureProviderItem::filteringChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureProviderItem::*)(QSGTexture::Filtering )>(_a, &TextureProviderItem::mipmapFilteringChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureProviderItem::*)(QSGTexture::WrapMode )>(_a, &TextureProviderItem::horizontalWrapModeChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureProviderItem::*)(QSGTexture::WrapMode )>(_a, &TextureProviderItem::verticalWrapModeChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureProviderItem::*)(bool )>(_a, &TextureProviderItem::detachAtlasTexturesChanged, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<const QQuickItem**>(_v) = _t->m_source; break;
        case 1: *reinterpret_cast<QRect*>(_v) = _t->m_rect; break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->m_detachAtlasTextures; break;
        case 3: *reinterpret_cast<QSGTexture::AnisotropyLevel*>(_v) = _t->m_anisotropyLevel; break;
        case 4: *reinterpret_cast<QSGTexture::WrapMode*>(_v) = _t->m_horizontalWrapMode; break;
        case 5: *reinterpret_cast<QSGTexture::WrapMode*>(_v) = _t->m_verticalWrapMode; break;
        case 6: *reinterpret_cast<QSGTexture::Filtering*>(_v) = _t->m_filtering; break;
        case 7: *reinterpret_cast<QSGTexture::Filtering*>(_v) = _t->m_mipmapFiltering; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (QtMocHelpers::setProperty(_t->m_source, *reinterpret_cast<const QQuickItem**>(_v)))
                Q_EMIT _t->sourceChanged(_t->m_source);
            break;
        case 1:
            if (QtMocHelpers::setProperty(_t->m_rect, *reinterpret_cast<QRect*>(_v)))
                Q_EMIT _t->rectChanged(_t->m_rect);
            break;
        case 2:
            if (QtMocHelpers::setProperty(_t->m_detachAtlasTextures, *reinterpret_cast<bool*>(_v)))
                Q_EMIT _t->detachAtlasTexturesChanged(_t->m_detachAtlasTextures);
            break;
        case 3:
            if (QtMocHelpers::setProperty(_t->m_anisotropyLevel, *reinterpret_cast<QSGTexture::AnisotropyLevel*>(_v)))
                Q_EMIT _t->anisotropyLevelChanged(_t->m_anisotropyLevel);
            break;
        case 4:
            if (QtMocHelpers::setProperty(_t->m_horizontalWrapMode, *reinterpret_cast<QSGTexture::WrapMode*>(_v)))
                Q_EMIT _t->horizontalWrapModeChanged(_t->m_horizontalWrapMode);
            break;
        case 5:
            if (QtMocHelpers::setProperty(_t->m_verticalWrapMode, *reinterpret_cast<QSGTexture::WrapMode*>(_v)))
                Q_EMIT _t->verticalWrapModeChanged(_t->m_verticalWrapMode);
            break;
        case 6:
            if (QtMocHelpers::setProperty(_t->m_filtering, *reinterpret_cast<QSGTexture::Filtering*>(_v)))
                Q_EMIT _t->filteringChanged(_t->m_filtering);
            break;
        case 7:
            if (QtMocHelpers::setProperty(_t->m_mipmapFiltering, *reinterpret_cast<QSGTexture::Filtering*>(_v)))
                Q_EMIT _t->mipmapFilteringChanged(_t->m_mipmapFiltering);
            break;
        default: break;
        }
    }
    if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 1: _t->resetTextureSubRect(); break;
        default: break;
        }
    }
}

const QMetaObject *TextureProviderItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextureProviderItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19TextureProviderItemE_t>.strings))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int TextureProviderItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void TextureProviderItem::sourceChanged(const QQuickItem * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void TextureProviderItem::rectChanged(const QRect & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void TextureProviderItem::anisotropyLevelChanged(QSGTexture::AnisotropyLevel _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void TextureProviderItem::filteringChanged(QSGTexture::Filtering _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void TextureProviderItem::mipmapFilteringChanged(QSGTexture::Filtering _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void TextureProviderItem::horizontalWrapModeChanged(QSGTexture::WrapMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void TextureProviderItem::verticalWrapModeChanged(QSGTexture::WrapMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void TextureProviderItem::detachAtlasTexturesChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}
QT_WARNING_POP

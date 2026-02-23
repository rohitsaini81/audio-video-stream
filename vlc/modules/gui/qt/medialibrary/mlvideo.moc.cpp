/****************************************************************************
** Meta object code from reading C++ file 'mlvideo.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mlvideo.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mlvideo.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16VideoDescriptionE_t {};
} // unnamed namespace

template <> constexpr inline auto VideoDescription::qt_create_metaobjectdata<qt_meta_tag_ZN16VideoDescriptionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VideoDescription",
        "codec",
        "language",
        "fps"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'codec'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'language'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'fps'
        QtMocHelpers::PropertyData<uint>(3, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VideoDescription, qt_meta_tag_ZN16VideoDescriptionE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VideoDescription::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16VideoDescriptionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16VideoDescriptionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16VideoDescriptionE_t>.metaTypes,
    nullptr
} };

void VideoDescription::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<VideoDescription *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->getCodec(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->getLanguage(); break;
        case 2: *reinterpret_cast<uint*>(_v) = _t->getFps(); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN16AudioDescriptionE_t {};
} // unnamed namespace

template <> constexpr inline auto AudioDescription::qt_create_metaobjectdata<qt_meta_tag_ZN16AudioDescriptionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AudioDescription",
        "codec",
        "language",
        "nbchannels",
        "sampleRate"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'codec'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'language'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'nbchannels'
        QtMocHelpers::PropertyData<uint>(3, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'sampleRate'
        QtMocHelpers::PropertyData<uint>(4, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AudioDescription, qt_meta_tag_ZN16AudioDescriptionE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AudioDescription::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16AudioDescriptionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16AudioDescriptionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16AudioDescriptionE_t>.metaTypes,
    nullptr
} };

void AudioDescription::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<AudioDescription *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->getCodec(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->getLanguage(); break;
        case 2: *reinterpret_cast<uint*>(_v) = _t->getNbChannels(); break;
        case 3: *reinterpret_cast<uint*>(_v) = _t->getSampleRate(); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN19SubtitleDescriptionE_t {};
} // unnamed namespace

template <> constexpr inline auto SubtitleDescription::qt_create_metaobjectdata<qt_meta_tag_ZN19SubtitleDescriptionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SubtitleDescription",
        "codec",
        "language",
        "description",
        "encoding"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'codec'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'language'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'description'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'encoding'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SubtitleDescription, qt_meta_tag_ZN19SubtitleDescriptionE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SubtitleDescription::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19SubtitleDescriptionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19SubtitleDescriptionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19SubtitleDescriptionE_t>.metaTypes,
    nullptr
} };

void SubtitleDescription::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<SubtitleDescription *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->getCodec(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->getLanguage(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->getDescription(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->getEncoding(); break;
        default: break;
        }
    }
}
QT_WARNING_POP

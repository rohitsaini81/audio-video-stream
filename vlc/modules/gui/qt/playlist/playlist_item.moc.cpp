/****************************************************************************
** Meta object code from reading C++ file 'playlist_item.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlist_item.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlist_item.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12PlaylistItemE_t {};
} // unnamed namespace

template <> constexpr inline auto PlaylistItem::qt_create_metaobjectdata<qt_meta_tag_ZN12PlaylistItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlaylistItem",
        "title",
        "artist",
        "album",
        "artwork",
        "QUrl",
        "duration",
        "VLCDuration",
        "url"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'title'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'artist'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'album'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'artwork'
        QtMocHelpers::PropertyData<QUrl>(4, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'duration'
        QtMocHelpers::PropertyData<VLCDuration>(6, 0x80000000 | 7, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'url'
        QtMocHelpers::PropertyData<QUrl>(8, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlaylistItem, qt_meta_tag_ZN12PlaylistItemE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PlaylistItem::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12PlaylistItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12PlaylistItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12PlaylistItemE_t>.metaTypes,
    nullptr
} };

void PlaylistItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<PlaylistItem *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->getTitle(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->getArtist(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->getAlbum(); break;
        case 3: *reinterpret_cast<QUrl*>(_v) = _t->getArtwork(); break;
        case 4: *reinterpret_cast<VLCDuration*>(_v) = _t->getDuration(); break;
        case 5: *reinterpret_cast<QUrl*>(_v) = _t->getUrl(); break;
        default: break;
        }
    }
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'playlist_model.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlist_model.hpp"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlist_model.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3vlc8playlist17PlaylistListModelE_t {};
} // unnamed namespace

template <> constexpr inline auto vlc::playlist::PlaylistListModel::qt_create_metaobjectdata<qt_meta_tag_ZN3vlc8playlist17PlaylistListModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "vlc::playlist::PlaylistListModel",
        "playlistChanged",
        "",
        "Playlist",
        "currentIndexChanged",
        "countChanged",
        "getPlaylist",
        "setPlaylist",
        "playlist",
        "vlc_playlist_t*",
        "itemAt",
        "PlaylistItem",
        "index",
        "removeItems",
        "QList<int>",
        "indexes",
        "moveItemsPre",
        "preTarget",
        "moveItemsPost",
        "postTarget",
        "getItemsForIndexes",
        "QVariantList",
        "currentIndex",
        "count",
        "duration",
        "VLCDuration"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'playlistChanged'
        QtMocHelpers::SignalData<void(const Playlist &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'currentIndexChanged'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'countChanged'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'getPlaylist'
        QtMocHelpers::SlotData<Playlist() const>(6, 2, QMC::AccessPublic, 0x80000000 | 3),
        // Slot 'setPlaylist'
        QtMocHelpers::SlotData<void(const Playlist &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 8 },
        }}),
        // Slot 'setPlaylist'
        QtMocHelpers::SlotData<void(vlc_playlist_t *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 8 },
        }}),
        // Method 'itemAt'
        QtMocHelpers::MethodData<PlaylistItem(int) const>(10, 2, QMC::AccessPublic, 0x80000000 | 11, {{
            { QMetaType::Int, 12 },
        }}),
        // Method 'removeItems'
        QtMocHelpers::MethodData<void(const QVector<int> &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Method 'moveItemsPre'
        QtMocHelpers::MethodData<void(const QVector<int> &, int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 }, { QMetaType::Int, 17 },
        }}),
        // Method 'moveItemsPost'
        QtMocHelpers::MethodData<void(const QVector<int> &, int)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 }, { QMetaType::Int, 19 },
        }}),
        // Method 'getItemsForIndexes'
        QtMocHelpers::MethodData<QVariantList(const QVector<int> &) const>(20, 2, QMC::AccessPublic, 0x80000000 | 21, {{
            { 0x80000000 | 14, 15 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'playlist'
        QtMocHelpers::PropertyData<Playlist>(8, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 0),
        // property 'currentIndex'
        QtMocHelpers::PropertyData<int>(22, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Final, 1),
        // property 'count'
        QtMocHelpers::PropertyData<int>(23, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Final, 2),
        // property 'duration'
        QtMocHelpers::PropertyData<VLCDuration>(24, 0x80000000 | 25, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlaylistListModel, qt_meta_tag_ZN3vlc8playlist17PlaylistListModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject vlc::playlist::PlaylistListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc8playlist17PlaylistListModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc8playlist17PlaylistListModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3vlc8playlist17PlaylistListModelE_t>.metaTypes,
    nullptr
} };

void vlc::playlist::PlaylistListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlaylistListModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->playlistChanged((*reinterpret_cast<std::add_pointer_t<Playlist>>(_a[1]))); break;
        case 1: _t->currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->countChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: { Playlist _r = _t->getPlaylist();
            if (_a[0]) *reinterpret_cast<Playlist*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setPlaylist((*reinterpret_cast<std::add_pointer_t<Playlist>>(_a[1]))); break;
        case 5: _t->setPlaylist((*reinterpret_cast<std::add_pointer_t<vlc_playlist_t*>>(_a[1]))); break;
        case 6: { PlaylistItem _r = _t->itemAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<PlaylistItem*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->removeItems((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 8: _t->moveItemsPre((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->moveItemsPost((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 10: { QVariantList _r = _t->getItemsForIndexes((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Playlist >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Playlist >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlaylistListModel::*)(const Playlist & )>(_a, &PlaylistListModel::playlistChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistListModel::*)(int )>(_a, &PlaylistListModel::currentIndexChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistListModel::*)(int )>(_a, &PlaylistListModel::countChanged, 2))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Playlist >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<Playlist*>(_v) = _t->getPlaylist(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->getCurrentIndex(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->rowCount(); break;
        case 3: *reinterpret_cast<VLCDuration*>(_v) = _t->getDuration(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlaylist(*reinterpret_cast<Playlist*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *vlc::playlist::PlaylistListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vlc::playlist::PlaylistListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc8playlist17PlaylistListModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int vlc::playlist::PlaylistListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
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
void vlc::playlist::PlaylistListModel::playlistChanged(const Playlist & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void vlc::playlist::PlaylistListModel::currentIndexChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void vlc::playlist::PlaylistListModel::countChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'playlist_controller.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlist_controller.hpp"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlist_controller.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3vlc8playlist18PlaylistControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto vlc::playlist::PlaylistController::qt_create_metaobjectdata<qt_meta_tag_ZN3vlc8playlist18PlaylistControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "vlc::playlist::PlaylistController",
        "currentItemChanged",
        "",
        "hasNextChanged",
        "hasPrevChanged",
        "randomChanged",
        "mediaStopActionChanged",
        "MediaStopAction",
        "repeatModeChanged",
        "PlaybackRepeat",
        "isEmptyChanged",
        "empty",
        "countChanged",
        "sortKeyChanged",
        "sortOrderChanged",
        "currentIndexChanged",
        "ssize_t",
        "index",
        "itemsReset",
        "QList<PlaylistItem>",
        "itemsAdded",
        "size_t",
        "itemsMoved",
        "count",
        "target",
        "itemsRemoved",
        "itemsUpdated",
        "initializedChanged",
        "getCurrentItem",
        "PlaylistItem",
        "setRandom",
        "setMediaStopAction",
        "setRepeatMode",
        "mode",
        "setSortKey",
        "SortKey",
        "sortKey",
        "setSortOrder",
        "SortOrder",
        "sortOrder",
        "switchSortOrder",
        "getSortKeyTitleList",
        "QVariantList",
        "getPlaylist",
        "Playlist",
        "resetSortKey",
        "play",
        "pause",
        "stop",
        "next",
        "prev",
        "prevOrReset",
        "togglePlayPause",
        "toggleRandom",
        "toggleRepeatMode",
        "clear",
        "goTo",
        "startPlaying",
        "append",
        "QVariant",
        "insert",
        "shuffle",
        "sort",
        "key",
        "order",
        "explore",
        "pItem",
        "initialized",
        "sortKeyTitleList",
        "playlist",
        "currentItem",
        "hasNext",
        "hasPrev",
        "random",
        "repeatMode",
        "mediaStopAction",
        "currentIndex",
        "PLAYBACK_REPEAT_NONE",
        "PLAYBACK_REPEAT_CURRENT",
        "PLAYBACK_REPEAT_ALL",
        "SORT_KEY_TITLE",
        "SORT_KEY_DURATION",
        "SORT_KEY_ARTIST",
        "SORT_KEY_ALBUM",
        "SORT_KEY_ALBUM_ARTIST",
        "SORT_KEY_GENRE",
        "SORT_KEY_DATE",
        "SORT_KEY_TRACK_NUMBER",
        "SORT_KEY_DISC_NUMBER",
        "SORT_KEY_URL",
        "SORT_KEY_RATING",
        "SORT_KEY_FILE_SIZE",
        "SORT_KEY_FILE_MODIFIED",
        "SORT_KEY_NONE",
        "SORT_ORDER_ASC",
        "SORT_ORDER_DESC",
        "MEDIA_STOPPED_CONTINUE",
        "MEDIA_STOPPED_STOP",
        "MEDIA_STOPPED_EXIT"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentItemChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hasNextChanged'
        QtMocHelpers::SignalData<void(bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'hasPrevChanged'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'randomChanged'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'mediaStopActionChanged'
        QtMocHelpers::SignalData<void(enum MediaStopAction)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 2 },
        }}),
        // Signal 'repeatModeChanged'
        QtMocHelpers::SignalData<void(enum PlaybackRepeat)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 2 },
        }}),
        // Signal 'isEmptyChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Signal 'countChanged'
        QtMocHelpers::SignalData<void(int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'sortKeyChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sortOrderChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentIndexChanged'
        QtMocHelpers::SignalData<void(ssize_t)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Signal 'itemsReset'
        QtMocHelpers::SignalData<void(QVector<PlaylistItem>)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 2 },
        }}),
        // Signal 'itemsAdded'
        QtMocHelpers::SignalData<void(size_t, const QVector<PlaylistItem> &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 17 }, { 0x80000000 | 19, 2 },
        }}),
        // Signal 'itemsMoved'
        QtMocHelpers::SignalData<void(size_t, size_t, size_t)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 17 }, { 0x80000000 | 21, 23 }, { 0x80000000 | 21, 24 },
        }}),
        // Signal 'itemsRemoved'
        QtMocHelpers::SignalData<void(size_t, size_t)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 17 }, { 0x80000000 | 21, 23 },
        }}),
        // Signal 'itemsUpdated'
        QtMocHelpers::SignalData<void(size_t, const QVector<PlaylistItem> &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 17 }, { 0x80000000 | 19, 2 },
        }}),
        // Signal 'initializedChanged'
        QtMocHelpers::SignalData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getCurrentItem'
        QtMocHelpers::SlotData<PlaylistItem() const>(28, 2, QMC::AccessPublic, 0x80000000 | 29),
        // Slot 'setRandom'
        QtMocHelpers::SlotData<void(bool)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setMediaStopAction'
        QtMocHelpers::SlotData<void(enum MediaStopAction)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 2 },
        }}),
        // Slot 'setRepeatMode'
        QtMocHelpers::SlotData<void(enum PlaybackRepeat)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 33 },
        }}),
        // Slot 'setSortKey'
        QtMocHelpers::SlotData<void(enum SortKey)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 35, 36 },
        }}),
        // Slot 'setSortOrder'
        QtMocHelpers::SlotData<void(enum SortOrder)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 38, 39 },
        }}),
        // Slot 'switchSortOrder'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getSortKeyTitleList'
        QtMocHelpers::SlotData<QVariantList() const>(41, 2, QMC::AccessPublic, 0x80000000 | 42),
        // Slot 'getPlaylist'
        QtMocHelpers::SlotData<Playlist() const>(43, 2, QMC::AccessPublic, 0x80000000 | 44),
        // Slot 'resetSortKey'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'play'
        QtMocHelpers::MethodData<void()>(46, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'pause'
        QtMocHelpers::MethodData<void()>(47, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'stop'
        QtMocHelpers::MethodData<void()>(48, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'next'
        QtMocHelpers::MethodData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'prev'
        QtMocHelpers::MethodData<void()>(50, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'prevOrReset'
        QtMocHelpers::MethodData<void()>(51, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'togglePlayPause'
        QtMocHelpers::MethodData<void()>(52, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'toggleRandom'
        QtMocHelpers::MethodData<void()>(53, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'toggleRepeatMode'
        QtMocHelpers::MethodData<void()>(54, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'clear'
        QtMocHelpers::MethodData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'goTo'
        QtMocHelpers::MethodData<void(uint, bool)>(56, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 17 }, { QMetaType::Bool, 57 },
        }}),
        // Method 'goTo'
        QtMocHelpers::MethodData<void(uint)>(56, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::UInt, 17 },
        }}),
        // Method 'append'
        QtMocHelpers::MethodData<void(const QVariantList &, bool)>(58, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 42, 2 }, { QMetaType::Bool, 57 },
        }}),
        // Method 'append'
        QtMocHelpers::MethodData<void(const QVariantList &)>(58, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 42, 2 },
        }}),
        // Method 'append'
        QtMocHelpers::MethodData<void(const QVariant &, bool)>(58, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 59, 2 }, { QMetaType::Bool, 57 },
        }}),
        // Method 'append'
        QtMocHelpers::MethodData<void(const QVariant &)>(58, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 59, 2 },
        }}),
        // Method 'insert'
        QtMocHelpers::MethodData<void(unsigned , const QVariantList &, bool)>(60, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 17 }, { 0x80000000 | 42, 2 }, { QMetaType::Bool, 57 },
        }}),
        // Method 'insert'
        QtMocHelpers::MethodData<void(unsigned , const QVariantList &)>(60, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::UInt, 17 }, { 0x80000000 | 42, 2 },
        }}),
        // Method 'shuffle'
        QtMocHelpers::MethodData<void()>(61, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'sort'
        QtMocHelpers::MethodData<void(enum SortKey, enum SortOrder)>(62, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 35, 63 }, { 0x80000000 | 38, 64 },
        }}),
        // Method 'sort'
        QtMocHelpers::MethodData<void(enum SortKey)>(62, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 35, 63 },
        }}),
        // Method 'sort'
        QtMocHelpers::MethodData<void()>(62, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'explore'
        QtMocHelpers::MethodData<void(const PlaylistItem &)>(65, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 29, 66 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'initialized'
        QtMocHelpers::PropertyData<bool>(67, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 16),
        // property 'sortKeyTitleList'
        QtMocHelpers::PropertyData<QVariantList>(68, 0x80000000 | 42, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'playlist'
        QtMocHelpers::PropertyData<Playlist>(69, 0x80000000 | 44, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'currentItem'
        QtMocHelpers::PropertyData<PlaylistItem>(70, 0x80000000 | 29, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 0),
        // property 'hasNext'
        QtMocHelpers::PropertyData<bool>(71, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 1),
        // property 'hasPrev'
        QtMocHelpers::PropertyData<bool>(72, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 2),
        // property 'random'
        QtMocHelpers::PropertyData<bool>(73, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 3),
        // property 'repeatMode'
        QtMocHelpers::PropertyData<enum PlaybackRepeat>(74, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 5),
        // property 'empty'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 6),
        // property 'count'
        QtMocHelpers::PropertyData<int>(23, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Final, 7),
        // property 'sortKey'
        QtMocHelpers::PropertyData<enum SortKey>(36, 0x80000000 | 35, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 8),
        // property 'sortOrder'
        QtMocHelpers::PropertyData<enum SortOrder>(39, 0x80000000 | 38, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 9),
        // property 'mediaStopAction'
        QtMocHelpers::PropertyData<enum MediaStopAction>(75, 0x80000000 | 7, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 4),
        // property 'currentIndex'
        QtMocHelpers::PropertyData<int>(76, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Final, 10),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'PlaybackRepeat'
        QtMocHelpers::EnumData<enum PlaybackRepeat>(9, 9, QMC::EnumFlags{}).add({
            {   77, PlaybackRepeat::PLAYBACK_REPEAT_NONE },
            {   78, PlaybackRepeat::PLAYBACK_REPEAT_CURRENT },
            {   79, PlaybackRepeat::PLAYBACK_REPEAT_ALL },
        }),
        // enum 'SortKey'
        QtMocHelpers::EnumData<enum SortKey>(35, 35, QMC::EnumFlags{}).add({
            {   80, SortKey::SORT_KEY_TITLE },
            {   81, SortKey::SORT_KEY_DURATION },
            {   82, SortKey::SORT_KEY_ARTIST },
            {   83, SortKey::SORT_KEY_ALBUM },
            {   84, SortKey::SORT_KEY_ALBUM_ARTIST },
            {   85, SortKey::SORT_KEY_GENRE },
            {   86, SortKey::SORT_KEY_DATE },
            {   87, SortKey::SORT_KEY_TRACK_NUMBER },
            {   88, SortKey::SORT_KEY_DISC_NUMBER },
            {   89, SortKey::SORT_KEY_URL },
            {   90, SortKey::SORT_KEY_RATING },
            {   91, SortKey::SORT_KEY_FILE_SIZE },
            {   92, SortKey::SORT_KEY_FILE_MODIFIED },
            {   93, SortKey::SORT_KEY_NONE },
        }),
        // enum 'SortOrder'
        QtMocHelpers::EnumData<enum SortOrder>(38, 38, QMC::EnumFlags{}).add({
            {   94, SortOrder::SORT_ORDER_ASC },
            {   95, SortOrder::SORT_ORDER_DESC },
        }),
        // enum 'MediaStopAction'
        QtMocHelpers::EnumData<enum MediaStopAction>(7, 7, QMC::EnumFlags{}).add({
            {   96, MediaStopAction::MEDIA_STOPPED_CONTINUE },
            {   97, MediaStopAction::MEDIA_STOPPED_STOP },
            {   98, MediaStopAction::MEDIA_STOPPED_EXIT },
        }),
    };
    return QtMocHelpers::metaObjectData<PlaylistController, qt_meta_tag_ZN3vlc8playlist18PlaylistControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject vlc::playlist::PlaylistController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc8playlist18PlaylistControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc8playlist18PlaylistControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3vlc8playlist18PlaylistControllerE_t>.metaTypes,
    nullptr
} };

void vlc::playlist::PlaylistController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlaylistController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentItemChanged(); break;
        case 1: _t->hasNextChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->hasPrevChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->randomChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->mediaStopActionChanged((*reinterpret_cast<std::add_pointer_t<enum MediaStopAction>>(_a[1]))); break;
        case 5: _t->repeatModeChanged((*reinterpret_cast<std::add_pointer_t<enum PlaybackRepeat>>(_a[1]))); break;
        case 6: _t->isEmptyChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->countChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->sortKeyChanged(); break;
        case 9: _t->sortOrderChanged(); break;
        case 10: _t->currentIndexChanged((*reinterpret_cast<std::add_pointer_t<ssize_t>>(_a[1]))); break;
        case 11: _t->itemsReset((*reinterpret_cast<std::add_pointer_t<QList<PlaylistItem>>>(_a[1]))); break;
        case 12: _t->itemsAdded((*reinterpret_cast<std::add_pointer_t<size_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QList<PlaylistItem>>>(_a[2]))); break;
        case 13: _t->itemsMoved((*reinterpret_cast<std::add_pointer_t<size_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<size_t>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<size_t>>(_a[3]))); break;
        case 14: _t->itemsRemoved((*reinterpret_cast<std::add_pointer_t<size_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<size_t>>(_a[2]))); break;
        case 15: _t->itemsUpdated((*reinterpret_cast<std::add_pointer_t<size_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QList<PlaylistItem>>>(_a[2]))); break;
        case 16: _t->initializedChanged(); break;
        case 17: { PlaylistItem _r = _t->getCurrentItem();
            if (_a[0]) *reinterpret_cast<PlaylistItem*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->setRandom((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->setMediaStopAction((*reinterpret_cast<std::add_pointer_t<enum MediaStopAction>>(_a[1]))); break;
        case 20: _t->setRepeatMode((*reinterpret_cast<std::add_pointer_t<enum PlaybackRepeat>>(_a[1]))); break;
        case 21: _t->setSortKey((*reinterpret_cast<std::add_pointer_t<enum SortKey>>(_a[1]))); break;
        case 22: _t->setSortOrder((*reinterpret_cast<std::add_pointer_t<enum SortOrder>>(_a[1]))); break;
        case 23: _t->switchSortOrder(); break;
        case 24: { QVariantList _r = _t->getSortKeyTitleList();
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 25: { Playlist _r = _t->getPlaylist();
            if (_a[0]) *reinterpret_cast<Playlist*>(_a[0]) = std::move(_r); }  break;
        case 26: _t->resetSortKey(); break;
        case 27: _t->play(); break;
        case 28: _t->pause(); break;
        case 29: _t->stop(); break;
        case 30: _t->next(); break;
        case 31: _t->prev(); break;
        case 32: _t->prevOrReset(); break;
        case 33: _t->togglePlayPause(); break;
        case 34: _t->toggleRandom(); break;
        case 35: _t->toggleRepeatMode(); break;
        case 36: _t->clear(); break;
        case 37: _t->goTo((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 38: _t->goTo((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 39: _t->append((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 40: _t->append((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 41: _t->append((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 42: _t->append((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 43: _t->insert((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 44: _t->insert((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[2]))); break;
        case 45: _t->shuffle(); break;
        case 46: _t->sort((*reinterpret_cast<std::add_pointer_t<enum SortKey>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum SortOrder>>(_a[2]))); break;
        case 47: _t->sort((*reinterpret_cast<std::add_pointer_t<enum SortKey>>(_a[1]))); break;
        case 48: _t->sort(); break;
        case 49: _t->explore((*reinterpret_cast<std::add_pointer_t<PlaylistItem>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlaylistController::*)()>(_a, &PlaylistController::currentItemChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistController::*)(bool )>(_a, &PlaylistController::hasNextChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistController::*)(bool )>(_a, &PlaylistController::hasPrevChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistController::*)(bool )>(_a, &PlaylistController::randomChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistController::*)(MediaStopAction )>(_a, &PlaylistController::mediaStopActionChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistController::*)(PlaybackRepeat )>(_a, &PlaylistController::repeatModeChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistController::*)(bool )>(_a, &PlaylistController::isEmptyChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistController::*)(int )>(_a, &PlaylistController::countChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistController::*)()>(_a, &PlaylistController::sortKeyChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistController::*)()>(_a, &PlaylistController::sortOrderChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistController::*)(ssize_t )>(_a, &PlaylistController::currentIndexChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistController::*)(QVector<PlaylistItem> )>(_a, &PlaylistController::itemsReset, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistController::*)(size_t , const QVector<PlaylistItem> & )>(_a, &PlaylistController::itemsAdded, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistController::*)(size_t , size_t , size_t )>(_a, &PlaylistController::itemsMoved, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistController::*)(size_t , size_t )>(_a, &PlaylistController::itemsRemoved, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistController::*)(size_t , const QVector<PlaylistItem> & )>(_a, &PlaylistController::itemsUpdated, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlaylistController::*)()>(_a, &PlaylistController::initializedChanged, 16))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Playlist >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isInitialized(); break;
        case 1: *reinterpret_cast<QVariantList*>(_v) = _t->getSortKeyTitleList(); break;
        case 2: *reinterpret_cast<Playlist*>(_v) = _t->getPlaylist(); break;
        case 3: *reinterpret_cast<PlaylistItem*>(_v) = _t->getCurrentItem(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasNext(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->hasPrev(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->isRandom(); break;
        case 7: *reinterpret_cast<enum PlaybackRepeat*>(_v) = _t->getRepeatMode(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->isEmpty(); break;
        case 9: *reinterpret_cast<int*>(_v) = _t->count(); break;
        case 10: *reinterpret_cast<enum SortKey*>(_v) = _t->getSortKey(); break;
        case 11: *reinterpret_cast<enum SortOrder*>(_v) = _t->getSortOrder(); break;
        case 12: *reinterpret_cast<enum MediaStopAction*>(_v) = _t->getMediaStopAction(); break;
        case 13: *reinterpret_cast<int*>(_v) = _t->currentIndex(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 6: _t->setRandom(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setRepeatMode(*reinterpret_cast<enum PlaybackRepeat*>(_v)); break;
        case 10: _t->setSortKey(*reinterpret_cast<enum SortKey*>(_v)); break;
        case 11: _t->setSortOrder(*reinterpret_cast<enum SortOrder*>(_v)); break;
        case 12: _t->setMediaStopAction(*reinterpret_cast<enum MediaStopAction*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *vlc::playlist::PlaylistController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vlc::playlist::PlaylistController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3vlc8playlist18PlaylistControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int vlc::playlist::PlaylistController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 50;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void vlc::playlist::PlaylistController::currentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void vlc::playlist::PlaylistController::hasNextChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void vlc::playlist::PlaylistController::hasPrevChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void vlc::playlist::PlaylistController::randomChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void vlc::playlist::PlaylistController::mediaStopActionChanged(MediaStopAction _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void vlc::playlist::PlaylistController::repeatModeChanged(PlaybackRepeat _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void vlc::playlist::PlaylistController::isEmptyChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void vlc::playlist::PlaylistController::countChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void vlc::playlist::PlaylistController::sortKeyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void vlc::playlist::PlaylistController::sortOrderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void vlc::playlist::PlaylistController::currentIndexChanged(ssize_t _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void vlc::playlist::PlaylistController::itemsReset(QVector<PlaylistItem> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void vlc::playlist::PlaylistController::itemsAdded(size_t _t1, const QVector<PlaylistItem> & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1, _t2);
}

// SIGNAL 13
void vlc::playlist::PlaylistController::itemsMoved(size_t _t1, size_t _t2, size_t _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1, _t2, _t3);
}

// SIGNAL 14
void vlc::playlist::PlaylistController::itemsRemoved(size_t _t1, size_t _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1, _t2);
}

// SIGNAL 15
void vlc::playlist::PlaylistController::itemsUpdated(size_t _t1, const QVector<PlaylistItem> & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1, _t2);
}

// SIGNAL 16
void vlc::playlist::PlaylistController::initializedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}
QT_WARNING_POP

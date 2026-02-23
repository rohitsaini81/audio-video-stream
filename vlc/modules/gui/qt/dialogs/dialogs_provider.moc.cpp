/****************************************************************************
** Meta object code from reading C++ file 'dialogs_provider.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialogs_provider.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogs_provider.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15DialogsProviderE_t {};
} // unnamed namespace

template <> constexpr inline auto DialogsProvider::qt_create_metaobjectdata<qt_meta_tag_ZN15DialogsProviderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DialogsProvider",
        "releaseMouseEvents",
        "",
        "showToolbarEditorDialog",
        "playlistsDialog",
        "QVariantList",
        "listMedia",
        "MLPlaylistListModel::PlaylistType",
        "type",
        "bookmarksDialog",
        "mediaInfoDialog",
        "SharedInputItem",
        "inputItem",
        "PlaylistItem",
        "pItem",
        "MLItemId",
        "itemId",
        "mediaCodecDialog",
        "questionDialog",
        "text",
        "title",
        "prefsDialog",
        "firstRunDialog",
        "extendedDialog",
        "synchroDialog",
        "messagesDialog",
        "page",
        "sendKey",
        "key",
        "vlmDialog",
        "helpDialog",
        "aboutDialog",
        "gotoTimeDialog",
        "podcastConfigureDialog",
        "pluginDialog",
        "epgDialog",
        "setPopupMenu",
        "destroyPopupMenu",
        "openFileGenericDialog",
        "intf_dialog_args_t*",
        "simpleOpenDialog",
        "start",
        "openDialog",
        "openDiscDialog",
        "openFileDialog",
        "openUrlDialog",
        "openNetDialog",
        "openCaptureDialog",
        "PLOpenDir",
        "PLAppendDir",
        "streamingDialog",
        "QWindow*",
        "parent",
        "mrls",
        "b_stream",
        "options",
        "QList<QUrl>",
        "urls",
        "openAndStreamingDialogs",
        "openAndTranscodingDialogs",
        "savePlayingToPlaylist",
        "loadSubtitlesFile",
        "loadAudioFile",
        "loadVideoFile",
        "quit",
        "getTextDialog",
        "QVariant",
        "QWidget*",
        "label",
        "placeholder",
        "bool*",
        "ok"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'releaseMouseEvents'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showToolbarEditorDialog'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'playlistsDialog'
        QtMocHelpers::SlotData<void(const QVariantList &, MLPlaylistListModel::PlaylistType)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Slot 'playlistsDialog'
        QtMocHelpers::SlotData<void(const QVariantList &)>(4, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'bookmarksDialog'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mediaInfoDialog'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mediaInfoDialog'
        QtMocHelpers::SlotData<void(const SharedInputItem &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'mediaInfoDialog'
        QtMocHelpers::SlotData<void(const PlaylistItem &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Slot 'mediaInfoDialog'
        QtMocHelpers::SlotData<void(const MLItemId &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Slot 'mediaCodecDialog'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'questionDialog'
        QtMocHelpers::SlotData<bool(const QString &, const QString &) const>(18, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 19 }, { QMetaType::QString, 20 },
        }}),
        // Slot 'questionDialog'
        QtMocHelpers::SlotData<bool(const QString &) const>(18, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 19 },
        }}),
        // Slot 'prefsDialog'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'firstRunDialog'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'extendedDialog'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'synchroDialog'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'messagesDialog'
        QtMocHelpers::SlotData<void(int)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 },
        }}),
        // Slot 'messagesDialog'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'sendKey'
        QtMocHelpers::SlotData<void(int)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 28 },
        }}),
        // Slot 'vlmDialog'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'helpDialog'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'aboutDialog'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'gotoTimeDialog'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'podcastConfigureDialog'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pluginDialog'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'epgDialog'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setPopupMenu'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'destroyPopupMenu'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openFileGenericDialog'
        QtMocHelpers::SlotData<void(intf_dialog_args_t *)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 39, 2 },
        }}),
        // Slot 'simpleOpenDialog'
        QtMocHelpers::SlotData<void(bool)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 41 },
        }}),
        // Slot 'simpleOpenDialog'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'openDialog'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openDiscDialog'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openFileDialog'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openUrlDialog'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openNetDialog'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openCaptureDialog'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'PLOpenDir'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'PLAppendDir'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'streamingDialog'
        QtMocHelpers::SlotData<void(QWindow *, const QStringList &, bool, QStringList)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 51, 52 }, { QMetaType::QStringList, 53 }, { QMetaType::Bool, 54 }, { QMetaType::QStringList, 55 },
        }}),
        // Slot 'streamingDialog'
        QtMocHelpers::SlotData<void(QWindow *, const QStringList &, bool)>(50, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 51, 52 }, { QMetaType::QStringList, 53 }, { QMetaType::Bool, 54 },
        }}),
        // Slot 'streamingDialog'
        QtMocHelpers::SlotData<void(QWindow *, const QStringList &)>(50, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 51, 52 }, { QMetaType::QStringList, 53 },
        }}),
        // Slot 'streamingDialog'
        QtMocHelpers::SlotData<void(const QList<QUrl> &, bool)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 56, 57 }, { QMetaType::Bool, 54 },
        }}),
        // Slot 'streamingDialog'
        QtMocHelpers::SlotData<void(const QList<QUrl> &)>(50, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 56, 57 },
        }}),
        // Slot 'openAndStreamingDialogs'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openAndTranscodingDialogs'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'savePlayingToPlaylist'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadSubtitlesFile'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadAudioFile'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadVideoFile'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'quit'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'getTextDialog'
        QtMocHelpers::MethodData<QVariant(QWidget *, const QString &, const QString &, const QString &, bool *)>(65, 2, QMC::AccessPublic, 0x80000000 | 66, {{
            { 0x80000000 | 67, 52 }, { QMetaType::QString, 20 }, { QMetaType::QString, 68 }, { QMetaType::QString, 69 },
            { 0x80000000 | 70, 71 },
        }}),
        // Method 'getTextDialog'
        QtMocHelpers::MethodData<QVariant(QWidget *, const QString &, const QString &, const QString &)>(65, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 66, {{
            { 0x80000000 | 67, 52 }, { QMetaType::QString, 20 }, { QMetaType::QString, 68 }, { QMetaType::QString, 69 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DialogsProvider, qt_meta_tag_ZN15DialogsProviderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DialogsProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15DialogsProviderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15DialogsProviderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15DialogsProviderE_t>.metaTypes,
    nullptr
} };

void DialogsProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DialogsProvider *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->releaseMouseEvents(); break;
        case 1: _t->showToolbarEditorDialog(); break;
        case 2: _t->playlistsDialog((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<MLPlaylistListModel::PlaylistType>>(_a[2]))); break;
        case 3: _t->playlistsDialog((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 4: _t->bookmarksDialog(); break;
        case 5: _t->mediaInfoDialog(); break;
        case 6: _t->mediaInfoDialog((*reinterpret_cast<std::add_pointer_t<SharedInputItem>>(_a[1]))); break;
        case 7: _t->mediaInfoDialog((*reinterpret_cast<std::add_pointer_t<PlaylistItem>>(_a[1]))); break;
        case 8: _t->mediaInfoDialog((*reinterpret_cast<std::add_pointer_t<MLItemId>>(_a[1]))); break;
        case 9: _t->mediaCodecDialog(); break;
        case 10: { bool _r = _t->questionDialog((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->questionDialog((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->prefsDialog(); break;
        case 13: _t->firstRunDialog(); break;
        case 14: _t->extendedDialog(); break;
        case 15: _t->synchroDialog(); break;
        case 16: _t->messagesDialog((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->messagesDialog(); break;
        case 18: _t->sendKey((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->vlmDialog(); break;
        case 20: _t->helpDialog(); break;
        case 21: _t->aboutDialog(); break;
        case 22: _t->gotoTimeDialog(); break;
        case 23: _t->podcastConfigureDialog(); break;
        case 24: _t->pluginDialog(); break;
        case 25: _t->epgDialog(); break;
        case 26: _t->setPopupMenu(); break;
        case 27: _t->destroyPopupMenu(); break;
        case 28: _t->openFileGenericDialog((*reinterpret_cast<std::add_pointer_t<intf_dialog_args_t*>>(_a[1]))); break;
        case 29: _t->simpleOpenDialog((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->simpleOpenDialog(); break;
        case 31: _t->openDialog(); break;
        case 32: _t->openDiscDialog(); break;
        case 33: _t->openFileDialog(); break;
        case 34: _t->openUrlDialog(); break;
        case 35: _t->openNetDialog(); break;
        case 36: _t->openCaptureDialog(); break;
        case 37: _t->PLOpenDir(); break;
        case 38: _t->PLAppendDir(); break;
        case 39: _t->streamingDialog((*reinterpret_cast<std::add_pointer_t<QWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[4]))); break;
        case 40: _t->streamingDialog((*reinterpret_cast<std::add_pointer_t<QWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 41: _t->streamingDialog((*reinterpret_cast<std::add_pointer_t<QWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 42: _t->streamingDialog((*reinterpret_cast<std::add_pointer_t<QList<QUrl>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 43: _t->streamingDialog((*reinterpret_cast<std::add_pointer_t<QList<QUrl>>>(_a[1]))); break;
        case 44: _t->openAndStreamingDialogs(); break;
        case 45: _t->openAndTranscodingDialogs(); break;
        case 46: _t->savePlayingToPlaylist(); break;
        case 47: _t->loadSubtitlesFile(); break;
        case 48: _t->loadAudioFile(); break;
        case 49: _t->loadVideoFile(); break;
        case 50: _t->quit(); break;
        case 51: { QVariant _r = _t->getTextDialog((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<bool*>>(_a[5])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 52: { QVariant _r = _t->getTextDialog((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SharedInputItem >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DialogsProvider::*)()>(_a, &DialogsProvider::releaseMouseEvents, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DialogsProvider::*)()>(_a, &DialogsProvider::showToolbarEditorDialog, 1))
            return;
    }
}

const QMetaObject *DialogsProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogsProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15DialogsProviderE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Singleton<DialogsProvider>"))
        return static_cast< Singleton<DialogsProvider>*>(this);
    return QObject::qt_metacast(_clname);
}

int DialogsProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 53)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 53;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 53)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 53;
    }
    return _id;
}

// SIGNAL 0
void DialogsProvider::releaseMouseEvents()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DialogsProvider::showToolbarEditorDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'mainctx.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainctx.hpp"
#include "dialogs/toolbar/controlbar_profile_model.hpp"
#include "util/csdbuttonmodel.hpp"
#include "playlist/playlist_controller.hpp"
#include "maininterface/mainctx_submodels.hpp"
#include "maininterface/videosurface.hpp"
#include "medialibrary/medialib.hpp"
#include "player/player_controller.hpp"
#include "util/color_scheme_model.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainctx.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7MainCtxE_t {};
} // unnamed namespace

template <> constexpr inline auto MainCtx::qt_create_metaobjectdata<qt_meta_tag_ZN7MainCtxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainCtx",
        "fullscreenInterfaceToggled",
        "",
        "setInterfaceVisibible",
        "setInterfaceFullScreen",
        "toggleWindowVisibility",
        "askToQuit",
        "askShow",
        "askBoss",
        "askRaise",
        "kc_pressed",
        "playlistDockedChanged",
        "playlistVisibleChanged",
        "playlistWidthFactorChanged",
        "playerPlaylistFactorChanged",
        "interfaceAlwaysOnTopChanged",
        "hasEmbededVideoChanged",
        "showRemainingTimeChanged",
        "gridViewChanged",
        "hasGridListModeChanged",
        "groupingChanged",
        "Grouping",
        "albumSectionsChanged",
        "colorSchemeChanged",
        "useClientSideDecorationChanged",
        "hasToolbarMenuChanged",
        "requestInterfaceMaximized",
        "requestInterfaceNormal",
        "requestInterfaceMinimized",
        "intfScaleFactorChanged",
        "intfDevicePixelRatioChanged",
        "pinVideoControlsChanged",
        "pinOpacityChanged",
        "hasAcrylicSurfaceChanged",
        "minimalViewChanged",
        "acrylicActiveChanged",
        "smoothScrollChanged",
        "preferHotkeysChanged",
        "useGlobalShortcutsChanged",
        "maxVolumeChanged",
        "safeAreaChanged",
        "mouseHideTimeoutChanged",
        "navBoxToggled",
        "bgConeToggled",
        "windowSuportExtendedFrameChanged",
        "windowExtendedMarginChanged",
        "margin",
        "requestShowMainView",
        "requestShowPlayerView",
        "artistAlbumsWidthFactorChanged",
        "toggleToolbarMenu",
        "toggleInterfaceFullScreen",
        "setPlaylistDocked",
        "setPlaylistVisible",
        "setPlaylistWidthFactor",
        "setPlayerPlaylistWidthFactor",
        "factor",
        "setInterfaceAlwaysOnTop",
        "setShowRemainingTime",
        "setGridView",
        "setGrouping",
        "setAlbumSections",
        "incrementIntfUserScaleFactor",
        "increment",
        "setIntfUserScaleFactor",
        "setHasToolbarMenu",
        "setPinVideoControls",
        "setPinOpacity",
        "setbgCone",
        "updateIntfScaleFactor",
        "onWindowVisibilityChanged",
        "QWindow::Visibility",
        "setHasAcrylicSurface",
        "setMinimalView",
        "sendHotkey",
        "Qt::Key",
        "key",
        "Qt::KeyboardModifiers",
        "modifiers",
        "sendVLCHotkey",
        "vlcHotkey",
        "emitBoss",
        "emitRaise",
        "emitShow",
        "reloadPrefs",
        "getExtraInterfaces",
        "VLCVarChoiceModel*",
        "pasteFromClipboard",
        "onInputChanged",
        "useTopLevelWindowForToolTip",
        "backdropBlurRequested",
        "setCursor",
        "Qt::CursorShape",
        "cursor",
        "restoreCursor",
        "QQuickItem*",
        "item",
        "unsetCursor",
        "qtVersion",
        "qtVersionCheck",
        "major",
        "minor",
        "patch",
        "qtQuickControlRejectsHoverEvents",
        "urlListToMimeData",
        "QJSValue",
        "array",
        "setFiltersChildMouseEvents",
        "enable",
        "effectiveDevicePixelRatio",
        "const QQuickWindow*",
        "window",
        "windowHasDepthBuffer",
        "const QWindow*",
        "platformHandlesResizeWithCSD",
        "platformHandlesTitleBarButtonsWithCSD",
        "platformHandlesShadowsWithCSD",
        "settingValue",
        "QVariant",
        "defaultValue",
        "setSettingValue",
        "value",
        "setAttachedToolTip",
        "toolTip",
        "dp",
        "px",
        "scale",
        "useXmasCone",
        "folderMRL",
        "QUrl",
        "fileMRL",
        "displayMRL",
        "mrl",
        "playlistDocked",
        "playlistVisible",
        "playlistWidthFactor",
        "playerPlaylistWidthFactor",
        "artistAlbumsWidthFactor",
        "interfaceAlwaysOnTop",
        "hasEmbededVideo",
        "showRemainingTime",
        "extraInterfaces",
        "intfScaleFactor",
        "mediaLibraryAvailable",
        "mediaLibrary",
        "MediaLib*",
        "gridView",
        "hasGridListMode",
        "grouping",
        "colorScheme",
        "ColorSchemeModel*",
        "hasVLM",
        "clientSideDecoration",
        "hasFirstrun",
        "csdBorderSize",
        "hasToolbarMenu",
        "canShowVideoPIP",
        "pinVideoControls",
        "pinOpacity",
        "controlbarProfileModel",
        "ControlbarProfileModel*",
        "hasAcrylicSurface",
        "smoothScroll",
        "intfMainWindow",
        "QWindow*",
        "useGlobalShortcuts",
        "maxVolume",
        "safeArea",
        "videoSurfaceProvider",
        "VideoSurfaceProvider*",
        "mouseHideTimeout",
        "albumSections",
        "csdButtonModel",
        "CSDButtonModel*",
        "osName",
        "OsType",
        "osVersion",
        "minimalView",
        "acrylicActive",
        "preferHotkeys",
        "bgCone",
        "windowSuportExtendedFrame",
        "windowExtendedMargin",
        "search",
        "SearchCtx*",
        "sort",
        "SortCtx*",
        "GROUPING_NONE",
        "GROUPING_NAME",
        "GROUPING_FOLDER",
        "Windows",
        "Unknown"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'fullscreenInterfaceToggled'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'setInterfaceVisibible'
        QtMocHelpers::SignalData<void(bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'setInterfaceFullScreen'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'toggleWindowVisibility'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'askToQuit'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'askShow'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'askBoss'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'askRaise'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'kc_pressed'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'playlistDockedChanged'
        QtMocHelpers::SignalData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'playlistVisibleChanged'
        QtMocHelpers::SignalData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'playlistWidthFactorChanged'
        QtMocHelpers::SignalData<void(double)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 2 },
        }}),
        // Signal 'playerPlaylistFactorChanged'
        QtMocHelpers::SignalData<void(double)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 2 },
        }}),
        // Signal 'interfaceAlwaysOnTopChanged'
        QtMocHelpers::SignalData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'hasEmbededVideoChanged'
        QtMocHelpers::SignalData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'showRemainingTimeChanged'
        QtMocHelpers::SignalData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'gridViewChanged'
        QtMocHelpers::SignalData<void(bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'hasGridListModeChanged'
        QtMocHelpers::SignalData<void(bool)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'groupingChanged'
        QtMocHelpers::SignalData<void(enum Grouping)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 2 },
        }}),
        // Signal 'albumSectionsChanged'
        QtMocHelpers::SignalData<void(bool)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'colorSchemeChanged'
        QtMocHelpers::SignalData<void(QString)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'useClientSideDecorationChanged'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hasToolbarMenuChanged'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestInterfaceMaximized'
        QtMocHelpers::SignalData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestInterfaceNormal'
        QtMocHelpers::SignalData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestInterfaceMinimized'
        QtMocHelpers::SignalData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'intfScaleFactorChanged'
        QtMocHelpers::SignalData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'intfDevicePixelRatioChanged'
        QtMocHelpers::SignalData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pinVideoControlsChanged'
        QtMocHelpers::SignalData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pinOpacityChanged'
        QtMocHelpers::SignalData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hasAcrylicSurfaceChanged'
        QtMocHelpers::SignalData<void(bool)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'minimalViewChanged'
        QtMocHelpers::SignalData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'acrylicActiveChanged'
        QtMocHelpers::SignalData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'smoothScrollChanged'
        QtMocHelpers::SignalData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'preferHotkeysChanged'
        QtMocHelpers::SignalData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'useGlobalShortcutsChanged'
        QtMocHelpers::SignalData<void(bool)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'maxVolumeChanged'
        QtMocHelpers::SignalData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'safeAreaChanged'
        QtMocHelpers::SignalData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'mouseHideTimeoutChanged'
        QtMocHelpers::SignalData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'navBoxToggled'
        QtMocHelpers::SignalData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'bgConeToggled'
        QtMocHelpers::SignalData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowSuportExtendedFrameChanged'
        QtMocHelpers::SignalData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowExtendedMarginChanged'
        QtMocHelpers::SignalData<void(unsigned )>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 46 },
        }}),
        // Signal 'requestShowMainView'
        QtMocHelpers::SignalData<void()>(47, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestShowPlayerView'
        QtMocHelpers::SignalData<void()>(48, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'artistAlbumsWidthFactorChanged'
        QtMocHelpers::SignalData<void(double)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 2 },
        }}),
        // Slot 'toggleToolbarMenu'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggleInterfaceFullScreen'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setPlaylistDocked'
        QtMocHelpers::SlotData<void(bool)>(52, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setPlaylistVisible'
        QtMocHelpers::SlotData<void(bool)>(53, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setPlaylistWidthFactor'
        QtMocHelpers::SlotData<void(double)>(54, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 2 },
        }}),
        // Slot 'setPlayerPlaylistWidthFactor'
        QtMocHelpers::SlotData<void(double)>(55, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 56 },
        }}),
        // Slot 'setInterfaceAlwaysOnTop'
        QtMocHelpers::SlotData<void(bool)>(57, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setShowRemainingTime'
        QtMocHelpers::SlotData<void(bool)>(58, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setGridView'
        QtMocHelpers::SlotData<void(bool)>(59, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setGrouping'
        QtMocHelpers::SlotData<void(enum Grouping)>(60, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 2 },
        }}),
        // Slot 'setAlbumSections'
        QtMocHelpers::SlotData<void(bool)>(61, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'incrementIntfUserScaleFactor'
        QtMocHelpers::SlotData<void(bool)>(62, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 63 },
        }}),
        // Slot 'setIntfUserScaleFactor'
        QtMocHelpers::SlotData<void(double)>(64, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 2 },
        }}),
        // Slot 'setHasToolbarMenu'
        QtMocHelpers::SlotData<void(bool)>(65, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setPinVideoControls'
        QtMocHelpers::SlotData<void(bool)>(66, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setPinOpacity'
        QtMocHelpers::SlotData<void(float)>(67, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 2 },
        }}),
        // Slot 'setbgCone'
        QtMocHelpers::SlotData<void(bool)>(68, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'updateIntfScaleFactor'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onWindowVisibilityChanged'
        QtMocHelpers::SlotData<void(QWindow::Visibility)>(70, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 71, 2 },
        }}),
        // Slot 'setHasAcrylicSurface'
        QtMocHelpers::SlotData<void(bool)>(72, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setMinimalView'
        QtMocHelpers::SlotData<void(bool)>(73, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'sendHotkey'
        QtMocHelpers::SlotData<void(Qt::Key, Qt::KeyboardModifiers)>(74, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 75, 76 }, { 0x80000000 | 77, 78 },
        }}),
        // Slot 'sendVLCHotkey'
        QtMocHelpers::SlotData<void(int)>(79, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 80 },
        }}),
        // Slot 'emitBoss'
        QtMocHelpers::SlotData<void()>(81, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'emitRaise'
        QtMocHelpers::SlotData<void()>(82, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'emitShow'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reloadPrefs'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getExtraInterfaces'
        QtMocHelpers::SlotData<VLCVarChoiceModel *()>(85, 2, QMC::AccessPublic, 0x80000000 | 86),
        // Slot 'pasteFromClipboard'
        QtMocHelpers::SlotData<bool()>(87, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'onInputChanged'
        QtMocHelpers::SlotData<void(bool)>(88, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Method 'useTopLevelWindowForToolTip'
        QtMocHelpers::MethodData<bool()>(89, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'backdropBlurRequested'
        QtMocHelpers::MethodData<bool() const>(90, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'setCursor'
        QtMocHelpers::MethodData<void(Qt::CursorShape)>(91, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 92, 93 },
        }}),
        // Method 'restoreCursor'
        QtMocHelpers::MethodData<void()>(94, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'setCursor'
        QtMocHelpers::MethodData<void(QQuickItem *, Qt::CursorShape)>(91, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 95, 96 }, { 0x80000000 | 92, 93 },
        }}),
        // Method 'unsetCursor'
        QtMocHelpers::MethodData<void(QQuickItem *)>(97, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 95, 96 },
        }}),
        // Method 'qtVersion'
        QtMocHelpers::MethodData<unsigned int()>(98, 2, QMC::AccessPublic, QMetaType::UInt),
        // Method 'qtVersionCheck'
        QtMocHelpers::MethodData<unsigned int(unsigned char, unsigned char, unsigned char)>(99, 2, QMC::AccessPublic, QMetaType::UInt, {{
            { QMetaType::UChar, 100 }, { QMetaType::UChar, 101 }, { QMetaType::UChar, 102 },
        }}),
        // Method 'qtQuickControlRejectsHoverEvents'
        QtMocHelpers::MethodData<bool()>(103, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'urlListToMimeData'
        QtMocHelpers::MethodData<QJSValue(const QJSValue &)>(104, 2, QMC::AccessPublic, 0x80000000 | 105, {{
            { 0x80000000 | 105, 106 },
        }}),
        // Method 'setFiltersChildMouseEvents'
        QtMocHelpers::MethodData<void(QQuickItem *, bool)>(107, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 95, 96 }, { QMetaType::Bool, 108 },
        }}),
        // Method 'effectiveDevicePixelRatio'
        QtMocHelpers::MethodData<qreal(const QQuickWindow *)>(109, 2, QMC::AccessPublic, QMetaType::QReal, {{
            { 0x80000000 | 110, 111 },
        }}),
        // Method 'windowHasDepthBuffer'
        QtMocHelpers::MethodData<bool(const QWindow *)>(112, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 113, 111 },
        }}),
        // Method 'platformHandlesResizeWithCSD'
        QtMocHelpers::MethodData<bool() const>(114, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'platformHandlesTitleBarButtonsWithCSD'
        QtMocHelpers::MethodData<bool() const>(115, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'platformHandlesShadowsWithCSD'
        QtMocHelpers::MethodData<bool() const>(116, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'settingValue'
        QtMocHelpers::MethodData<QVariant(const QString &, const QVariant &) const>(117, 2, QMC::AccessPublic, 0x80000000 | 118, {{
            { QMetaType::QString, 76 }, { 0x80000000 | 118, 119 },
        }}),
        // Method 'setSettingValue'
        QtMocHelpers::MethodData<void(const QString &, const QVariant &)>(120, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 76 }, { 0x80000000 | 118, 121 },
        }}),
        // Method 'setAttachedToolTip'
        QtMocHelpers::MethodData<void(QObject *)>(122, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QObjectStar, 123 },
        }}),
        // Method 'dp'
        QtMocHelpers::MethodData<double(const double, const double)>(124, 2, QMC::AccessPublic, QMetaType::Double, {{
            { QMetaType::Double, 125 }, { QMetaType::Double, 126 },
        }}),
        // Method 'dp'
        QtMocHelpers::MethodData<double(const double) const>(124, 2, QMC::AccessPublic, QMetaType::Double, {{
            { QMetaType::Double, 125 },
        }}),
        // Method 'useXmasCone'
        QtMocHelpers::MethodData<bool() const>(127, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'folderMRL'
        QtMocHelpers::MethodData<QUrl(const QString &) const>(128, 2, QMC::AccessPublic, 0x80000000 | 129, {{
            { QMetaType::QString, 130 },
        }}),
        // Method 'folderMRL'
        QtMocHelpers::MethodData<QUrl(const QUrl &) const>(128, 2, QMC::AccessPublic, 0x80000000 | 129, {{
            { 0x80000000 | 129, 130 },
        }}),
        // Method 'displayMRL'
        QtMocHelpers::MethodData<QString(const QUrl &) const>(131, 2, QMC::AccessPublic, QMetaType::QString, {{
            { 0x80000000 | 129, 132 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'playlistDocked'
        QtMocHelpers::PropertyData<bool>(133, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 9),
        // property 'playlistVisible'
        QtMocHelpers::PropertyData<bool>(134, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 10),
        // property 'playlistWidthFactor'
        QtMocHelpers::PropertyData<double>(135, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 11),
        // property 'playerPlaylistWidthFactor'
        QtMocHelpers::PropertyData<double>(136, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 12),
        // property 'artistAlbumsWidthFactor'
        QtMocHelpers::PropertyData<double>(137, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 45),
        // property 'interfaceAlwaysOnTop'
        QtMocHelpers::PropertyData<bool>(138, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 13),
        // property 'hasEmbededVideo'
        QtMocHelpers::PropertyData<bool>(139, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 14),
        // property 'showRemainingTime'
        QtMocHelpers::PropertyData<bool>(140, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 15),
        // property 'extraInterfaces'
        QtMocHelpers::PropertyData<VLCVarChoiceModel*>(141, 0x80000000 | 86, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'intfScaleFactor'
        QtMocHelpers::PropertyData<double>(142, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Final, 26),
        // property 'mediaLibraryAvailable'
        QtMocHelpers::PropertyData<bool>(143, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'mediaLibrary'
        QtMocHelpers::PropertyData<MediaLib*>(144, 0x80000000 | 145, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'gridView'
        QtMocHelpers::PropertyData<bool>(146, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 16),
        // property 'hasGridListMode'
        QtMocHelpers::PropertyData<bool>(147, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 17),
        // property 'grouping'
        QtMocHelpers::PropertyData<enum Grouping>(148, 0x80000000 | 21, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 18),
        // property 'colorScheme'
        QtMocHelpers::PropertyData<ColorSchemeModel*>(149, 0x80000000 | 150, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'hasVLM'
        QtMocHelpers::PropertyData<bool>(151, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'clientSideDecoration'
        QtMocHelpers::PropertyData<bool>(152, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 21),
        // property 'hasFirstrun'
        QtMocHelpers::PropertyData<bool>(153, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'csdBorderSize'
        QtMocHelpers::PropertyData<int>(154, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Final, 21),
        // property 'hasToolbarMenu'
        QtMocHelpers::PropertyData<bool>(155, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 22),
        // property 'canShowVideoPIP'
        QtMocHelpers::PropertyData<bool>(156, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'pinVideoControls'
        QtMocHelpers::PropertyData<bool>(157, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 28),
        // property 'pinOpacity'
        QtMocHelpers::PropertyData<float>(158, QMetaType::Float, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 29),
        // property 'controlbarProfileModel'
        QtMocHelpers::PropertyData<ControlbarProfileModel*>(159, 0x80000000 | 160, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'hasAcrylicSurface'
        QtMocHelpers::PropertyData<bool>(161, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 30),
        // property 'smoothScroll'
        QtMocHelpers::PropertyData<bool>(162, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 33),
        // property 'intfMainWindow'
        QtMocHelpers::PropertyData<QWindow*>(163, 0x80000000 | 164, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'useGlobalShortcuts'
        QtMocHelpers::PropertyData<bool>(165, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 35),
        // property 'maxVolume'
        QtMocHelpers::PropertyData<int>(166, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Final, 36),
        // property 'safeArea'
        QtMocHelpers::PropertyData<float>(167, QMetaType::Float, QMC::DefaultPropertyFlags | QMC::Final, 37),
        // property 'videoSurfaceProvider'
        QtMocHelpers::PropertyData<VideoSurfaceProvider*>(168, 0x80000000 | 169, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 14),
        // property 'mouseHideTimeout'
        QtMocHelpers::PropertyData<int>(170, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Final, 38),
        // property 'albumSections'
        QtMocHelpers::PropertyData<bool>(171, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 19),
        // property 'csdButtonModel'
        QtMocHelpers::PropertyData<CSDButtonModel*>(172, 0x80000000 | 173, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'osName'
        QtMocHelpers::PropertyData<enum OsType>(174, 0x80000000 | 175, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'osVersion'
        QtMocHelpers::PropertyData<int>(176, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'minimalView'
        QtMocHelpers::PropertyData<bool>(177, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 31),
        // property 'acrylicActive'
        QtMocHelpers::PropertyData<bool>(178, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 32),
        // property 'preferHotkeys'
        QtMocHelpers::PropertyData<bool>(179, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 34),
        // property 'bgCone'
        QtMocHelpers::PropertyData<bool>(180, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 40),
        // property 'windowSuportExtendedFrame'
        QtMocHelpers::PropertyData<bool>(181, QMetaType::Bool, QMC::DefaultPropertyFlags, 41),
        // property 'windowExtendedMargin'
        QtMocHelpers::PropertyData<uint>(182, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 42),
        // property 'search'
        QtMocHelpers::PropertyData<SearchCtx*>(183, 0x80000000 | 184, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'sort'
        QtMocHelpers::PropertyData<SortCtx*>(185, 0x80000000 | 186, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Grouping'
        QtMocHelpers::EnumData<enum Grouping>(21, 21, QMC::EnumFlags{}).add({
            {  187, Grouping::GROUPING_NONE },
            {  188, Grouping::GROUPING_NAME },
            {  189, Grouping::GROUPING_FOLDER },
        }),
        // enum 'OsType'
        QtMocHelpers::EnumData<enum OsType>(175, 175, QMC::EnumFlags{}).add({
            {  190, OsType::Windows },
            {  191, OsType::Unknown },
        }),
    };
    return QtMocHelpers::metaObjectData<MainCtx, qt_meta_tag_ZN7MainCtxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainCtx::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7MainCtxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7MainCtxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7MainCtxE_t>.metaTypes,
    nullptr
} };

void MainCtx::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainCtx *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fullscreenInterfaceToggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->setInterfaceVisibible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->setInterfaceFullScreen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->toggleWindowVisibility(); break;
        case 4: _t->askToQuit(); break;
        case 5: _t->askShow(); break;
        case 6: _t->askBoss(); break;
        case 7: _t->askRaise(); break;
        case 8: _t->kc_pressed(); break;
        case 9: _t->playlistDockedChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->playlistVisibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->playlistWidthFactorChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 12: _t->playerPlaylistFactorChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->interfaceAlwaysOnTopChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->hasEmbededVideoChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->showRemainingTimeChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->gridViewChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->hasGridListModeChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->groupingChanged((*reinterpret_cast<std::add_pointer_t<enum Grouping>>(_a[1]))); break;
        case 19: _t->albumSectionsChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->colorSchemeChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->useClientSideDecorationChanged(); break;
        case 22: _t->hasToolbarMenuChanged(); break;
        case 23: _t->requestInterfaceMaximized(); break;
        case 24: _t->requestInterfaceNormal(); break;
        case 25: _t->requestInterfaceMinimized(); break;
        case 26: _t->intfScaleFactorChanged(); break;
        case 27: _t->intfDevicePixelRatioChanged(); break;
        case 28: _t->pinVideoControlsChanged(); break;
        case 29: _t->pinOpacityChanged(); break;
        case 30: _t->hasAcrylicSurfaceChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->minimalViewChanged(); break;
        case 32: _t->acrylicActiveChanged(); break;
        case 33: _t->smoothScrollChanged(); break;
        case 34: _t->preferHotkeysChanged(); break;
        case 35: _t->useGlobalShortcutsChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 36: _t->maxVolumeChanged(); break;
        case 37: _t->safeAreaChanged(); break;
        case 38: _t->mouseHideTimeoutChanged(); break;
        case 39: _t->navBoxToggled(); break;
        case 40: _t->bgConeToggled(); break;
        case 41: _t->windowSuportExtendedFrameChanged(); break;
        case 42: _t->windowExtendedMarginChanged((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 43: _t->requestShowMainView(); break;
        case 44: _t->requestShowPlayerView(); break;
        case 45: _t->artistAlbumsWidthFactorChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 46: _t->toggleToolbarMenu(); break;
        case 47: _t->toggleInterfaceFullScreen(); break;
        case 48: _t->setPlaylistDocked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 49: _t->setPlaylistVisible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 50: _t->setPlaylistWidthFactor((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 51: _t->setPlayerPlaylistWidthFactor((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 52: _t->setInterfaceAlwaysOnTop((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 53: _t->setShowRemainingTime((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 54: _t->setGridView((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 55: _t->setGrouping((*reinterpret_cast<std::add_pointer_t<enum Grouping>>(_a[1]))); break;
        case 56: _t->setAlbumSections((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 57: _t->incrementIntfUserScaleFactor((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 58: _t->setIntfUserScaleFactor((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 59: _t->setHasToolbarMenu((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 60: _t->setPinVideoControls((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 61: _t->setPinOpacity((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 62: _t->setbgCone((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 63: _t->updateIntfScaleFactor(); break;
        case 64: _t->onWindowVisibilityChanged((*reinterpret_cast<std::add_pointer_t<QWindow::Visibility>>(_a[1]))); break;
        case 65: _t->setHasAcrylicSurface((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 66: _t->setMinimalView((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 67: _t->sendHotkey((*reinterpret_cast<std::add_pointer_t<Qt::Key>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::KeyboardModifiers>>(_a[2]))); break;
        case 68: _t->sendVLCHotkey((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 69: _t->emitBoss(); break;
        case 70: _t->emitRaise(); break;
        case 71: _t->emitShow(); break;
        case 72: _t->reloadPrefs(); break;
        case 73: { VLCVarChoiceModel* _r = _t->getExtraInterfaces();
            if (_a[0]) *reinterpret_cast<VLCVarChoiceModel**>(_a[0]) = std::move(_r); }  break;
        case 74: { bool _r = _t->pasteFromClipboard();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 75: _t->onInputChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 76: { bool _r = _t->useTopLevelWindowForToolTip();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 77: { bool _r = _t->backdropBlurRequested();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 78: _t->setCursor((*reinterpret_cast<std::add_pointer_t<Qt::CursorShape>>(_a[1]))); break;
        case 79: _t->restoreCursor(); break;
        case 80: _t->setCursor((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::CursorShape>>(_a[2]))); break;
        case 81: _t->unsetCursor((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 82: { uint _r = _t->qtVersion();
            if (_a[0]) *reinterpret_cast<uint*>(_a[0]) = std::move(_r); }  break;
        case 83: { uint _r = _t->qtVersionCheck((*reinterpret_cast<std::add_pointer_t<uchar>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uchar>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<uchar>>(_a[3])));
            if (_a[0]) *reinterpret_cast<uint*>(_a[0]) = std::move(_r); }  break;
        case 84: { bool _r = _t->qtQuickControlRejectsHoverEvents();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 85: { QJSValue _r = _t->urlListToMimeData((*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 86: _t->setFiltersChildMouseEvents((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 87: { qreal _r = _t->effectiveDevicePixelRatio((*reinterpret_cast<std::add_pointer_t<const QQuickWindow*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<qreal*>(_a[0]) = std::move(_r); }  break;
        case 88: { bool _r = _t->windowHasDepthBuffer((*reinterpret_cast<std::add_pointer_t<const QWindow*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 89: { bool _r = _t->platformHandlesResizeWithCSD();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 90: { bool _r = _t->platformHandlesTitleBarButtonsWithCSD();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 91: { bool _r = _t->platformHandlesShadowsWithCSD();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 92: { QVariant _r = _t->settingValue((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 93: _t->setSettingValue((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 94: _t->setAttachedToolTip((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 95: { double _r = _t->dp((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])));
            if (_a[0]) *reinterpret_cast<double*>(_a[0]) = std::move(_r); }  break;
        case 96: { double _r = _t->dp((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])));
            if (_a[0]) *reinterpret_cast<double*>(_a[0]) = std::move(_r); }  break;
        case 97: { bool _r = _t->useXmasCone();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 98: { QUrl _r = _t->folderMRL((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QUrl*>(_a[0]) = std::move(_r); }  break;
        case 99: { QUrl _r = _t->folderMRL((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QUrl*>(_a[0]) = std::move(_r); }  break;
        case 100: { QString _r = _t->displayMRL((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 80:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 81:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 85:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 86:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(bool )>(_a, &MainCtx::fullscreenInterfaceToggled, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(bool )>(_a, &MainCtx::setInterfaceVisibible, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(bool )>(_a, &MainCtx::setInterfaceFullScreen, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::toggleWindowVisibility, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::askToQuit, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::askShow, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::askBoss, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::askRaise, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::kc_pressed, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(bool )>(_a, &MainCtx::playlistDockedChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(bool )>(_a, &MainCtx::playlistVisibleChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(double )>(_a, &MainCtx::playlistWidthFactorChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(double )>(_a, &MainCtx::playerPlaylistFactorChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(bool )>(_a, &MainCtx::interfaceAlwaysOnTopChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(bool )>(_a, &MainCtx::hasEmbededVideoChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(bool )>(_a, &MainCtx::showRemainingTimeChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(bool )>(_a, &MainCtx::gridViewChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(bool )>(_a, &MainCtx::hasGridListModeChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(Grouping )>(_a, &MainCtx::groupingChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(bool )>(_a, &MainCtx::albumSectionsChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(QString )>(_a, &MainCtx::colorSchemeChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::useClientSideDecorationChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::hasToolbarMenuChanged, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::requestInterfaceMaximized, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::requestInterfaceNormal, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::requestInterfaceMinimized, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::intfScaleFactorChanged, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::intfDevicePixelRatioChanged, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::pinVideoControlsChanged, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::pinOpacityChanged, 29))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(bool )>(_a, &MainCtx::hasAcrylicSurfaceChanged, 30))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::minimalViewChanged, 31))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::acrylicActiveChanged, 32))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::smoothScrollChanged, 33))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::preferHotkeysChanged, 34))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(bool )>(_a, &MainCtx::useGlobalShortcutsChanged, 35))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::maxVolumeChanged, 36))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::safeAreaChanged, 37))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::mouseHideTimeoutChanged, 38))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::navBoxToggled, 39))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::bgConeToggled, 40))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::windowSuportExtendedFrameChanged, 41))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(unsigned  )>(_a, &MainCtx::windowExtendedMarginChanged, 42))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::requestShowMainView, 43))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)()>(_a, &MainCtx::requestShowPlayerView, 44))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainCtx::*)(double )>(_a, &MainCtx::artistAlbumsWidthFactorChanged, 45))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 27:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWindow* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isPlaylistDocked(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isPlaylistVisible(); break;
        case 2: *reinterpret_cast<double*>(_v) = _t->getPlaylistWidthFactor(); break;
        case 3: *reinterpret_cast<double*>(_v) = _t->getPlayerPlaylistWidthFactor(); break;
        case 4: *reinterpret_cast<double*>(_v) = _t->artistAlbumsWidthFactor(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->isInterfaceAlwaysOnTop(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->hasEmbededVideo(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isShowRemainingTime(); break;
        case 8: *reinterpret_cast<VLCVarChoiceModel**>(_v) = _t->getExtraInterfaces(); break;
        case 9: *reinterpret_cast<double*>(_v) = _t->getIntfScaleFactor(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->hasMediaLibrary(); break;
        case 11: *reinterpret_cast<MediaLib**>(_v) = _t->getMediaLibrary(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->hasGridView(); break;
        case 13: *reinterpret_cast<bool*>(_v) = _t->m_hasGridListMode; break;
        case 14: *reinterpret_cast<enum Grouping*>(_v) = _t->grouping(); break;
        case 15: *reinterpret_cast<ColorSchemeModel**>(_v) = _t->getColorScheme(); break;
        case 16: *reinterpret_cast<bool*>(_v) = _t->hasVLM(); break;
        case 17: *reinterpret_cast<bool*>(_v) = _t->useClientSideDecoration(); break;
        case 18: *reinterpret_cast<bool*>(_v) = _t->hasFirstrun(); break;
        case 19: *reinterpret_cast<int*>(_v) = _t->CSDBorderSize(); break;
        case 20: *reinterpret_cast<bool*>(_v) = _t->hasToolbarMenu(); break;
        case 21: *reinterpret_cast<bool*>(_v) = _t->canShowVideoPIP(); break;
        case 22: *reinterpret_cast<bool*>(_v) = _t->pinVideoControls(); break;
        case 23: *reinterpret_cast<float*>(_v) = _t->pinOpacity(); break;
        case 24: *reinterpret_cast<ControlbarProfileModel**>(_v) = _t->controlbarProfileModel(); break;
        case 25: *reinterpret_cast<bool*>(_v) = _t->hasAcrylicSurface(); break;
        case 26: *reinterpret_cast<bool*>(_v) = _t->smoothScroll(); break;
        case 27: *reinterpret_cast<QWindow**>(_v) = _t->intfMainWindow(); break;
        case 28: *reinterpret_cast<bool*>(_v) = _t->getUseGlobalShortcuts(); break;
        case 29: *reinterpret_cast<int*>(_v) = _t->maxVolume(); break;
        case 30: *reinterpret_cast<float*>(_v) = _t->safeArea(); break;
        case 31: *reinterpret_cast<VideoSurfaceProvider**>(_v) = _t->getVideoSurfaceProvider(); break;
        case 32: *reinterpret_cast<int*>(_v) = _t->mouseHideTimeout(); break;
        case 33: *reinterpret_cast<bool*>(_v) = _t->albumSections(); break;
        case 34: *reinterpret_cast<CSDButtonModel**>(_v) = _t->csdButtonModel(); break;
        case 35: *reinterpret_cast<enum OsType*>(_v) = _t->getOSName(); break;
        case 36: *reinterpret_cast<int*>(_v) = _t->getOSVersion(); break;
        case 37: *reinterpret_cast<bool*>(_v) = _t->isMinimalView(); break;
        case 38: *reinterpret_cast<bool*>(_v) = _t->acrylicActive(); break;
        case 39: *reinterpret_cast<bool*>(_v) = _t->preferHotkeys(); break;
        case 40: *reinterpret_cast<bool*>(_v) = _t->isbgCone(); break;
        case 41: *reinterpret_cast<bool*>(_v) = _t->windowSuportExtendedFrame(); break;
        case 42: *reinterpret_cast<uint*>(_v) = _t->windowExtendedMargin(); break;
        case 43: *reinterpret_cast<SearchCtx**>(_v) = _t->m_search; break;
        case 44: *reinterpret_cast<SortCtx**>(_v) = _t->m_sort; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlaylistDocked(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setPlaylistVisible(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setPlaylistWidthFactor(*reinterpret_cast<double*>(_v)); break;
        case 3: _t->setPlayerPlaylistWidthFactor(*reinterpret_cast<double*>(_v)); break;
        case 4: _t->setArtistAlbumsWidthFactor(*reinterpret_cast<double*>(_v)); break;
        case 5: _t->setInterfaceAlwaysOnTop(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setShowRemainingTime(*reinterpret_cast<bool*>(_v)); break;
        case 12: _t->setGridView(*reinterpret_cast<bool*>(_v)); break;
        case 13:
            if (QtMocHelpers::setProperty(_t->m_hasGridListMode, *reinterpret_cast<bool*>(_v)))
                Q_EMIT _t->hasGridListModeChanged(_t->m_hasGridListMode);
            break;
        case 14: _t->setGrouping(*reinterpret_cast<enum Grouping*>(_v)); break;
        case 20: _t->setHasToolbarMenu(*reinterpret_cast<bool*>(_v)); break;
        case 22: _t->setPinVideoControls(*reinterpret_cast<bool*>(_v)); break;
        case 23: _t->setPinOpacity(*reinterpret_cast<float*>(_v)); break;
        case 28: _t->setUseGlobalShortcuts(*reinterpret_cast<bool*>(_v)); break;
        case 31: _t->setVideoSurfaceProvider(*reinterpret_cast<VideoSurfaceProvider**>(_v)); break;
        case 33: _t->setAlbumSections(*reinterpret_cast<bool*>(_v)); break;
        case 37: _t->setMinimalView(*reinterpret_cast<bool*>(_v)); break;
        case 38: _t->setAcrylicActive(*reinterpret_cast<bool*>(_v)); break;
        case 39: _t->setPreferHotkeys(*reinterpret_cast<bool*>(_v)); break;
        case 40: _t->setbgCone(*reinterpret_cast<bool*>(_v)); break;
        case 42: _t->setWindowExtendedMargin(*reinterpret_cast<uint*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *MainCtx::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainCtx::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7MainCtxE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainCtx::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 101)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 101;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 101)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 101;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
    return _id;
}

// SIGNAL 0
void MainCtx::fullscreenInterfaceToggled(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void MainCtx::setInterfaceVisibible(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void MainCtx::setInterfaceFullScreen(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void MainCtx::toggleWindowVisibility()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainCtx::askToQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MainCtx::askShow()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MainCtx::askBoss()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MainCtx::askRaise()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MainCtx::kc_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MainCtx::playlistDockedChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void MainCtx::playlistVisibleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void MainCtx::playlistWidthFactorChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void MainCtx::playerPlaylistFactorChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void MainCtx::interfaceAlwaysOnTopChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void MainCtx::hasEmbededVideoChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void MainCtx::showRemainingTimeChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void MainCtx::gridViewChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void MainCtx::hasGridListModeChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void MainCtx::groupingChanged(Grouping _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void MainCtx::albumSectionsChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}

// SIGNAL 20
void MainCtx::colorSchemeChanged(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1);
}

// SIGNAL 21
void MainCtx::useClientSideDecorationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void MainCtx::hasToolbarMenuChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void MainCtx::requestInterfaceMaximized()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void MainCtx::requestInterfaceNormal()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void MainCtx::requestInterfaceMinimized()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void MainCtx::intfScaleFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void MainCtx::intfDevicePixelRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void MainCtx::pinVideoControlsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void MainCtx::pinOpacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void MainCtx::hasAcrylicSurfaceChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 30, nullptr, _t1);
}

// SIGNAL 31
void MainCtx::minimalViewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void MainCtx::acrylicActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void MainCtx::smoothScrollChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void MainCtx::preferHotkeysChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void MainCtx::useGlobalShortcutsChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 35, nullptr, _t1);
}

// SIGNAL 36
void MainCtx::maxVolumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void MainCtx::safeAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void MainCtx::mouseHideTimeoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void MainCtx::navBoxToggled()
{
    QMetaObject::activate(this, &staticMetaObject, 39, nullptr);
}

// SIGNAL 40
void MainCtx::bgConeToggled()
{
    QMetaObject::activate(this, &staticMetaObject, 40, nullptr);
}

// SIGNAL 41
void MainCtx::windowSuportExtendedFrameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 41, nullptr);
}

// SIGNAL 42
void MainCtx::windowExtendedMarginChanged(unsigned  _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 42, nullptr, _t1);
}

// SIGNAL 43
void MainCtx::requestShowMainView()
{
    QMetaObject::activate(this, &staticMetaObject, 43, nullptr);
}

// SIGNAL 44
void MainCtx::requestShowPlayerView()
{
    QMetaObject::activate(this, &staticMetaObject, 44, nullptr);
}

// SIGNAL 45
void MainCtx::artistAlbumsWidthFactorChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 45, nullptr, _t1);
}
QT_WARNING_POP

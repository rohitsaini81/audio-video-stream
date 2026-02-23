/****************************************************************************
** Meta object code from reading C++ file 'player_controller.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "player_controller.hpp"
#include "util/renderer_manager.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player_controller.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16PlayerControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto PlayerController::qt_create_metaobjectdata<qt_meta_tag_ZN16PlayerControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlayerController",
        "playingStateChanged",
        "",
        "PlayingState",
        "state",
        "inputChanged",
        "hasInput",
        "nameChanged",
        "bufferingChanged",
        "rateChanged",
        "timeChanged",
        "VLCTime",
        "remainingTimeChanged",
        "positionChanged",
        "lengthChanged",
        "VLCDuration",
        "positionUpdated",
        "seekRequested",
        "pos",
        "seekableChanged",
        "rewindableChanged",
        "pausableChanged",
        "recordableChanged",
        "rateChangableChanged",
        "playbackRestoreQueried",
        "audioDelayChanged",
        "subtitleDelayChanged",
        "secondarySubtitleDelayChanged",
        "subtitleFPSChanged",
        "hasTitlesChanged",
        "hasChaptersChanged",
        "hasMenuChanged",
        "isMenuChanged",
        "isInteractiveChanged",
        "hasProgramsChanged",
        "isEncryptedChanged",
        "teletextEnabledChanged",
        "teletextAvailableChanged",
        "teletextPageChanged",
        "teletextTransparencyChanged",
        "hasVideoOutputChanged",
        "fullscreenChanged",
        "wallpaperModeChanged",
        "autoscaleChanged",
        "voutListChanged",
        "vout_thread_t**",
        "pp_vout",
        "i_vout",
        "volumeChanged",
        "soundMuteChanged",
        "hasAudioVisualizationChanged",
        "recordingChanged",
        "ABLoopStateChanged",
        "ABLoopState",
        "ABLoopAChanged",
        "ABLoopBChanged",
        "highResolutionTimeChanged",
        "resumePlayback",
        "statisticsUpdated",
        "input_stats_t",
        "stats",
        "infoChanged",
        "input_item_t*",
        "currentMetaChanged",
        "metaChanged",
        "artChanged",
        "bookmarksChanged",
        "epgChanged",
        "reverse",
        "slower",
        "faster",
        "littlefaster",
        "littleslower",
        "normalRate",
        "jumpFwd",
        "jumpBwd",
        "jumpToTime",
        "i_time",
        "jumpToPos",
        "frameNext",
        "sectionNext",
        "sectionPrev",
        "sectionMenu",
        "chapterNext",
        "chapterPrev",
        "titleNext",
        "titlePrev",
        "changeProgram",
        "navigateUp",
        "navigateDown",
        "navigateLeft",
        "navigateRight",
        "navigateActivate",
        "toggleFullscreen",
        "setVolumeUp",
        "steps",
        "setVolumeDown",
        "toggleMuted",
        "toggleABloopState",
        "snapshot",
        "toggleRecord",
        "toggleVisualization",
        "requestAddSMPTETimer",
        "requestRemoveSMPTETimer",
        "getPlayingState",
        "isStarted",
        "getName",
        "getBuffering",
        "getRate",
        "setRate",
        "getTime",
        "setTime",
        "getRemainingTime",
        "getPosition",
        "setPosition",
        "getLength",
        "isSeekable",
        "isRewindable",
        "isPausable",
        "isRateChangable",
        "updatePositionFromTimer",
        "updateTimeFromTimer",
        "canRestorePlayback",
        "restorePlaybackPos",
        "openVLsub",
        "acknowledgeRestoreCallback",
        "getUrl",
        "QUrl",
        "getVideoTracks",
        "TrackListModel*",
        "getAudioTracks",
        "getSubtitleTracks",
        "getAudioDelay",
        "setAudioDelay",
        "addAudioDelay",
        "getSubtitleDelay",
        "getSecondarySubtitleDelay",
        "setSubtitleDelay",
        "addSubtitleDelay",
        "setSecondarySubtitleDelay",
        "addSecondarySubtitleDelay",
        "getAudioDelayMS",
        "setAudioDelayMS",
        "getSubtitleDelayMS",
        "setSubtitleDelayMS",
        "getSecondarySubtitleDelayMS",
        "setSecondarySubtitleDelayMS",
        "getSubtitleFPS",
        "setSubtitleFPS",
        "getTitles",
        "TitleListModel*",
        "getChapters",
        "ChapterListModel*",
        "hasTitles",
        "hasChapters",
        "hasMenu",
        "isMenu",
        "isInteractive",
        "getPrograms",
        "ProgramListModel*",
        "hasPrograms",
        "isEncrypted",
        "isTeletextEnabled",
        "enableTeletext",
        "enable",
        "isTeletextAvailable",
        "getTeletextPage",
        "setTeletextPage",
        "page",
        "getTeletextTransparency",
        "setTeletextTransparency",
        "transparent",
        "hasVideoOutput",
        "getVideoStereoMode",
        "VLCVarChoiceModel*",
        "getZoom",
        "getAspectRatio",
        "getCrop",
        "getFit",
        "getDeinterlace",
        "getDeinterlaceMode",
        "isFullscreen",
        "setFullscreen",
        "getWallpaperMode",
        "setWallpaperMode",
        "getAutoscale",
        "setAutoscale",
        "getVolume",
        "setVolume",
        "volume",
        "isMuted",
        "setMuted",
        "muted",
        "getAudioDevices",
        "AudioDeviceModel*",
        "getAudioStereoMode",
        "getAudioMixMode",
        "getAudioVisualizations",
        "hasAudioVisualization",
        "isRecording",
        "setRecording",
        "record",
        "setABloopState",
        "getABloopState",
        "getABLoopA",
        "getABLoopB",
        "highResolutionTime",
        "associateSubtitleFile",
        "uri",
        "getTitle",
        "getArtist",
        "getAlbum",
        "getArtwork",
        "getRendererManager",
        "RendererManager*",
        "playingState",
        "name",
        "buffering",
        "rate",
        "url",
        "time",
        "remainingTime",
        "position",
        "length",
        "seekable",
        "rewindable",
        "pausable",
        "ratechangable",
        "title",
        "artist",
        "album",
        "artwork",
        "videoTracks",
        "audioTracks",
        "subtitleTracks",
        "audioDelay",
        "subtitleDelay",
        "secondarySubtitleDelay",
        "audioDelayMS",
        "subtitleDelayMS",
        "secondarySubtitleDelayMS",
        "subtitleFPS",
        "titles",
        "chapters",
        "programs",
        "teletextEnabled",
        "teletextPage",
        "teletextTransparency",
        "videoStereoMode",
        "zoom",
        "aspectRatio",
        "crop",
        "fit",
        "deinterlace",
        "deinterlaceMode",
        "fullscreen",
        "wallpaperMode",
        "autoscale",
        "audioDevices",
        "audioStereoMode",
        "audioMixMode",
        "audioVisualization",
        "ABloopState",
        "ABLoopA",
        "ABLoopB",
        "recording",
        "rendererManager",
        "ABLOOP_STATE_NONE",
        "ABLOOP_STATE_A",
        "ABLOOP_STATE_B",
        "PLAYING_STATE_STARTED",
        "PLAYING_STATE_PLAYING",
        "PLAYING_STATE_PAUSED",
        "PLAYING_STATE_STOPPING",
        "PLAYING_STATE_STOPPED",
        "Telekeys",
        "TELE_RED",
        "TELE_GREEN",
        "TELE_YELLOW",
        "TELE_BLUE",
        "TELE_INDEX"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'playingStateChanged'
        QtMocHelpers::SignalData<void(enum PlayingState)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'inputChanged'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'nameChanged'
        QtMocHelpers::SignalData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'bufferingChanged'
        QtMocHelpers::SignalData<void(float)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 2 },
        }}),
        // Signal 'rateChanged'
        QtMocHelpers::SignalData<void(float)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 2 },
        }}),
        // Signal 'timeChanged'
        QtMocHelpers::SignalData<void(VLCTime)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Signal 'remainingTimeChanged'
        QtMocHelpers::SignalData<void(VLCTime)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Signal 'positionChanged'
        QtMocHelpers::SignalData<void(double)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 2 },
        }}),
        // Signal 'lengthChanged'
        QtMocHelpers::SignalData<void(VLCDuration)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Signal 'positionUpdated'
        QtMocHelpers::SignalData<void(double, VLCTime, VLCDuration)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 2 }, { 0x80000000 | 11, 2 }, { 0x80000000 | 15, 2 },
        }}),
        // Signal 'seekRequested'
        QtMocHelpers::SignalData<void(double)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 18 },
        }}),
        // Signal 'seekableChanged'
        QtMocHelpers::SignalData<void(bool)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'rewindableChanged'
        QtMocHelpers::SignalData<void(bool)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'pausableChanged'
        QtMocHelpers::SignalData<void(bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'recordableChanged'
        QtMocHelpers::SignalData<void(bool)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'rateChangableChanged'
        QtMocHelpers::SignalData<void(bool)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'playbackRestoreQueried'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'audioDelayChanged'
        QtMocHelpers::SignalData<void(VLCDuration)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Signal 'subtitleDelayChanged'
        QtMocHelpers::SignalData<void(VLCDuration)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Signal 'secondarySubtitleDelayChanged'
        QtMocHelpers::SignalData<void(VLCDuration)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Signal 'subtitleFPSChanged'
        QtMocHelpers::SignalData<void(float)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 2 },
        }}),
        // Signal 'hasTitlesChanged'
        QtMocHelpers::SignalData<void(bool)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'hasChaptersChanged'
        QtMocHelpers::SignalData<void(bool)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'hasMenuChanged'
        QtMocHelpers::SignalData<void(bool)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'isMenuChanged'
        QtMocHelpers::SignalData<void(bool)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'isInteractiveChanged'
        QtMocHelpers::SignalData<void(bool)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'hasProgramsChanged'
        QtMocHelpers::SignalData<void(bool)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'isEncryptedChanged'
        QtMocHelpers::SignalData<void(bool)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'teletextEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'teletextAvailableChanged'
        QtMocHelpers::SignalData<void(bool)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'teletextPageChanged'
        QtMocHelpers::SignalData<void(int)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'teletextTransparencyChanged'
        QtMocHelpers::SignalData<void(bool)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'hasVideoOutputChanged'
        QtMocHelpers::SignalData<void(bool)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'fullscreenChanged'
        QtMocHelpers::SignalData<void(bool)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'wallpaperModeChanged'
        QtMocHelpers::SignalData<void(bool)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'autoscaleChanged'
        QtMocHelpers::SignalData<void(bool)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'voutListChanged'
        QtMocHelpers::SignalData<void(vout_thread_t * *, int)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 45, 46 }, { QMetaType::Int, 47 },
        }}),
        // Signal 'volumeChanged'
        QtMocHelpers::SignalData<void(float)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 2 },
        }}),
        // Signal 'soundMuteChanged'
        QtMocHelpers::SignalData<void(bool)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'hasAudioVisualizationChanged'
        QtMocHelpers::SignalData<void(bool)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'recordingChanged'
        QtMocHelpers::SignalData<void(bool)>(51, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'ABLoopStateChanged'
        QtMocHelpers::SignalData<void(enum ABLoopState)>(52, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 53, 2 },
        }}),
        // Signal 'ABLoopAChanged'
        QtMocHelpers::SignalData<void(VLCTime)>(54, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Signal 'ABLoopBChanged'
        QtMocHelpers::SignalData<void(VLCTime)>(55, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Signal 'highResolutionTimeChanged'
        QtMocHelpers::SignalData<void(const QString &)>(56, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'resumePlayback'
        QtMocHelpers::SignalData<void(VLCTime)>(57, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Signal 'statisticsUpdated'
        QtMocHelpers::SignalData<void(const input_stats_t &)>(58, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 59, 60 },
        }}),
        // Signal 'infoChanged'
        QtMocHelpers::SignalData<void(input_item_t *)>(61, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 62, 2 },
        }}),
        // Signal 'currentMetaChanged'
        QtMocHelpers::SignalData<void(input_item_t *)>(63, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 62, 2 },
        }}),
        // Signal 'metaChanged'
        QtMocHelpers::SignalData<void(input_item_t *)>(64, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 62, 2 },
        }}),
        // Signal 'artChanged'
        QtMocHelpers::SignalData<void(QString)>(65, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'artChanged'
        QtMocHelpers::SignalData<void(input_item_t *)>(65, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 62, 2 },
        }}),
        // Signal 'bookmarksChanged'
        QtMocHelpers::SignalData<void()>(66, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'epgChanged'
        QtMocHelpers::SignalData<void()>(67, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reverse'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slower'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'faster'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'littlefaster'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'littleslower'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'normalRate'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'jumpFwd'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'jumpBwd'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'jumpToTime'
        QtMocHelpers::SlotData<void(VLCTime)>(76, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 77 },
        }}),
        // Slot 'jumpToPos'
        QtMocHelpers::SlotData<void(double)>(78, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 2 },
        }}),
        // Slot 'frameNext'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'sectionNext'
        QtMocHelpers::SlotData<void()>(80, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'sectionPrev'
        QtMocHelpers::SlotData<void()>(81, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'sectionMenu'
        QtMocHelpers::SlotData<void()>(82, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'chapterNext'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'chapterPrev'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'titleNext'
        QtMocHelpers::SlotData<void()>(85, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'titlePrev'
        QtMocHelpers::SlotData<void()>(86, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changeProgram'
        QtMocHelpers::SlotData<void(int)>(87, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'navigateUp'
        QtMocHelpers::SlotData<void()>(88, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'navigateDown'
        QtMocHelpers::SlotData<void()>(89, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'navigateLeft'
        QtMocHelpers::SlotData<void()>(90, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'navigateRight'
        QtMocHelpers::SlotData<void()>(91, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'navigateActivate'
        QtMocHelpers::SlotData<void()>(92, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggleFullscreen'
        QtMocHelpers::SlotData<void()>(93, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setVolumeUp'
        QtMocHelpers::SlotData<void(int)>(94, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 95 },
        }}),
        // Slot 'setVolumeUp'
        QtMocHelpers::SlotData<void()>(94, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'setVolumeDown'
        QtMocHelpers::SlotData<void(int)>(96, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 95 },
        }}),
        // Slot 'setVolumeDown'
        QtMocHelpers::SlotData<void()>(96, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'toggleMuted'
        QtMocHelpers::SlotData<void()>(97, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggleABloopState'
        QtMocHelpers::SlotData<void()>(98, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'snapshot'
        QtMocHelpers::SlotData<void()>(99, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggleRecord'
        QtMocHelpers::SlotData<void()>(100, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggleVisualization'
        QtMocHelpers::SlotData<void()>(101, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'requestAddSMPTETimer'
        QtMocHelpers::SlotData<void()>(102, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'requestRemoveSMPTETimer'
        QtMocHelpers::SlotData<void()>(103, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getPlayingState'
        QtMocHelpers::SlotData<enum PlayingState() const>(104, 2, QMC::AccessPublic, 0x80000000 | 3),
        // Slot 'isStarted'
        QtMocHelpers::SlotData<bool() const>(105, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'hasInput'
        QtMocHelpers::SlotData<bool() const>(6, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'getName'
        QtMocHelpers::SlotData<QString() const>(106, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'getBuffering'
        QtMocHelpers::SlotData<float() const>(107, 2, QMC::AccessPublic, QMetaType::Float),
        // Slot 'getRate'
        QtMocHelpers::SlotData<float() const>(108, 2, QMC::AccessPublic, QMetaType::Float),
        // Slot 'setRate'
        QtMocHelpers::SlotData<void(float)>(109, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 2 },
        }}),
        // Slot 'getTime'
        QtMocHelpers::SlotData<VLCTime() const>(110, 2, QMC::AccessPublic, 0x80000000 | 11),
        // Slot 'setTime'
        QtMocHelpers::SlotData<void(VLCTime)>(111, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Slot 'getRemainingTime'
        QtMocHelpers::SlotData<VLCDuration() const>(112, 2, QMC::AccessPublic, 0x80000000 | 15),
        // Slot 'getPosition'
        QtMocHelpers::SlotData<double() const>(113, 2, QMC::AccessPublic, QMetaType::Double),
        // Slot 'setPosition'
        QtMocHelpers::SlotData<void(double)>(114, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 2 },
        }}),
        // Slot 'getLength'
        QtMocHelpers::SlotData<VLCDuration() const>(115, 2, QMC::AccessPublic, 0x80000000 | 15),
        // Slot 'isSeekable'
        QtMocHelpers::SlotData<bool() const>(116, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isRewindable'
        QtMocHelpers::SlotData<bool() const>(117, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isPausable'
        QtMocHelpers::SlotData<bool() const>(118, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isRateChangable'
        QtMocHelpers::SlotData<bool() const>(119, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'updatePositionFromTimer'
        QtMocHelpers::SlotData<void()>(120, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateTimeFromTimer'
        QtMocHelpers::SlotData<void()>(121, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'canRestorePlayback'
        QtMocHelpers::SlotData<bool() const>(122, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'restorePlaybackPos'
        QtMocHelpers::SlotData<void()>(123, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openVLsub'
        QtMocHelpers::SlotData<void()>(124, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'acknowledgeRestoreCallback'
        QtMocHelpers::SlotData<void()>(125, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getUrl'
        QtMocHelpers::SlotData<QUrl() const>(126, 2, QMC::AccessPublic, 0x80000000 | 127),
        // Slot 'getVideoTracks'
        QtMocHelpers::SlotData<TrackListModel *()>(128, 2, QMC::AccessPublic, 0x80000000 | 129),
        // Slot 'getAudioTracks'
        QtMocHelpers::SlotData<TrackListModel *()>(130, 2, QMC::AccessPublic, 0x80000000 | 129),
        // Slot 'getSubtitleTracks'
        QtMocHelpers::SlotData<TrackListModel *()>(131, 2, QMC::AccessPublic, 0x80000000 | 129),
        // Slot 'getAudioDelay'
        QtMocHelpers::SlotData<VLCDuration() const>(132, 2, QMC::AccessPublic, 0x80000000 | 15),
        // Slot 'setAudioDelay'
        QtMocHelpers::SlotData<void(VLCDuration)>(133, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Slot 'addAudioDelay'
        QtMocHelpers::SlotData<void(VLCDuration)>(134, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Slot 'getSubtitleDelay'
        QtMocHelpers::SlotData<VLCDuration() const>(135, 2, QMC::AccessPublic, 0x80000000 | 15),
        // Slot 'getSecondarySubtitleDelay'
        QtMocHelpers::SlotData<VLCDuration() const>(136, 2, QMC::AccessPublic, 0x80000000 | 15),
        // Slot 'setSubtitleDelay'
        QtMocHelpers::SlotData<void(VLCDuration)>(137, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Slot 'addSubtitleDelay'
        QtMocHelpers::SlotData<void(VLCDuration)>(138, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Slot 'setSecondarySubtitleDelay'
        QtMocHelpers::SlotData<void(VLCDuration)>(139, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Slot 'addSecondarySubtitleDelay'
        QtMocHelpers::SlotData<void(VLCDuration)>(140, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Slot 'getAudioDelayMS'
        QtMocHelpers::SlotData<int() const>(141, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'setAudioDelayMS'
        QtMocHelpers::SlotData<void(int)>(142, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'getSubtitleDelayMS'
        QtMocHelpers::SlotData<int() const>(143, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'setSubtitleDelayMS'
        QtMocHelpers::SlotData<void(int)>(144, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'getSecondarySubtitleDelayMS'
        QtMocHelpers::SlotData<int() const>(145, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'setSecondarySubtitleDelayMS'
        QtMocHelpers::SlotData<void(int)>(146, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'getSubtitleFPS'
        QtMocHelpers::SlotData<float() const>(147, 2, QMC::AccessPublic, QMetaType::Float),
        // Slot 'setSubtitleFPS'
        QtMocHelpers::SlotData<void(float)>(148, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 2 },
        }}),
        // Slot 'getTitles'
        QtMocHelpers::SlotData<TitleListModel *()>(149, 2, QMC::AccessPublic, 0x80000000 | 150),
        // Slot 'getChapters'
        QtMocHelpers::SlotData<ChapterListModel *()>(151, 2, QMC::AccessPublic, 0x80000000 | 152),
        // Slot 'hasTitles'
        QtMocHelpers::SlotData<bool() const>(153, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'hasChapters'
        QtMocHelpers::SlotData<bool() const>(154, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'hasMenu'
        QtMocHelpers::SlotData<bool() const>(155, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isMenu'
        QtMocHelpers::SlotData<bool() const>(156, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isInteractive'
        QtMocHelpers::SlotData<bool() const>(157, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'getPrograms'
        QtMocHelpers::SlotData<ProgramListModel *()>(158, 2, QMC::AccessPublic, 0x80000000 | 159),
        // Slot 'hasPrograms'
        QtMocHelpers::SlotData<bool() const>(160, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isEncrypted'
        QtMocHelpers::SlotData<bool() const>(161, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isTeletextEnabled'
        QtMocHelpers::SlotData<bool() const>(162, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'enableTeletext'
        QtMocHelpers::SlotData<void(bool)>(163, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 164 },
        }}),
        // Slot 'isTeletextAvailable'
        QtMocHelpers::SlotData<bool() const>(165, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'getTeletextPage'
        QtMocHelpers::SlotData<int() const>(166, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'setTeletextPage'
        QtMocHelpers::SlotData<void(int)>(167, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 168 },
        }}),
        // Slot 'getTeletextTransparency'
        QtMocHelpers::SlotData<bool() const>(169, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'setTeletextTransparency'
        QtMocHelpers::SlotData<void(bool)>(170, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 171 },
        }}),
        // Slot 'hasVideoOutput'
        QtMocHelpers::SlotData<bool() const>(172, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'getVideoStereoMode'
        QtMocHelpers::SlotData<VLCVarChoiceModel *()>(173, 2, QMC::AccessPublic, 0x80000000 | 174),
        // Slot 'getZoom'
        QtMocHelpers::SlotData<VLCVarChoiceModel *()>(175, 2, QMC::AccessPublic, 0x80000000 | 174),
        // Slot 'getAspectRatio'
        QtMocHelpers::SlotData<VLCVarChoiceModel *()>(176, 2, QMC::AccessPublic, 0x80000000 | 174),
        // Slot 'getCrop'
        QtMocHelpers::SlotData<VLCVarChoiceModel *()>(177, 2, QMC::AccessPublic, 0x80000000 | 174),
        // Slot 'getFit'
        QtMocHelpers::SlotData<VLCVarChoiceModel *()>(178, 2, QMC::AccessPublic, 0x80000000 | 174),
        // Slot 'getDeinterlace'
        QtMocHelpers::SlotData<VLCVarChoiceModel *()>(179, 2, QMC::AccessPublic, 0x80000000 | 174),
        // Slot 'getDeinterlaceMode'
        QtMocHelpers::SlotData<VLCVarChoiceModel *()>(180, 2, QMC::AccessPublic, 0x80000000 | 174),
        // Slot 'isFullscreen'
        QtMocHelpers::SlotData<bool() const>(181, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'setFullscreen'
        QtMocHelpers::SlotData<void(bool)>(182, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'getWallpaperMode'
        QtMocHelpers::SlotData<bool() const>(183, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'setWallpaperMode'
        QtMocHelpers::SlotData<void(bool)>(184, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'getAutoscale'
        QtMocHelpers::SlotData<bool() const>(185, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'setAutoscale'
        QtMocHelpers::SlotData<void(bool)>(186, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'getVolume'
        QtMocHelpers::SlotData<float() const>(187, 2, QMC::AccessPublic, QMetaType::Float),
        // Slot 'setVolume'
        QtMocHelpers::SlotData<void(float)>(188, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 189 },
        }}),
        // Slot 'isMuted'
        QtMocHelpers::SlotData<bool() const>(190, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'setMuted'
        QtMocHelpers::SlotData<void(bool)>(191, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 192 },
        }}),
        // Slot 'getAudioDevices'
        QtMocHelpers::SlotData<AudioDeviceModel *()>(193, 2, QMC::AccessPublic, 0x80000000 | 194),
        // Slot 'getAudioStereoMode'
        QtMocHelpers::SlotData<VLCVarChoiceModel *()>(195, 2, QMC::AccessPublic, 0x80000000 | 174),
        // Slot 'getAudioMixMode'
        QtMocHelpers::SlotData<VLCVarChoiceModel *()>(196, 2, QMC::AccessPublic, 0x80000000 | 174),
        // Slot 'getAudioVisualizations'
        QtMocHelpers::SlotData<VLCVarChoiceModel *()>(197, 2, QMC::AccessPublic, 0x80000000 | 174),
        // Slot 'hasAudioVisualization'
        QtMocHelpers::SlotData<bool() const>(198, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isRecording'
        QtMocHelpers::SlotData<bool() const>(199, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'setRecording'
        QtMocHelpers::SlotData<void(bool)>(200, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 201 },
        }}),
        // Slot 'setABloopState'
        QtMocHelpers::SlotData<void(enum ABLoopState)>(202, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 53, 2 },
        }}),
        // Slot 'getABloopState'
        QtMocHelpers::SlotData<enum ABLoopState() const>(203, 2, QMC::AccessPublic, 0x80000000 | 53),
        // Slot 'getABLoopA'
        QtMocHelpers::SlotData<VLCTime() const>(204, 2, QMC::AccessPublic, 0x80000000 | 11),
        // Slot 'getABLoopB'
        QtMocHelpers::SlotData<VLCTime() const>(205, 2, QMC::AccessPublic, 0x80000000 | 11),
        // Slot 'highResolutionTime'
        QtMocHelpers::SlotData<QString() const>(206, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'associateSubtitleFile'
        QtMocHelpers::SlotData<bool(const QString &)>(207, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 208 },
        }}),
        // Slot 'getTitle'
        QtMocHelpers::SlotData<QString() const>(209, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'getArtist'
        QtMocHelpers::SlotData<QString() const>(210, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'getAlbum'
        QtMocHelpers::SlotData<QString() const>(211, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'getArtwork'
        QtMocHelpers::SlotData<QUrl() const>(212, 2, QMC::AccessPublic, 0x80000000 | 127),
        // Slot 'getRendererManager'
        QtMocHelpers::SlotData<RendererManager *()>(213, 2, QMC::AccessPublic, 0x80000000 | 214),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'playingState'
        QtMocHelpers::PropertyData<enum PlayingState>(215, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 0),
        // property 'isStarted'
        QtMocHelpers::PropertyData<bool>(105, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 0),
        // property 'name'
        QtMocHelpers::PropertyData<QString>(216, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 2),
        // property 'buffering'
        QtMocHelpers::PropertyData<float>(217, QMetaType::Float, QMC::DefaultPropertyFlags | QMC::Final, 3),
        // property 'rate'
        QtMocHelpers::PropertyData<float>(218, QMetaType::Float, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 4),
        // property 'url'
        QtMocHelpers::PropertyData<QUrl>(219, 0x80000000 | 127, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 1),
        // property 'time'
        QtMocHelpers::PropertyData<VLCTime>(220, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 5),
        // property 'remainingTime'
        QtMocHelpers::PropertyData<VLCTime>(221, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 6),
        // property 'position'
        QtMocHelpers::PropertyData<double>(222, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 7),
        // property 'length'
        QtMocHelpers::PropertyData<VLCDuration>(223, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 8),
        // property 'seekable'
        QtMocHelpers::PropertyData<bool>(224, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 11),
        // property 'rewindable'
        QtMocHelpers::PropertyData<bool>(225, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 12),
        // property 'pausable'
        QtMocHelpers::PropertyData<bool>(226, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 13),
        // property 'ratechangable'
        QtMocHelpers::PropertyData<bool>(227, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 15),
        // property 'canRestorePlayback'
        QtMocHelpers::PropertyData<bool>(122, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 16),
        // property 'title'
        QtMocHelpers::PropertyData<QString>(228, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 48),
        // property 'artist'
        QtMocHelpers::PropertyData<QString>(229, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 48),
        // property 'album'
        QtMocHelpers::PropertyData<QString>(230, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 48),
        // property 'artwork'
        QtMocHelpers::PropertyData<QUrl>(231, 0x80000000 | 127, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 48),
        // property 'videoTracks'
        QtMocHelpers::PropertyData<TrackListModel*>(232, 0x80000000 | 129, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'audioTracks'
        QtMocHelpers::PropertyData<TrackListModel*>(233, 0x80000000 | 129, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'subtitleTracks'
        QtMocHelpers::PropertyData<TrackListModel*>(234, 0x80000000 | 129, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'audioDelay'
        QtMocHelpers::PropertyData<VLCDuration>(235, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 17),
        // property 'subtitleDelay'
        QtMocHelpers::PropertyData<VLCDuration>(236, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 18),
        // property 'secondarySubtitleDelay'
        QtMocHelpers::PropertyData<VLCDuration>(237, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 19),
        // property 'audioDelayMS'
        QtMocHelpers::PropertyData<int>(238, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 17),
        // property 'subtitleDelayMS'
        QtMocHelpers::PropertyData<int>(239, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 18),
        // property 'secondarySubtitleDelayMS'
        QtMocHelpers::PropertyData<int>(240, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 19),
        // property 'subtitleFPS'
        QtMocHelpers::PropertyData<float>(241, QMetaType::Float, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 20),
        // property 'titles'
        QtMocHelpers::PropertyData<TitleListModel*>(242, 0x80000000 | 150, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'chapters'
        QtMocHelpers::PropertyData<ChapterListModel*>(243, 0x80000000 | 152, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'hasTitles'
        QtMocHelpers::PropertyData<bool>(153, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 21),
        // property 'hasChapters'
        QtMocHelpers::PropertyData<bool>(154, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 22),
        // property 'hasMenu'
        QtMocHelpers::PropertyData<bool>(155, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 23),
        // property 'isMenu'
        QtMocHelpers::PropertyData<bool>(156, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 24),
        // property 'isInteractive'
        QtMocHelpers::PropertyData<bool>(157, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 25),
        // property 'programs'
        QtMocHelpers::PropertyData<ProgramListModel*>(244, 0x80000000 | 159, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'hasPrograms'
        QtMocHelpers::PropertyData<bool>(160, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 26),
        // property 'isEncrypted'
        QtMocHelpers::PropertyData<bool>(161, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 27),
        // property 'teletextEnabled'
        QtMocHelpers::PropertyData<bool>(245, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 28),
        // property 'isTeletextAvailable'
        QtMocHelpers::PropertyData<bool>(165, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 29),
        // property 'teletextPage'
        QtMocHelpers::PropertyData<int>(246, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 30),
        // property 'teletextTransparency'
        QtMocHelpers::PropertyData<bool>(247, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 31),
        // property 'hasVideoOutput'
        QtMocHelpers::PropertyData<bool>(172, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 32),
        // property 'videoStereoMode'
        QtMocHelpers::PropertyData<VLCVarChoiceModel*>(248, 0x80000000 | 174, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'zoom'
        QtMocHelpers::PropertyData<VLCVarChoiceModel*>(249, 0x80000000 | 174, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'aspectRatio'
        QtMocHelpers::PropertyData<VLCVarChoiceModel*>(250, 0x80000000 | 174, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'crop'
        QtMocHelpers::PropertyData<VLCVarChoiceModel*>(251, 0x80000000 | 174, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'fit'
        QtMocHelpers::PropertyData<VLCVarChoiceModel*>(252, 0x80000000 | 174, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'deinterlace'
        QtMocHelpers::PropertyData<VLCVarChoiceModel*>(253, 0x80000000 | 174, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'deinterlaceMode'
        QtMocHelpers::PropertyData<VLCVarChoiceModel*>(254, 0x80000000 | 174, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'fullscreen'
        QtMocHelpers::PropertyData<bool>(255, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 33),
        // property 'wallpaperMode'
        QtMocHelpers::PropertyData<bool>(256, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 34),
        // property 'autoscale'
        QtMocHelpers::PropertyData<bool>(257, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 35),
        // property 'volume'
        QtMocHelpers::PropertyData<float>(189, QMetaType::Float, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 37),
        // property 'muted'
        QtMocHelpers::PropertyData<bool>(192, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 38),
        // property 'audioDevices'
        QtMocHelpers::PropertyData<AudioDeviceModel*>(258, 0x80000000 | 194, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'audioStereoMode'
        QtMocHelpers::PropertyData<VLCVarChoiceModel*>(259, 0x80000000 | 174, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'audioMixMode'
        QtMocHelpers::PropertyData<VLCVarChoiceModel*>(260, 0x80000000 | 174, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'audioVisualization'
        QtMocHelpers::PropertyData<VLCVarChoiceModel*>(261, 0x80000000 | 174, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'hasAudioVisualization'
        QtMocHelpers::PropertyData<bool>(198, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 39),
        // property 'ABloopState'
        QtMocHelpers::PropertyData<enum ABLoopState>(262, 0x80000000 | 53, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 41),
        // property 'ABLoopA'
        QtMocHelpers::PropertyData<VLCTime>(263, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 42),
        // property 'ABLoopB'
        QtMocHelpers::PropertyData<VLCTime>(264, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final, 43),
        // property 'recording'
        QtMocHelpers::PropertyData<bool>(265, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 40),
        // property 'rendererManager'
        QtMocHelpers::PropertyData<RendererManager*>(266, 0x80000000 | 214, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'highResolutionTime'
        QtMocHelpers::PropertyData<QString>(206, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ABLoopState'
        QtMocHelpers::EnumData<enum ABLoopState>(53, 53, QMC::EnumFlags{}).add({
            {  267, ABLoopState::ABLOOP_STATE_NONE },
            {  268, ABLoopState::ABLOOP_STATE_A },
            {  269, ABLoopState::ABLOOP_STATE_B },
        }),
        // enum 'PlayingState'
        QtMocHelpers::EnumData<enum PlayingState>(3, 3, QMC::EnumFlags{}).add({
            {  270, PlayingState::PLAYING_STATE_STARTED },
            {  271, PlayingState::PLAYING_STATE_PLAYING },
            {  272, PlayingState::PLAYING_STATE_PAUSED },
            {  273, PlayingState::PLAYING_STATE_STOPPING },
            {  274, PlayingState::PLAYING_STATE_STOPPED },
        }),
        // enum 'Telekeys'
        QtMocHelpers::EnumData<enum Telekeys>(275, 275, QMC::EnumFlags{}).add({
            {  276, Telekeys::TELE_RED },
            {  277, Telekeys::TELE_GREEN },
            {  278, Telekeys::TELE_YELLOW },
            {  279, Telekeys::TELE_BLUE },
            {  280, Telekeys::TELE_INDEX },
        }),
    };
    return QtMocHelpers::metaObjectData<PlayerController, qt_meta_tag_ZN16PlayerControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PlayerController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16PlayerControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16PlayerControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16PlayerControllerE_t>.metaTypes,
    nullptr
} };

void PlayerController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlayerController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->playingStateChanged((*reinterpret_cast<std::add_pointer_t<enum PlayingState>>(_a[1]))); break;
        case 1: _t->inputChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->nameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->bufferingChanged((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 4: _t->rateChanged((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 5: _t->timeChanged((*reinterpret_cast<std::add_pointer_t<VLCTime>>(_a[1]))); break;
        case 6: _t->remainingTimeChanged((*reinterpret_cast<std::add_pointer_t<VLCTime>>(_a[1]))); break;
        case 7: _t->positionChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 8: _t->lengthChanged((*reinterpret_cast<std::add_pointer_t<VLCDuration>>(_a[1]))); break;
        case 9: _t->positionUpdated((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<VLCTime>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<VLCDuration>>(_a[3]))); break;
        case 10: _t->seekRequested((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 11: _t->seekableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->rewindableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->pausableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->recordableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->rateChangableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->playbackRestoreQueried(); break;
        case 17: _t->audioDelayChanged((*reinterpret_cast<std::add_pointer_t<VLCDuration>>(_a[1]))); break;
        case 18: _t->subtitleDelayChanged((*reinterpret_cast<std::add_pointer_t<VLCDuration>>(_a[1]))); break;
        case 19: _t->secondarySubtitleDelayChanged((*reinterpret_cast<std::add_pointer_t<VLCDuration>>(_a[1]))); break;
        case 20: _t->subtitleFPSChanged((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 21: _t->hasTitlesChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->hasChaptersChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->hasMenuChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->isMenuChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->isInteractiveChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->hasProgramsChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->isEncryptedChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->teletextEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 29: _t->teletextAvailableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->teletextPageChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 31: _t->teletextTransparencyChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 32: _t->hasVideoOutputChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 33: _t->fullscreenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->wallpaperModeChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 35: _t->autoscaleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 36: _t->voutListChanged((*reinterpret_cast<std::add_pointer_t<vout_thread_t**>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 37: _t->volumeChanged((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 38: _t->soundMuteChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 39: _t->hasAudioVisualizationChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 40: _t->recordingChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 41: _t->ABLoopStateChanged((*reinterpret_cast<std::add_pointer_t<enum ABLoopState>>(_a[1]))); break;
        case 42: _t->ABLoopAChanged((*reinterpret_cast<std::add_pointer_t<VLCTime>>(_a[1]))); break;
        case 43: _t->ABLoopBChanged((*reinterpret_cast<std::add_pointer_t<VLCTime>>(_a[1]))); break;
        case 44: _t->highResolutionTimeChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 45: _t->resumePlayback((*reinterpret_cast<std::add_pointer_t<VLCTime>>(_a[1]))); break;
        case 46: _t->statisticsUpdated((*reinterpret_cast<std::add_pointer_t<input_stats_t>>(_a[1]))); break;
        case 47: _t->infoChanged((*reinterpret_cast<std::add_pointer_t<input_item_t*>>(_a[1]))); break;
        case 48: _t->currentMetaChanged((*reinterpret_cast<std::add_pointer_t<input_item_t*>>(_a[1]))); break;
        case 49: _t->metaChanged((*reinterpret_cast<std::add_pointer_t<input_item_t*>>(_a[1]))); break;
        case 50: _t->artChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 51: _t->artChanged((*reinterpret_cast<std::add_pointer_t<input_item_t*>>(_a[1]))); break;
        case 52: _t->bookmarksChanged(); break;
        case 53: _t->epgChanged(); break;
        case 54: _t->reverse(); break;
        case 55: _t->slower(); break;
        case 56: _t->faster(); break;
        case 57: _t->littlefaster(); break;
        case 58: _t->littleslower(); break;
        case 59: _t->normalRate(); break;
        case 60: _t->jumpFwd(); break;
        case 61: _t->jumpBwd(); break;
        case 62: _t->jumpToTime((*reinterpret_cast<std::add_pointer_t<VLCTime>>(_a[1]))); break;
        case 63: _t->jumpToPos((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 64: _t->frameNext(); break;
        case 65: _t->sectionNext(); break;
        case 66: _t->sectionPrev(); break;
        case 67: _t->sectionMenu(); break;
        case 68: _t->chapterNext(); break;
        case 69: _t->chapterPrev(); break;
        case 70: _t->titleNext(); break;
        case 71: _t->titlePrev(); break;
        case 72: _t->changeProgram((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 73: _t->navigateUp(); break;
        case 74: _t->navigateDown(); break;
        case 75: _t->navigateLeft(); break;
        case 76: _t->navigateRight(); break;
        case 77: _t->navigateActivate(); break;
        case 78: _t->toggleFullscreen(); break;
        case 79: _t->setVolumeUp((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 80: _t->setVolumeUp(); break;
        case 81: _t->setVolumeDown((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 82: _t->setVolumeDown(); break;
        case 83: _t->toggleMuted(); break;
        case 84: _t->toggleABloopState(); break;
        case 85: _t->snapshot(); break;
        case 86: _t->toggleRecord(); break;
        case 87: _t->toggleVisualization(); break;
        case 88: _t->requestAddSMPTETimer(); break;
        case 89: _t->requestRemoveSMPTETimer(); break;
        case 90: { enum PlayingState _r = _t->getPlayingState();
            if (_a[0]) *reinterpret_cast<enum PlayingState*>(_a[0]) = std::move(_r); }  break;
        case 91: { bool _r = _t->isStarted();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 92: { bool _r = _t->hasInput();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 93: { QString _r = _t->getName();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 94: { float _r = _t->getBuffering();
            if (_a[0]) *reinterpret_cast<float*>(_a[0]) = std::move(_r); }  break;
        case 95: { float _r = _t->getRate();
            if (_a[0]) *reinterpret_cast<float*>(_a[0]) = std::move(_r); }  break;
        case 96: _t->setRate((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 97: { VLCTime _r = _t->getTime();
            if (_a[0]) *reinterpret_cast<VLCTime*>(_a[0]) = std::move(_r); }  break;
        case 98: _t->setTime((*reinterpret_cast<std::add_pointer_t<VLCTime>>(_a[1]))); break;
        case 99: { VLCDuration _r = _t->getRemainingTime();
            if (_a[0]) *reinterpret_cast<VLCDuration*>(_a[0]) = std::move(_r); }  break;
        case 100: { double _r = _t->getPosition();
            if (_a[0]) *reinterpret_cast<double*>(_a[0]) = std::move(_r); }  break;
        case 101: _t->setPosition((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 102: { VLCDuration _r = _t->getLength();
            if (_a[0]) *reinterpret_cast<VLCDuration*>(_a[0]) = std::move(_r); }  break;
        case 103: { bool _r = _t->isSeekable();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 104: { bool _r = _t->isRewindable();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 105: { bool _r = _t->isPausable();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 106: { bool _r = _t->isRateChangable();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 107: _t->updatePositionFromTimer(); break;
        case 108: _t->updateTimeFromTimer(); break;
        case 109: { bool _r = _t->canRestorePlayback();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 110: _t->restorePlaybackPos(); break;
        case 111: _t->openVLsub(); break;
        case 112: _t->acknowledgeRestoreCallback(); break;
        case 113: { QUrl _r = _t->getUrl();
            if (_a[0]) *reinterpret_cast<QUrl*>(_a[0]) = std::move(_r); }  break;
        case 114: { TrackListModel* _r = _t->getVideoTracks();
            if (_a[0]) *reinterpret_cast<TrackListModel**>(_a[0]) = std::move(_r); }  break;
        case 115: { TrackListModel* _r = _t->getAudioTracks();
            if (_a[0]) *reinterpret_cast<TrackListModel**>(_a[0]) = std::move(_r); }  break;
        case 116: { TrackListModel* _r = _t->getSubtitleTracks();
            if (_a[0]) *reinterpret_cast<TrackListModel**>(_a[0]) = std::move(_r); }  break;
        case 117: { VLCDuration _r = _t->getAudioDelay();
            if (_a[0]) *reinterpret_cast<VLCDuration*>(_a[0]) = std::move(_r); }  break;
        case 118: _t->setAudioDelay((*reinterpret_cast<std::add_pointer_t<VLCDuration>>(_a[1]))); break;
        case 119: _t->addAudioDelay((*reinterpret_cast<std::add_pointer_t<VLCDuration>>(_a[1]))); break;
        case 120: { VLCDuration _r = _t->getSubtitleDelay();
            if (_a[0]) *reinterpret_cast<VLCDuration*>(_a[0]) = std::move(_r); }  break;
        case 121: { VLCDuration _r = _t->getSecondarySubtitleDelay();
            if (_a[0]) *reinterpret_cast<VLCDuration*>(_a[0]) = std::move(_r); }  break;
        case 122: _t->setSubtitleDelay((*reinterpret_cast<std::add_pointer_t<VLCDuration>>(_a[1]))); break;
        case 123: _t->addSubtitleDelay((*reinterpret_cast<std::add_pointer_t<VLCDuration>>(_a[1]))); break;
        case 124: _t->setSecondarySubtitleDelay((*reinterpret_cast<std::add_pointer_t<VLCDuration>>(_a[1]))); break;
        case 125: _t->addSecondarySubtitleDelay((*reinterpret_cast<std::add_pointer_t<VLCDuration>>(_a[1]))); break;
        case 126: { int _r = _t->getAudioDelayMS();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 127: _t->setAudioDelayMS((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 128: { int _r = _t->getSubtitleDelayMS();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 129: _t->setSubtitleDelayMS((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 130: { int _r = _t->getSecondarySubtitleDelayMS();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 131: _t->setSecondarySubtitleDelayMS((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 132: { float _r = _t->getSubtitleFPS();
            if (_a[0]) *reinterpret_cast<float*>(_a[0]) = std::move(_r); }  break;
        case 133: _t->setSubtitleFPS((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 134: { TitleListModel* _r = _t->getTitles();
            if (_a[0]) *reinterpret_cast<TitleListModel**>(_a[0]) = std::move(_r); }  break;
        case 135: { ChapterListModel* _r = _t->getChapters();
            if (_a[0]) *reinterpret_cast<ChapterListModel**>(_a[0]) = std::move(_r); }  break;
        case 136: { bool _r = _t->hasTitles();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 137: { bool _r = _t->hasChapters();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 138: { bool _r = _t->hasMenu();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 139: { bool _r = _t->isMenu();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 140: { bool _r = _t->isInteractive();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 141: { ProgramListModel* _r = _t->getPrograms();
            if (_a[0]) *reinterpret_cast<ProgramListModel**>(_a[0]) = std::move(_r); }  break;
        case 142: { bool _r = _t->hasPrograms();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 143: { bool _r = _t->isEncrypted();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 144: { bool _r = _t->isTeletextEnabled();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 145: _t->enableTeletext((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 146: { bool _r = _t->isTeletextAvailable();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 147: { int _r = _t->getTeletextPage();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 148: _t->setTeletextPage((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 149: { bool _r = _t->getTeletextTransparency();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 150: _t->setTeletextTransparency((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 151: { bool _r = _t->hasVideoOutput();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 152: { VLCVarChoiceModel* _r = _t->getVideoStereoMode();
            if (_a[0]) *reinterpret_cast<VLCVarChoiceModel**>(_a[0]) = std::move(_r); }  break;
        case 153: { VLCVarChoiceModel* _r = _t->getZoom();
            if (_a[0]) *reinterpret_cast<VLCVarChoiceModel**>(_a[0]) = std::move(_r); }  break;
        case 154: { VLCVarChoiceModel* _r = _t->getAspectRatio();
            if (_a[0]) *reinterpret_cast<VLCVarChoiceModel**>(_a[0]) = std::move(_r); }  break;
        case 155: { VLCVarChoiceModel* _r = _t->getCrop();
            if (_a[0]) *reinterpret_cast<VLCVarChoiceModel**>(_a[0]) = std::move(_r); }  break;
        case 156: { VLCVarChoiceModel* _r = _t->getFit();
            if (_a[0]) *reinterpret_cast<VLCVarChoiceModel**>(_a[0]) = std::move(_r); }  break;
        case 157: { VLCVarChoiceModel* _r = _t->getDeinterlace();
            if (_a[0]) *reinterpret_cast<VLCVarChoiceModel**>(_a[0]) = std::move(_r); }  break;
        case 158: { VLCVarChoiceModel* _r = _t->getDeinterlaceMode();
            if (_a[0]) *reinterpret_cast<VLCVarChoiceModel**>(_a[0]) = std::move(_r); }  break;
        case 159: { bool _r = _t->isFullscreen();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 160: _t->setFullscreen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 161: { bool _r = _t->getWallpaperMode();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 162: _t->setWallpaperMode((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 163: { bool _r = _t->getAutoscale();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 164: _t->setAutoscale((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 165: { float _r = _t->getVolume();
            if (_a[0]) *reinterpret_cast<float*>(_a[0]) = std::move(_r); }  break;
        case 166: _t->setVolume((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 167: { bool _r = _t->isMuted();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 168: _t->setMuted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 169: { AudioDeviceModel* _r = _t->getAudioDevices();
            if (_a[0]) *reinterpret_cast<AudioDeviceModel**>(_a[0]) = std::move(_r); }  break;
        case 170: { VLCVarChoiceModel* _r = _t->getAudioStereoMode();
            if (_a[0]) *reinterpret_cast<VLCVarChoiceModel**>(_a[0]) = std::move(_r); }  break;
        case 171: { VLCVarChoiceModel* _r = _t->getAudioMixMode();
            if (_a[0]) *reinterpret_cast<VLCVarChoiceModel**>(_a[0]) = std::move(_r); }  break;
        case 172: { VLCVarChoiceModel* _r = _t->getAudioVisualizations();
            if (_a[0]) *reinterpret_cast<VLCVarChoiceModel**>(_a[0]) = std::move(_r); }  break;
        case 173: { bool _r = _t->hasAudioVisualization();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 174: { bool _r = _t->isRecording();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 175: _t->setRecording((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 176: _t->setABloopState((*reinterpret_cast<std::add_pointer_t<enum ABLoopState>>(_a[1]))); break;
        case 177: { enum ABLoopState _r = _t->getABloopState();
            if (_a[0]) *reinterpret_cast<enum ABLoopState*>(_a[0]) = std::move(_r); }  break;
        case 178: { VLCTime _r = _t->getABLoopA();
            if (_a[0]) *reinterpret_cast<VLCTime*>(_a[0]) = std::move(_r); }  break;
        case 179: { VLCTime _r = _t->getABLoopB();
            if (_a[0]) *reinterpret_cast<VLCTime*>(_a[0]) = std::move(_r); }  break;
        case 180: { QString _r = _t->highResolutionTime();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 181: { bool _r = _t->associateSubtitleFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 182: { QString _r = _t->getTitle();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 183: { QString _r = _t->getArtist();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 184: { QString _r = _t->getAlbum();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 185: { QUrl _r = _t->getArtwork();
            if (_a[0]) *reinterpret_cast<QUrl*>(_a[0]) = std::move(_r); }  break;
        case 186: { RendererManager* _r = _t->getRendererManager();
            if (_a[0]) *reinterpret_cast<RendererManager**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(PlayingState )>(_a, &PlayerController::playingStateChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::inputChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(const QString & )>(_a, &PlayerController::nameChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(float )>(_a, &PlayerController::bufferingChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(float )>(_a, &PlayerController::rateChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(VLCTime )>(_a, &PlayerController::timeChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(VLCTime )>(_a, &PlayerController::remainingTimeChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(double )>(_a, &PlayerController::positionChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(VLCDuration )>(_a, &PlayerController::lengthChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(double , VLCTime , VLCDuration )>(_a, &PlayerController::positionUpdated, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(double )>(_a, &PlayerController::seekRequested, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::seekableChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::rewindableChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::pausableChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::recordableChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::rateChangableChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)()>(_a, &PlayerController::playbackRestoreQueried, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(VLCDuration )>(_a, &PlayerController::audioDelayChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(VLCDuration )>(_a, &PlayerController::subtitleDelayChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(VLCDuration )>(_a, &PlayerController::secondarySubtitleDelayChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(float )>(_a, &PlayerController::subtitleFPSChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::hasTitlesChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::hasChaptersChanged, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::hasMenuChanged, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::isMenuChanged, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::isInteractiveChanged, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::hasProgramsChanged, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::isEncryptedChanged, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::teletextEnabledChanged, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::teletextAvailableChanged, 29))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(int )>(_a, &PlayerController::teletextPageChanged, 30))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::teletextTransparencyChanged, 31))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::hasVideoOutputChanged, 32))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::fullscreenChanged, 33))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::wallpaperModeChanged, 34))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::autoscaleChanged, 35))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(vout_thread_t * * , int )>(_a, &PlayerController::voutListChanged, 36))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(float )>(_a, &PlayerController::volumeChanged, 37))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::soundMuteChanged, 38))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::hasAudioVisualizationChanged, 39))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(bool )>(_a, &PlayerController::recordingChanged, 40))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(ABLoopState )>(_a, &PlayerController::ABLoopStateChanged, 41))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(VLCTime )>(_a, &PlayerController::ABLoopAChanged, 42))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(VLCTime )>(_a, &PlayerController::ABLoopBChanged, 43))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(const QString & )>(_a, &PlayerController::highResolutionTimeChanged, 44))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(VLCTime )>(_a, &PlayerController::resumePlayback, 45))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(const input_stats_t & )>(_a, &PlayerController::statisticsUpdated, 46))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(input_item_t * )>(_a, &PlayerController::infoChanged, 47))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(input_item_t * )>(_a, &PlayerController::currentMetaChanged, 48))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(input_item_t * )>(_a, &PlayerController::metaChanged, 49))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(QString )>(_a, &PlayerController::artChanged, 50))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)(input_item_t * )>(_a, &PlayerController::artChanged, 51))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)()>(_a, &PlayerController::bookmarksChanged, 52))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerController::*)()>(_a, &PlayerController::epgChanged, 53))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 56:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioDeviceModel* >(); break;
        case 30:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChapterListModel* >(); break;
        case 36:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ProgramListModel* >(); break;
        case 29:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TitleListModel* >(); break;
        case 21:
        case 20:
        case 19:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TrackListModel* >(); break;
        case 59:
        case 58:
        case 57:
        case 50:
        case 49:
        case 48:
        case 47:
        case 46:
        case 45:
        case 44:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VLCVarChoiceModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum PlayingState*>(_v) = _t->getPlayingState(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isStarted(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->getName(); break;
        case 3: *reinterpret_cast<float*>(_v) = _t->getBuffering(); break;
        case 4: *reinterpret_cast<float*>(_v) = _t->getRate(); break;
        case 5: *reinterpret_cast<QUrl*>(_v) = _t->getUrl(); break;
        case 6: *reinterpret_cast<VLCTime*>(_v) = _t->getTime(); break;
        case 7: *reinterpret_cast<VLCTime*>(_v) = _t->getRemainingTime(); break;
        case 8: *reinterpret_cast<double*>(_v) = _t->getPosition(); break;
        case 9: *reinterpret_cast<VLCDuration*>(_v) = _t->getLength(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->isSeekable(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->isRewindable(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->isPausable(); break;
        case 13: *reinterpret_cast<bool*>(_v) = _t->isRateChangable(); break;
        case 14: *reinterpret_cast<bool*>(_v) = _t->canRestorePlayback(); break;
        case 15: *reinterpret_cast<QString*>(_v) = _t->getTitle(); break;
        case 16: *reinterpret_cast<QString*>(_v) = _t->getArtist(); break;
        case 17: *reinterpret_cast<QString*>(_v) = _t->getAlbum(); break;
        case 18: *reinterpret_cast<QUrl*>(_v) = _t->getArtwork(); break;
        case 19: *reinterpret_cast<TrackListModel**>(_v) = _t->getVideoTracks(); break;
        case 20: *reinterpret_cast<TrackListModel**>(_v) = _t->getAudioTracks(); break;
        case 21: *reinterpret_cast<TrackListModel**>(_v) = _t->getSubtitleTracks(); break;
        case 22: *reinterpret_cast<VLCDuration*>(_v) = _t->getAudioDelay(); break;
        case 23: *reinterpret_cast<VLCDuration*>(_v) = _t->getSubtitleDelay(); break;
        case 24: *reinterpret_cast<VLCDuration*>(_v) = _t->getSecondarySubtitleDelay(); break;
        case 25: *reinterpret_cast<int*>(_v) = _t->getAudioDelayMS(); break;
        case 26: *reinterpret_cast<int*>(_v) = _t->getSubtitleDelayMS(); break;
        case 27: *reinterpret_cast<int*>(_v) = _t->getSecondarySubtitleDelayMS(); break;
        case 28: *reinterpret_cast<float*>(_v) = _t->getSubtitleFPS(); break;
        case 29: *reinterpret_cast<TitleListModel**>(_v) = _t->getTitles(); break;
        case 30: *reinterpret_cast<ChapterListModel**>(_v) = _t->getChapters(); break;
        case 31: *reinterpret_cast<bool*>(_v) = _t->hasTitles(); break;
        case 32: *reinterpret_cast<bool*>(_v) = _t->hasChapters(); break;
        case 33: *reinterpret_cast<bool*>(_v) = _t->hasMenu(); break;
        case 34: *reinterpret_cast<bool*>(_v) = _t->isMenu(); break;
        case 35: *reinterpret_cast<bool*>(_v) = _t->isInteractive(); break;
        case 36: *reinterpret_cast<ProgramListModel**>(_v) = _t->getPrograms(); break;
        case 37: *reinterpret_cast<bool*>(_v) = _t->hasPrograms(); break;
        case 38: *reinterpret_cast<bool*>(_v) = _t->isEncrypted(); break;
        case 39: *reinterpret_cast<bool*>(_v) = _t->isTeletextEnabled(); break;
        case 40: *reinterpret_cast<bool*>(_v) = _t->isTeletextAvailable(); break;
        case 41: *reinterpret_cast<int*>(_v) = _t->getTeletextPage(); break;
        case 42: *reinterpret_cast<bool*>(_v) = _t->getTeletextTransparency(); break;
        case 43: *reinterpret_cast<bool*>(_v) = _t->hasVideoOutput(); break;
        case 44: *reinterpret_cast<VLCVarChoiceModel**>(_v) = _t->getVideoStereoMode(); break;
        case 45: *reinterpret_cast<VLCVarChoiceModel**>(_v) = _t->getZoom(); break;
        case 46: *reinterpret_cast<VLCVarChoiceModel**>(_v) = _t->getAspectRatio(); break;
        case 47: *reinterpret_cast<VLCVarChoiceModel**>(_v) = _t->getCrop(); break;
        case 48: *reinterpret_cast<VLCVarChoiceModel**>(_v) = _t->getFit(); break;
        case 49: *reinterpret_cast<VLCVarChoiceModel**>(_v) = _t->getDeinterlace(); break;
        case 50: *reinterpret_cast<VLCVarChoiceModel**>(_v) = _t->getDeinterlaceMode(); break;
        case 51: *reinterpret_cast<bool*>(_v) = _t->isFullscreen(); break;
        case 52: *reinterpret_cast<bool*>(_v) = _t->getWallpaperMode(); break;
        case 53: *reinterpret_cast<bool*>(_v) = _t->getAutoscale(); break;
        case 54: *reinterpret_cast<float*>(_v) = _t->getVolume(); break;
        case 55: *reinterpret_cast<bool*>(_v) = _t->isMuted(); break;
        case 56: *reinterpret_cast<AudioDeviceModel**>(_v) = _t->getAudioDevices(); break;
        case 57: *reinterpret_cast<VLCVarChoiceModel**>(_v) = _t->getAudioStereoMode(); break;
        case 58: *reinterpret_cast<VLCVarChoiceModel**>(_v) = _t->getAudioMixMode(); break;
        case 59: *reinterpret_cast<VLCVarChoiceModel**>(_v) = _t->getAudioVisualizations(); break;
        case 60: *reinterpret_cast<bool*>(_v) = _t->hasAudioVisualization(); break;
        case 61: *reinterpret_cast<enum ABLoopState*>(_v) = _t->getABloopState(); break;
        case 62: *reinterpret_cast<VLCTime*>(_v) = _t->getABLoopA(); break;
        case 63: *reinterpret_cast<VLCTime*>(_v) = _t->getABLoopB(); break;
        case 64: *reinterpret_cast<bool*>(_v) = _t->isRecording(); break;
        case 65: *reinterpret_cast<RendererManager**>(_v) = _t->getRendererManager(); break;
        case 66: *reinterpret_cast<QString*>(_v) = _t->highResolutionTime(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setRate(*reinterpret_cast<float*>(_v)); break;
        case 6: _t->setTime(*reinterpret_cast<VLCTime*>(_v)); break;
        case 8: _t->setPosition(*reinterpret_cast<double*>(_v)); break;
        case 22: _t->setAudioDelay(*reinterpret_cast<VLCDuration*>(_v)); break;
        case 23: _t->setSubtitleDelay(*reinterpret_cast<VLCDuration*>(_v)); break;
        case 24: _t->setSecondarySubtitleDelay(*reinterpret_cast<VLCDuration*>(_v)); break;
        case 25: _t->setAudioDelayMS(*reinterpret_cast<int*>(_v)); break;
        case 26: _t->setSubtitleDelayMS(*reinterpret_cast<int*>(_v)); break;
        case 27: _t->setSecondarySubtitleDelayMS(*reinterpret_cast<int*>(_v)); break;
        case 28: _t->setSubtitleFPS(*reinterpret_cast<float*>(_v)); break;
        case 39: _t->enableTeletext(*reinterpret_cast<bool*>(_v)); break;
        case 41: _t->setTeletextPage(*reinterpret_cast<int*>(_v)); break;
        case 42: _t->setTeletextTransparency(*reinterpret_cast<bool*>(_v)); break;
        case 51: _t->setFullscreen(*reinterpret_cast<bool*>(_v)); break;
        case 52: _t->setWallpaperMode(*reinterpret_cast<bool*>(_v)); break;
        case 53: _t->setAutoscale(*reinterpret_cast<bool*>(_v)); break;
        case 54: _t->setVolume(*reinterpret_cast<float*>(_v)); break;
        case 55: _t->setMuted(*reinterpret_cast<bool*>(_v)); break;
        case 61: _t->setABloopState(*reinterpret_cast<enum ABLoopState*>(_v)); break;
        case 64: _t->setRecording(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *PlayerController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16PlayerControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlayerController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 187)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 187;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 187)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 187;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 67;
    }
    return _id;
}

// SIGNAL 0
void PlayerController::playingStateChanged(PlayingState _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void PlayerController::inputChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void PlayerController::nameChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void PlayerController::bufferingChanged(float _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void PlayerController::rateChanged(float _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void PlayerController::timeChanged(VLCTime _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void PlayerController::remainingTimeChanged(VLCTime _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void PlayerController::positionChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void PlayerController::lengthChanged(VLCDuration _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void PlayerController::positionUpdated(double _t1, VLCTime _t2, VLCDuration _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1, _t2, _t3);
}

// SIGNAL 10
void PlayerController::seekRequested(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void PlayerController::seekableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void PlayerController::rewindableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void PlayerController::pausableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void PlayerController::recordableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void PlayerController::rateChangableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void PlayerController::playbackRestoreQueried()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void PlayerController::audioDelayChanged(VLCDuration _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void PlayerController::subtitleDelayChanged(VLCDuration _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void PlayerController::secondarySubtitleDelayChanged(VLCDuration _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}

// SIGNAL 20
void PlayerController::subtitleFPSChanged(float _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1);
}

// SIGNAL 21
void PlayerController::hasTitlesChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1);
}

// SIGNAL 22
void PlayerController::hasChaptersChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 22, nullptr, _t1);
}

// SIGNAL 23
void PlayerController::hasMenuChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 23, nullptr, _t1);
}

// SIGNAL 24
void PlayerController::isMenuChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 24, nullptr, _t1);
}

// SIGNAL 25
void PlayerController::isInteractiveChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 25, nullptr, _t1);
}

// SIGNAL 26
void PlayerController::hasProgramsChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 26, nullptr, _t1);
}

// SIGNAL 27
void PlayerController::isEncryptedChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 27, nullptr, _t1);
}

// SIGNAL 28
void PlayerController::teletextEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 28, nullptr, _t1);
}

// SIGNAL 29
void PlayerController::teletextAvailableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 29, nullptr, _t1);
}

// SIGNAL 30
void PlayerController::teletextPageChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 30, nullptr, _t1);
}

// SIGNAL 31
void PlayerController::teletextTransparencyChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 31, nullptr, _t1);
}

// SIGNAL 32
void PlayerController::hasVideoOutputChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 32, nullptr, _t1);
}

// SIGNAL 33
void PlayerController::fullscreenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 33, nullptr, _t1);
}

// SIGNAL 34
void PlayerController::wallpaperModeChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 34, nullptr, _t1);
}

// SIGNAL 35
void PlayerController::autoscaleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 35, nullptr, _t1);
}

// SIGNAL 36
void PlayerController::voutListChanged(vout_thread_t * * _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 36, nullptr, _t1, _t2);
}

// SIGNAL 37
void PlayerController::volumeChanged(float _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 37, nullptr, _t1);
}

// SIGNAL 38
void PlayerController::soundMuteChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 38, nullptr, _t1);
}

// SIGNAL 39
void PlayerController::hasAudioVisualizationChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 39, nullptr, _t1);
}

// SIGNAL 40
void PlayerController::recordingChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 40, nullptr, _t1);
}

// SIGNAL 41
void PlayerController::ABLoopStateChanged(ABLoopState _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 41, nullptr, _t1);
}

// SIGNAL 42
void PlayerController::ABLoopAChanged(VLCTime _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 42, nullptr, _t1);
}

// SIGNAL 43
void PlayerController::ABLoopBChanged(VLCTime _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 43, nullptr, _t1);
}

// SIGNAL 44
void PlayerController::highResolutionTimeChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 44, nullptr, _t1);
}

// SIGNAL 45
void PlayerController::resumePlayback(VLCTime _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 45, nullptr, _t1);
}

// SIGNAL 46
void PlayerController::statisticsUpdated(const input_stats_t & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 46, nullptr, _t1);
}

// SIGNAL 47
void PlayerController::infoChanged(input_item_t * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 47, nullptr, _t1);
}

// SIGNAL 48
void PlayerController::currentMetaChanged(input_item_t * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 48, nullptr, _t1);
}

// SIGNAL 49
void PlayerController::metaChanged(input_item_t * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 49, nullptr, _t1);
}

// SIGNAL 50
void PlayerController::artChanged(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 50, nullptr, _t1);
}

// SIGNAL 51
void PlayerController::artChanged(input_item_t * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 51, nullptr, _t1);
}

// SIGNAL 52
void PlayerController::bookmarksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 52, nullptr);
}

// SIGNAL 53
void PlayerController::epgChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 53, nullptr);
}
QT_WARNING_POP

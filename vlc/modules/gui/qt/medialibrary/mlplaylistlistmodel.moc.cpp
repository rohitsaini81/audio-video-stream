/****************************************************************************
** Meta object code from reading C++ file 'mlplaylistlistmodel.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mlplaylistlistmodel.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mlplaylistlistmodel.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19MLPlaylistListModelE_t {};
} // unnamed namespace

template <> constexpr inline auto MLPlaylistListModel::qt_create_metaobjectdata<qt_meta_tag_ZN19MLPlaylistListModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MLPlaylistListModel",
        "coverSizeChanged",
        "",
        "coverDefaultChanged",
        "coverPrefixChanged",
        "playlistTypeChanged",
        "transactionPendingChanged",
        "create",
        "name",
        "QVariantList",
        "initialItems",
        "append",
        "MLItemId",
        "playlistId",
        "ids",
        "deletePlaylists",
        "showDialogRename",
        "QModelIndex",
        "index",
        "getItemId",
        "coverSize",
        "QSize",
        "coverDefault",
        "coverPrefix",
        "playlistType",
        "PlaylistType",
        "transactionPending",
        "Roles",
        "PLAYLIST_ID",
        "PLAYLIST_NAME",
        "PLAYLIST_THUMBNAIL",
        "PLAYLIST_DURATION",
        "PLAYLIST_COUNT",
        "PLAYLIST_TYPE_ALL",
        "PLAYLIST_TYPE_AUDIO",
        "PLAYLIST_TYPE_VIDEO",
        "PLAYLIST_TYPE_AUDIO_ONLY",
        "PLAYLIST_TYPE_VIDEO_ONLY"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'coverSizeChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'coverDefaultChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'coverPrefixChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'playlistTypeChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'transactionPendingChanged'
        QtMocHelpers::SignalData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Method 'create'
        QtMocHelpers::MethodData<void(const QString &, const QVariantList &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Method 'append'
        QtMocHelpers::MethodData<void(const MLItemId &, const QVariantList &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 }, { 0x80000000 | 9, 14 },
        }}),
        // Method 'deletePlaylists'
        QtMocHelpers::MethodData<bool(const QVariantList &)>(15, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 9, 14 },
        }}),
        // Method 'showDialogRename'
        QtMocHelpers::MethodData<bool(const QModelIndex &)>(16, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Method 'getItemId'
        QtMocHelpers::MethodData<MLItemId(int) const>(19, 2, QMC::AccessPublic, 0x80000000 | 12, {{
            { QMetaType::Int, 18 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'coverSize'
        QtMocHelpers::PropertyData<QSize>(20, 0x80000000 | 21, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 0),
        // property 'coverDefault'
        QtMocHelpers::PropertyData<QString>(22, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 1),
        // property 'coverPrefix'
        QtMocHelpers::PropertyData<QString>(23, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 2),
        // property 'playlistType'
        QtMocHelpers::PropertyData<enum PlaylistType>(24, 0x80000000 | 25, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 3),
        // property 'transactionPending'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 4),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Roles'
        QtMocHelpers::EnumData<enum Roles>(27, 27, QMC::EnumFlags{}).add({
            {   28, Roles::PLAYLIST_ID },
            {   29, Roles::PLAYLIST_NAME },
            {   30, Roles::PLAYLIST_THUMBNAIL },
            {   31, Roles::PLAYLIST_DURATION },
            {   32, Roles::PLAYLIST_COUNT },
        }),
        // enum 'PlaylistType'
        QtMocHelpers::EnumData<enum PlaylistType>(25, 25, QMC::EnumFlags{}).add({
            {   33, PlaylistType::PLAYLIST_TYPE_ALL },
            {   34, PlaylistType::PLAYLIST_TYPE_AUDIO },
            {   35, PlaylistType::PLAYLIST_TYPE_VIDEO },
            {   36, PlaylistType::PLAYLIST_TYPE_AUDIO_ONLY },
            {   37, PlaylistType::PLAYLIST_TYPE_VIDEO_ONLY },
        }),
    };
    return QtMocHelpers::metaObjectData<MLPlaylistListModel, qt_meta_tag_ZN19MLPlaylistListModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MLPlaylistListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<MLBaseModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19MLPlaylistListModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19MLPlaylistListModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19MLPlaylistListModelE_t>.metaTypes,
    nullptr
} };

void MLPlaylistListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MLPlaylistListModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->coverSizeChanged(); break;
        case 1: _t->coverDefaultChanged(); break;
        case 2: _t->coverPrefixChanged(); break;
        case 3: _t->playlistTypeChanged(); break;
        case 4: _t->transactionPendingChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->create((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[2]))); break;
        case 6: _t->append((*reinterpret_cast<std::add_pointer_t<MLItemId>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[2]))); break;
        case 7: { bool _r = _t->deletePlaylists((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->showDialogRename((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { MLItemId _r = _t->getItemId((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<MLItemId*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MLPlaylistListModel::*)()>(_a, &MLPlaylistListModel::coverSizeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MLPlaylistListModel::*)()>(_a, &MLPlaylistListModel::coverDefaultChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MLPlaylistListModel::*)()>(_a, &MLPlaylistListModel::coverPrefixChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MLPlaylistListModel::*)()>(_a, &MLPlaylistListModel::playlistTypeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MLPlaylistListModel::*)(bool )>(_a, &MLPlaylistListModel::transactionPendingChanged, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QSize*>(_v) = _t->coverSize(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->coverDefault(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->coverPrefix(); break;
        case 3: *reinterpret_cast<enum PlaylistType*>(_v) = _t->playlistType(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->transactionPending(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCoverSize(*reinterpret_cast<QSize*>(_v)); break;
        case 1: _t->setCoverDefault(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setCoverPrefix(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setPlaylistType(*reinterpret_cast<enum PlaylistType*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *MLPlaylistListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MLPlaylistListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19MLPlaylistListModelE_t>.strings))
        return static_cast<void*>(this);
    return MLBaseModel::qt_metacast(_clname);
}

int MLPlaylistListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MLBaseModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MLPlaylistListModel::coverSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MLPlaylistListModel::coverDefaultChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MLPlaylistListModel::coverPrefixChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MLPlaylistListModel::playlistTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MLPlaylistListModel::transactionPendingChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'control_list_model.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "control_list_model.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'control_list_model.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16ControlListModelE_t {};
} // unnamed namespace

template <> constexpr inline auto ControlListModel::qt_create_metaobjectdata<qt_meta_tag_ZN16ControlListModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ControlListModel",
        "countChanged",
        "",
        "insert",
        "index",
        "QVariantMap",
        "bdata",
        "move",
        "src",
        "dest",
        "remove",
        "clear",
        "count",
        "ControlType",
        "PLAY_BUTTON",
        "STOP_BUTTON",
        "OPEN_BUTTON",
        "PREVIOUS_BUTTON",
        "NEXT_BUTTON",
        "SLOWER_BUTTON",
        "FASTER_BUTTON",
        "FULLSCREEN_BUTTON",
        "EXTENDED_BUTTON",
        "PLAYLIST_BUTTON",
        "SNAPSHOT_BUTTON",
        "RECORD_BUTTON",
        "ATOB_BUTTON",
        "FRAME_BUTTON",
        "SKIP_BACK_BUTTON",
        "SKIP_FW_BUTTON",
        "QUIT_BUTTON",
        "RANDOM_BUTTON",
        "LOOP_BUTTON",
        "INFO_BUTTON",
        "LANG_BUTTON",
        "MENU_BUTTON",
        "BACK_BUTTON",
        "CHAPTER_PREVIOUS_BUTTON",
        "CHAPTER_NEXT_BUTTON",
        "BUTTON_MAX",
        "PLAYER_SWITCH_BUTTON",
        "ARTWORK_INFO",
        "PLAYBACK_SPEED_BUTTON",
        "HIGH_RESOLUTION_TIME_WIDGET",
        "SPLITTER",
        "VOLUME",
        "TELETEXT_BUTTONS",
        "ASPECT_RATIO_COMBOBOX",
        "DVD_MENUS_BUTTON",
        "REVERSE_BUTTON",
        "BOOKMARK_BUTTON",
        "RENDERER_BUTTON",
        "NAVIGATION_BUTTONS",
        "PROGRAM_BUTTON",
        "NAVIGATION_BOX",
        "SPECIAL_MAX",
        "WIDGET_SPACER",
        "WIDGET_SPACER_EXTEND",
        "WIDGET_MAX"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'countChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'insert'
        QtMocHelpers::SlotData<void(int, QVariantMap)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Slot 'move'
        QtMocHelpers::SlotData<void(int, int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 }, { QMetaType::Int, 9 },
        }}),
        // Slot 'remove'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Slot 'clear'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'count'
        QtMocHelpers::PropertyData<int>(12, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Final, 0),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ControlType'
        QtMocHelpers::EnumData<enum ControlType>(13, 13, QMC::EnumFlags{}).add({
            {   14, ControlType::PLAY_BUTTON },
            {   15, ControlType::STOP_BUTTON },
            {   16, ControlType::OPEN_BUTTON },
            {   17, ControlType::PREVIOUS_BUTTON },
            {   18, ControlType::NEXT_BUTTON },
            {   19, ControlType::SLOWER_BUTTON },
            {   20, ControlType::FASTER_BUTTON },
            {   21, ControlType::FULLSCREEN_BUTTON },
            {   22, ControlType::EXTENDED_BUTTON },
            {   23, ControlType::PLAYLIST_BUTTON },
            {   24, ControlType::SNAPSHOT_BUTTON },
            {   25, ControlType::RECORD_BUTTON },
            {   26, ControlType::ATOB_BUTTON },
            {   27, ControlType::FRAME_BUTTON },
            {   28, ControlType::SKIP_BACK_BUTTON },
            {   29, ControlType::SKIP_FW_BUTTON },
            {   30, ControlType::QUIT_BUTTON },
            {   31, ControlType::RANDOM_BUTTON },
            {   32, ControlType::LOOP_BUTTON },
            {   33, ControlType::INFO_BUTTON },
            {   34, ControlType::LANG_BUTTON },
            {   35, ControlType::MENU_BUTTON },
            {   36, ControlType::BACK_BUTTON },
            {   37, ControlType::CHAPTER_PREVIOUS_BUTTON },
            {   38, ControlType::CHAPTER_NEXT_BUTTON },
            {   39, ControlType::BUTTON_MAX },
            {   40, ControlType::PLAYER_SWITCH_BUTTON },
            {   41, ControlType::ARTWORK_INFO },
            {   42, ControlType::PLAYBACK_SPEED_BUTTON },
            {   43, ControlType::HIGH_RESOLUTION_TIME_WIDGET },
            {   44, ControlType::SPLITTER },
            {   45, ControlType::VOLUME },
            {   46, ControlType::TELETEXT_BUTTONS },
            {   47, ControlType::ASPECT_RATIO_COMBOBOX },
            {   48, ControlType::DVD_MENUS_BUTTON },
            {   49, ControlType::REVERSE_BUTTON },
            {   50, ControlType::BOOKMARK_BUTTON },
            {   51, ControlType::RENDERER_BUTTON },
            {   52, ControlType::NAVIGATION_BUTTONS },
            {   53, ControlType::PROGRAM_BUTTON },
            {   54, ControlType::NAVIGATION_BOX },
            {   55, ControlType::SPECIAL_MAX },
            {   56, ControlType::WIDGET_SPACER },
            {   57, ControlType::WIDGET_SPACER_EXTEND },
            {   58, ControlType::WIDGET_MAX },
        }),
    };
    return QtMocHelpers::metaObjectData<ControlListModel, qt_meta_tag_ZN16ControlListModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ControlListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ControlListModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ControlListModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16ControlListModelE_t>.metaTypes,
    nullptr
} };

void ControlListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ControlListModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->insert((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2]))); break;
        case 2: _t->move((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->remove((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->clear(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ControlListModel::*)()>(_a, &ControlListModel::countChanged, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->rowCount(); break;
        default: break;
        }
    }
}

const QMetaObject *ControlListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControlListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ControlListModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int ControlListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ControlListModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'vlm.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vlm.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vlm.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9VLMDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto VLMDialog::qt_create_metaobjectdata<qt_meta_tag_ZN9VLMDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VLMDialog",
        "removeVLMItem",
        "",
        "VLMAWidget*",
        "startModifyVLMItem",
        "addVLMItem",
        "clearWidgets",
        "saveModifications",
        "showScheduleWidget",
        "selectVLMItem",
        "selectInput",
        "selectOutput",
        "exportVLMConf",
        "importVLMConf"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'removeVLMItem'
        QtMocHelpers::SlotData<void(VLMAWidget *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'startModifyVLMItem'
        QtMocHelpers::SlotData<void(VLMAWidget *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'addVLMItem'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clearWidgets'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveModifications'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showScheduleWidget'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'selectVLMItem'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'selectInput'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'selectOutput'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'exportVLMConf'
        QtMocHelpers::SlotData<bool()>(12, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'importVLMConf'
        QtMocHelpers::SlotData<bool()>(13, 2, QMC::AccessPrivate, QMetaType::Bool),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VLMDialog, qt_meta_tag_ZN9VLMDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VLMDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QVLCFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9VLMDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9VLMDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9VLMDialogE_t>.metaTypes,
    nullptr
} };

void VLMDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VLMDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->removeVLMItem((*reinterpret_cast<std::add_pointer_t<VLMAWidget*>>(_a[1]))); break;
        case 1: _t->startModifyVLMItem((*reinterpret_cast<std::add_pointer_t<VLMAWidget*>>(_a[1]))); break;
        case 2: _t->addVLMItem(); break;
        case 3: _t->clearWidgets(); break;
        case 4: _t->saveModifications(); break;
        case 5: _t->showScheduleWidget((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->selectVLMItem((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->selectInput(); break;
        case 8: _t->selectOutput(); break;
        case 9: { bool _r = _t->exportVLMConf();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->importVLMConf();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< VLMAWidget* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< VLMAWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *VLMDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VLMDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9VLMDialogE_t>.strings))
        return static_cast<void*>(this);
    return QVLCFrame::qt_metacast(_clname);
}

int VLMDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
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
    return _id;
}
namespace {
struct qt_meta_tag_ZN10VLMAWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto VLMAWidget::qt_create_metaobjectdata<qt_meta_tag_ZN10VLMAWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VLMAWidget",
        "modify",
        "",
        "del",
        "toggleEnabled"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'modify'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'del'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleEnabled'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VLMAWidget, qt_meta_tag_ZN10VLMAWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VLMAWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QGroupBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10VLMAWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10VLMAWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10VLMAWidgetE_t>.metaTypes,
    nullptr
} };

void VLMAWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VLMAWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modify(); break;
        case 1: _t->del(); break;
        case 2: _t->toggleEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *VLMAWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VLMAWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10VLMAWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QGroupBox::qt_metacast(_clname);
}

int VLMAWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN12VLMBroadcastE_t {};
} // unnamed namespace

template <> constexpr inline auto VLMBroadcast::qt_create_metaobjectdata<qt_meta_tag_ZN12VLMBroadcastE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VLMBroadcast",
        "stop",
        "",
        "togglePlayPause",
        "toggleLoop"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'stop'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'togglePlayPause'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleLoop'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VLMBroadcast, qt_meta_tag_ZN12VLMBroadcastE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VLMBroadcast::staticMetaObject = { {
    QMetaObject::SuperData::link<VLMAWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12VLMBroadcastE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12VLMBroadcastE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12VLMBroadcastE_t>.metaTypes,
    nullptr
} };

void VLMBroadcast::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VLMBroadcast *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->stop(); break;
        case 1: _t->togglePlayPause(); break;
        case 2: _t->toggleLoop(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *VLMBroadcast::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VLMBroadcast::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12VLMBroadcastE_t>.strings))
        return static_cast<void*>(this);
    return VLMAWidget::qt_metacast(_clname);
}

int VLMBroadcast::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VLMAWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN11VLMScheduleE_t {};
} // unnamed namespace

template <> constexpr inline auto VLMSchedule::qt_create_metaobjectdata<qt_meta_tag_ZN11VLMScheduleE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VLMSchedule"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VLMSchedule, qt_meta_tag_ZN11VLMScheduleE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VLMSchedule::staticMetaObject = { {
    QMetaObject::SuperData::link<VLMAWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11VLMScheduleE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11VLMScheduleE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11VLMScheduleE_t>.metaTypes,
    nullptr
} };

void VLMSchedule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VLMSchedule *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *VLMSchedule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VLMSchedule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11VLMScheduleE_t>.strings))
        return static_cast<void*>(this);
    return VLMAWidget::qt_metacast(_clname);
}

int VLMSchedule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VLMAWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP

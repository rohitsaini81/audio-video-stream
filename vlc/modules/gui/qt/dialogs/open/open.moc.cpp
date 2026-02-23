/****************************************************************************
** Meta object code from reading C++ file 'open.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "open.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'open.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10OpenDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto OpenDialog::qt_create_metaobjectdata<qt_meta_tag_ZN10OpenDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OpenDialog",
        "selectSlots",
        "",
        "play",
        "stream",
        "b_transode_only",
        "enqueue",
        "b_enqueue",
        "transcode",
        "setMenuAction",
        "cancel",
        "close",
        "toggleAdvancedPanel",
        "updateMRL",
        "newCachingMethod",
        "signalCurrent",
        "browseInputSlave"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'selectSlots'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'play'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'stream'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Slot 'stream'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'enqueue'
        QtMocHelpers::SlotData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'enqueue'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'transcode'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setMenuAction'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'cancel'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'close'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleAdvancedPanel'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateMRL'
        QtMocHelpers::SlotData<void(const QStringList &, const QString &)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QStringList, 2 }, { QMetaType::QString, 2 },
        }}),
        // Slot 'updateMRL'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'newCachingMethod'
        QtMocHelpers::SlotData<void(const QString &)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'signalCurrent'
        QtMocHelpers::SlotData<void(int)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'browseInputSlave'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OpenDialog, qt_meta_tag_ZN10OpenDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OpenDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QVLCDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10OpenDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10OpenDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10OpenDialogE_t>.metaTypes,
    nullptr
} };

void OpenDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OpenDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectSlots(); break;
        case 1: _t->play(); break;
        case 2: _t->stream((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->stream(); break;
        case 4: _t->enqueue((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->enqueue(); break;
        case 6: _t->transcode(); break;
        case 7: _t->setMenuAction(); break;
        case 8: _t->cancel(); break;
        case 9: _t->close(); break;
        case 10: _t->toggleAdvancedPanel(); break;
        case 11: _t->updateMRL((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->updateMRL(); break;
        case 13: _t->newCachingMethod((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->signalCurrent((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->browseInputSlave(); break;
        default: ;
        }
    }
}

const QMetaObject *OpenDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10OpenDialogE_t>.strings))
        return static_cast<void*>(this);
    return QVLCDialog::qt_metacast(_clname);
}

int OpenDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP

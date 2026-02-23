/****************************************************************************
** Meta object code from reading C++ file 'dialogmodel.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialogmodel.hpp"
#include "maininterface/mainctx.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogmodel.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8DialogIdE_t {};
} // unnamed namespace

template <> constexpr inline auto DialogId::qt_create_metaobjectdata<qt_meta_tag_ZN8DialogIdE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DialogId"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DialogId, qt_meta_tag_ZN8DialogIdE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DialogId::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8DialogIdE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8DialogIdE_t>.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8DialogIdE_t>.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN16DialogErrorModelE_t {};
} // unnamed namespace

template <> constexpr inline auto DialogErrorModel::qt_create_metaobjectdata<qt_meta_tag_ZN16DialogErrorModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DialogErrorModel",
        "modelChanged",
        "",
        "countChanged",
        "pushError",
        "title",
        "message",
        "resetRepeatedMessageCount",
        "count",
        "notificationText",
        "repeatedMessageCount",
        "DialogRoles",
        "DIALOG_TITLE",
        "DIALOG_TEXT"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modelChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'countChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pushError'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 }, { QMetaType::QString, 6 },
        }}),
        // Method 'resetRepeatedMessageCount'
        QtMocHelpers::MethodData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'count'
        QtMocHelpers::PropertyData<int>(8, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Final, 1),
        // property 'notificationText'
        QtMocHelpers::PropertyData<QString>(9, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 1),
        // property 'repeatedMessageCount'
        QtMocHelpers::PropertyData<int>(10, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Final, 1),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'DialogRoles'
        QtMocHelpers::EnumData<enum DialogRoles>(11, 11, QMC::EnumFlags{}).add({
            {   12, DialogRoles::DIALOG_TITLE },
            {   13, DialogRoles::DIALOG_TEXT },
        }),
    };
    return QtMocHelpers::metaObjectData<DialogErrorModel, qt_meta_tag_ZN16DialogErrorModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DialogErrorModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16DialogErrorModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16DialogErrorModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16DialogErrorModelE_t>.metaTypes,
    nullptr
} };

void DialogErrorModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DialogErrorModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modelChanged(); break;
        case 1: _t->countChanged(); break;
        case 2: _t->pushError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->resetRepeatedMessageCount(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DialogErrorModel::*)()>(_a, &DialogErrorModel::modelChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DialogErrorModel::*)()>(_a, &DialogErrorModel::countChanged, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->notificationText(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->repeatedMessageCount(); break;
        default: break;
        }
    }
}

const QMetaObject *DialogErrorModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogErrorModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16DialogErrorModelE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Singleton<DialogErrorModel>"))
        return static_cast< Singleton<DialogErrorModel>*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int DialogErrorModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DialogErrorModel::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DialogErrorModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {
struct qt_meta_tag_ZN9VLCDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto VLCDialog::qt_create_metaobjectdata<qt_meta_tag_ZN9VLCDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VLCDialog",
        "post_login",
        "",
        "DialogId",
        "dialogId",
        "username",
        "password",
        "store",
        "post_action1",
        "post_action2",
        "dismiss",
        "login",
        "title",
        "text",
        "defaultUsername",
        "b_ask_store",
        "question",
        "QuestionType",
        "type",
        "cancel",
        "action1",
        "action2",
        "progress",
        "b_indeterminate",
        "f_position",
        "progressUpdated",
        "f_value",
        "cancelled",
        "QUESTION_NORMAL",
        "QUESTION_WARNING",
        "QUESTION_CRITICAL"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'post_login'
        QtMocHelpers::SignalData<void(DialogId, const QString &, const QString &, bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 5 }, { QMetaType::QString, 6 }, { QMetaType::Bool, 7 },
        }}),
        // Signal 'post_login'
        QtMocHelpers::SignalData<void(DialogId, const QString &, const QString &)>(1, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 5 }, { QMetaType::QString, 6 },
        }}),
        // Signal 'post_action1'
        QtMocHelpers::SignalData<void(DialogId)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'post_action2'
        QtMocHelpers::SignalData<void(DialogId)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'dismiss'
        QtMocHelpers::SignalData<void(DialogId)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'login'
        QtMocHelpers::SignalData<void(DialogId, const QString &, const QString &, const QString &, bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 12 }, { QMetaType::QString, 13 }, { QMetaType::QString, 14 },
            { QMetaType::Bool, 15 },
        }}),
        // Signal 'question'
        QtMocHelpers::SignalData<void(DialogId, const QString &, const QString &, enum QuestionType, const QString &, const QString &, const QString &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 12 }, { QMetaType::QString, 13 }, { 0x80000000 | 17, 18 },
            { QMetaType::QString, 19 }, { QMetaType::QString, 20 }, { QMetaType::QString, 21 },
        }}),
        // Signal 'progress'
        QtMocHelpers::SignalData<void(DialogId, const QString &, const QString &, bool, float, const QString &)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 12 }, { QMetaType::QString, 13 }, { QMetaType::Bool, 23 },
            { QMetaType::Float, 24 }, { QMetaType::QString, 19 },
        }}),
        // Signal 'progressUpdated'
        QtMocHelpers::SignalData<void(DialogId, float, const QString &)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Float, 26 }, { QMetaType::QString, 13 },
        }}),
        // Signal 'cancelled'
        QtMocHelpers::SignalData<void(DialogId)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QuestionType'
        QtMocHelpers::EnumData<enum QuestionType>(17, 17, QMC::EnumFlags{}).add({
            {   28, QuestionType::QUESTION_NORMAL },
            {   29, QuestionType::QUESTION_WARNING },
            {   30, QuestionType::QUESTION_CRITICAL },
        }),
    };
    return QtMocHelpers::metaObjectData<VLCDialog, qt_meta_tag_ZN9VLCDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VLCDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9VLCDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9VLCDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9VLCDialogE_t>.metaTypes,
    nullptr
} };

void VLCDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VLCDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->post_login((*reinterpret_cast<std::add_pointer_t<DialogId>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[4]))); break;
        case 1: _t->post_login((*reinterpret_cast<std::add_pointer_t<DialogId>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 2: _t->post_action1((*reinterpret_cast<std::add_pointer_t<DialogId>>(_a[1]))); break;
        case 3: _t->post_action2((*reinterpret_cast<std::add_pointer_t<DialogId>>(_a[1]))); break;
        case 4: _t->dismiss((*reinterpret_cast<std::add_pointer_t<DialogId>>(_a[1]))); break;
        case 5: _t->login((*reinterpret_cast<std::add_pointer_t<DialogId>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[5]))); break;
        case 6: _t->question((*reinterpret_cast<std::add_pointer_t<DialogId>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<enum QuestionType>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[7]))); break;
        case 7: _t->progress((*reinterpret_cast<std::add_pointer_t<DialogId>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[6]))); break;
        case 8: _t->progressUpdated((*reinterpret_cast<std::add_pointer_t<DialogId>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 9: _t->cancelled((*reinterpret_cast<std::add_pointer_t<DialogId>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VLCDialog::*)(DialogId , const QString & , const QString & , bool )>(_a, &VLCDialog::post_login, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (VLCDialog::*)(DialogId )>(_a, &VLCDialog::post_action1, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (VLCDialog::*)(DialogId )>(_a, &VLCDialog::post_action2, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (VLCDialog::*)(DialogId )>(_a, &VLCDialog::dismiss, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (VLCDialog::*)(DialogId , const QString & , const QString & , const QString & , bool )>(_a, &VLCDialog::login, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (VLCDialog::*)(DialogId , const QString & , const QString & , QuestionType , const QString & , const QString & , const QString & )>(_a, &VLCDialog::question, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (VLCDialog::*)(DialogId , const QString & , const QString & , bool , float , const QString & )>(_a, &VLCDialog::progress, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (VLCDialog::*)(DialogId , float , const QString & )>(_a, &VLCDialog::progressUpdated, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (VLCDialog::*)(DialogId )>(_a, &VLCDialog::cancelled, 9))
            return;
    }
}

const QMetaObject *VLCDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VLCDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9VLCDialogE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VLCDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void VLCDialog::post_login(DialogId _t1, const QString & _t2, const QString & _t3, bool _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 2
void VLCDialog::post_action1(DialogId _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void VLCDialog::post_action2(DialogId _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void VLCDialog::dismiss(DialogId _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void VLCDialog::login(DialogId _t1, const QString & _t2, const QString & _t3, const QString & _t4, bool _t5)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2, _t3, _t4, _t5);
}

// SIGNAL 6
void VLCDialog::question(DialogId _t1, const QString & _t2, const QString & _t3, QuestionType _t4, const QString & _t5, const QString & _t6, const QString & _t7)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7);
}

// SIGNAL 7
void VLCDialog::progress(DialogId _t1, const QString & _t2, const QString & _t3, bool _t4, float _t5, const QString & _t6)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2, _t3, _t4, _t5, _t6);
}

// SIGNAL 8
void VLCDialog::progressUpdated(DialogId _t1, float _t2, const QString & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1, _t2, _t3);
}

// SIGNAL 9
void VLCDialog::cancelled(DialogId _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN14VLCDialogModelE_t {};
} // unnamed namespace

template <> constexpr inline auto VLCDialogModel::qt_create_metaobjectdata<qt_meta_tag_ZN14VLCDialogModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VLCDialogModel",
        "providerChanged",
        "",
        "provider",
        "VLCDialog*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'providerChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'provider'
        QtMocHelpers::PropertyData<VLCDialog*>(3, 0x80000000 | 4, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VLCDialogModel, qt_meta_tag_ZN14VLCDialogModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VLCDialogModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14VLCDialogModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14VLCDialogModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14VLCDialogModelE_t>.metaTypes,
    nullptr
} };

void VLCDialogModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VLCDialogModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->providerChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VLCDialogModel::*)()>(_a, &VLCDialogModel::providerChanged, 0))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VLCDialog* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<VLCDialog**>(_v) = _t->getProvider(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setProvider(*reinterpret_cast<VLCDialog**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *VLCDialogModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VLCDialogModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14VLCDialogModelE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Singleton<VLCDialogModel>"))
        return static_cast< Singleton<VLCDialogModel>*>(this);
    return QObject::qt_metacast(_clname);
}

int VLCDialogModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
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
void VLCDialogModel::providerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP

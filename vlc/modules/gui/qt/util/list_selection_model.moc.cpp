/****************************************************************************
** Meta object code from reading C++ file 'list_selection_model.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "list_selection_model.hpp"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'list_selection_model.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18ListSelectionModelE_t {};
} // unnamed namespace

template <> constexpr inline auto ListSelectionModel::qt_create_metaobjectdata<qt_meta_tag_ZN18ListSelectionModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ListSelectionModel",
        "_selectionChanged",
        "",
        "_currentChanged",
        "cacheChanged",
        "setCurrentIndex",
        "QModelIndex",
        "index",
        "QItemSelectionModel::SelectionFlags",
        "command",
        "select",
        "QItemSelection",
        "selection",
        "QList<int>",
        "selectAll",
        "updateSelection",
        "Qt::KeyboardModifiers",
        "modifiers",
        "oldIndex",
        "newIndex",
        "invalidateCache",
        "isSelected",
        "currentIndexInt",
        "selectedIndexesFlat",
        "selectionFlat",
        "sortedSelectedIndexesFlat",
        "cache"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal '_selectionChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal '_currentChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cacheChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setCurrentIndex'
        QtMocHelpers::SlotData<void(const QModelIndex &, QItemSelectionModel::SelectionFlags)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'select'
        QtMocHelpers::SlotData<void(const QModelIndex &, QItemSelectionModel::SelectionFlags)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'select'
        QtMocHelpers::SlotData<void(const QItemSelection &, QItemSelectionModel::SelectionFlags)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'setCurrentIndex'
        QtMocHelpers::SlotData<void(int, QItemSelectionModel::SelectionFlags)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'select'
        QtMocHelpers::SlotData<void(int, QItemSelectionModel::SelectionFlags)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'select'
        QtMocHelpers::SlotData<void(const QVector<int> &, QItemSelectionModel::SelectionFlags)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 12 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'selectAll'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateSelection'
        QtMocHelpers::SlotData<void(Qt::KeyboardModifiers, int, int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 }, { QMetaType::Int, 18 }, { QMetaType::Int, 19 },
        }}),
        // Slot 'invalidateCache'
        QtMocHelpers::SlotData<void() const>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Method 'isSelected'
        QtMocHelpers::MethodData<bool(int) const>(21, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'currentIndexInt'
        QtMocHelpers::PropertyData<int>(22, QMetaType::Int, QMC::Readable | QMC::Scriptable | QMC::Final, 1),
        // property 'selectedIndexesFlat'
        QtMocHelpers::PropertyData<QList<int>>(23, 0x80000000 | 13, QMC::Readable | QMC::Scriptable | QMC::EnumOrFlag | QMC::Final, 0),
        // property 'selectionFlat'
        QtMocHelpers::PropertyData<QList<int>>(24, 0x80000000 | 13, QMC::Readable | QMC::Scriptable | QMC::EnumOrFlag | QMC::Final, 0),
        // property 'sortedSelectedIndexesFlat'
        QtMocHelpers::PropertyData<QList<int>>(25, 0x80000000 | 13, QMC::Readable | QMC::Scriptable | QMC::EnumOrFlag | QMC::Final, 0),
        // property 'cache'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ListSelectionModel, qt_meta_tag_ZN18ListSelectionModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ListSelectionModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QItemSelectionModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ListSelectionModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ListSelectionModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18ListSelectionModelE_t>.metaTypes,
    nullptr
} };

void ListSelectionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ListSelectionModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->_selectionChanged(); break;
        case 1: _t->_currentChanged(); break;
        case 2: _t->cacheChanged(); break;
        case 3: _t->setCurrentIndex((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QItemSelectionModel::SelectionFlags>>(_a[2]))); break;
        case 4: _t->select((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QItemSelectionModel::SelectionFlags>>(_a[2]))); break;
        case 5: _t->select((*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QItemSelectionModel::SelectionFlags>>(_a[2]))); break;
        case 6: _t->setCurrentIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QItemSelectionModel::SelectionFlags>>(_a[2]))); break;
        case 7: _t->select((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QItemSelectionModel::SelectionFlags>>(_a[2]))); break;
        case 8: _t->select((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QItemSelectionModel::SelectionFlags>>(_a[2]))); break;
        case 9: _t->selectAll(); break;
        case 10: _t->updateSelection((*reinterpret_cast<std::add_pointer_t<Qt::KeyboardModifiers>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 11: _t->invalidateCache(); break;
        case 12: { bool _r = _t->isSelected((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ListSelectionModel::*)()>(_a, &ListSelectionModel::_selectionChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListSelectionModel::*)()>(_a, &ListSelectionModel::_currentChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListSelectionModel::*)()>(_a, &ListSelectionModel::cacheChanged, 2))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->currentIndexInt(); break;
        case 1: *reinterpret_cast<QList<int>*>(_v) = _t->selectedIndexesFlat(); break;
        case 2: *reinterpret_cast<QList<int>*>(_v) = _t->selectionFlat(); break;
        case 3: *reinterpret_cast<QList<int>*>(_v) = _t->sortedSelectedIndexesFlat(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->m_caching; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 4:
            if (QtMocHelpers::setProperty(_t->m_caching, *reinterpret_cast<bool*>(_v)))
                Q_EMIT _t->cacheChanged();
            break;
        default: break;
        }
    }
}

const QMetaObject *ListSelectionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListSelectionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ListSelectionModelE_t>.strings))
        return static_cast<void*>(this);
    return QItemSelectionModel::qt_metacast(_clname);
}

int ListSelectionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemSelectionModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
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
void ListSelectionModel::_selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ListSelectionModel::_currentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ListSelectionModel::cacheChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'base_model.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "base_model.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'base_model.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9BaseModelE_t {};
} // unnamed namespace

template <> constexpr inline auto BaseModel::qt_create_metaobjectdata<qt_meta_tag_ZN9BaseModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BaseModel",
        "resetRequested",
        "",
        "sortOrderChanged",
        "sortCriteriaChanged",
        "searchPatternChanged",
        "limitChanged",
        "offsetChanged",
        "countChanged",
        "maximumCountChanged",
        "loadingChanged",
        "getDataAt",
        "QMap<QString,QVariant>",
        "idx",
        "QModelIndex",
        "index",
        "searchPattern",
        "sortOrder",
        "Qt::SortOrder",
        "sortCriteria",
        "limit",
        "offset",
        "count",
        "maximumCount",
        "loading"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'resetRequested'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sortOrderChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sortCriteriaChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'searchPatternChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'limitChanged'
        QtMocHelpers::SignalData<void() const>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'offsetChanged'
        QtMocHelpers::SignalData<void() const>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'countChanged'
        QtMocHelpers::SignalData<void(unsigned int) const>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 2 },
        }}),
        // Signal 'maximumCountChanged'
        QtMocHelpers::SignalData<void(unsigned int) const>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 2 },
        }}),
        // Signal 'loadingChanged'
        QtMocHelpers::SignalData<void() const>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'getDataAt'
        QtMocHelpers::MethodData<QMap<QString,QVariant>(int) const>(11, 2, QMC::AccessPublic, 0x80000000 | 12, {{
            { QMetaType::Int, 13 },
        }}),
        // Method 'getDataAt'
        QtMocHelpers::MethodData<QMap<QString,QVariant>(const QModelIndex &) const>(11, 2, QMC::AccessPublic, 0x80000000 | 12, {{
            { 0x80000000 | 14, 15 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'searchPattern'
        QtMocHelpers::PropertyData<QString>(16, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 3),
        // property 'sortOrder'
        QtMocHelpers::PropertyData<Qt::SortOrder>(17, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 1),
        // property 'sortCriteria'
        QtMocHelpers::PropertyData<QString>(19, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::StdCppSet | QMC::Final, 2),
        // property 'limit'
        QtMocHelpers::PropertyData<uint>(20, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 4),
        // property 'offset'
        QtMocHelpers::PropertyData<uint>(21, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 5),
        // property 'count'
        QtMocHelpers::PropertyData<uint>(22, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Final, 6),
        // property 'maximumCount'
        QtMocHelpers::PropertyData<uint>(23, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Final, 7),
        // property 'loading'
        QtMocHelpers::PropertyData<bool>(24, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 8),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BaseModel, qt_meta_tag_ZN9BaseModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BaseModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9BaseModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9BaseModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9BaseModelE_t>.metaTypes,
    nullptr
} };

void BaseModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BaseModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->resetRequested(); break;
        case 1: _t->sortOrderChanged(); break;
        case 2: _t->sortCriteriaChanged(); break;
        case 3: _t->searchPatternChanged(); break;
        case 4: _t->limitChanged(); break;
        case 5: _t->offsetChanged(); break;
        case 6: _t->countChanged((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 7: _t->maximumCountChanged((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 8: _t->loadingChanged(); break;
        case 9: { QMap<QString,QVariant> _r = _t->getDataAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QMap<QString,QVariant>*>(_a[0]) = std::move(_r); }  break;
        case 10: { QMap<QString,QVariant> _r = _t->getDataAt((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QMap<QString,QVariant>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (BaseModel::*)()>(_a, &BaseModel::resetRequested, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (BaseModel::*)()>(_a, &BaseModel::sortOrderChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (BaseModel::*)()>(_a, &BaseModel::sortCriteriaChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (BaseModel::*)()>(_a, &BaseModel::searchPatternChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (BaseModel::*)() const>(_a, &BaseModel::limitChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (BaseModel::*)() const>(_a, &BaseModel::offsetChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (BaseModel::*)(unsigned int ) const>(_a, &BaseModel::countChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (BaseModel::*)(unsigned int ) const>(_a, &BaseModel::maximumCountChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (BaseModel::*)() const>(_a, &BaseModel::loadingChanged, 8))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->searchPattern(); break;
        case 1: *reinterpret_cast<Qt::SortOrder*>(_v) = _t->getSortOrder(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->getSortCriteria(); break;
        case 3: *reinterpret_cast<uint*>(_v) = _t->getLimit(); break;
        case 4: *reinterpret_cast<uint*>(_v) = _t->getOffset(); break;
        case 5: *reinterpret_cast<uint*>(_v) = _t->getCount(); break;
        case 6: *reinterpret_cast<uint*>(_v) = _t->getMaximumCount(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->loading(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSearchPattern(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSortOrder(*reinterpret_cast<Qt::SortOrder*>(_v)); break;
        case 2: _t->setSortCriteria(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setLimit(*reinterpret_cast<uint*>(_v)); break;
        case 4: _t->setOffset(*reinterpret_cast<uint*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 2: _t->unsetSortCriteria(); break;
        default: break;
        }
    }
}

const QMetaObject *BaseModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9BaseModelE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int BaseModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void BaseModel::resetRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BaseModel::sortOrderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BaseModel::sortCriteriaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void BaseModel::searchPatternChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void BaseModel::limitChanged()const
{
    QMetaObject::activate(const_cast< BaseModel *>(this), &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void BaseModel::offsetChanged()const
{
    QMetaObject::activate(const_cast< BaseModel *>(this), &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void BaseModel::countChanged(unsigned int _t1)const
{
    QMetaObject::activate<void>(const_cast< BaseModel *>(this), &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void BaseModel::maximumCountChanged(unsigned int _t1)const
{
    QMetaObject::activate<void>(const_cast< BaseModel *>(this), &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void BaseModel::loadingChanged()const
{
    QMetaObject::activate(const_cast< BaseModel *>(this), &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP

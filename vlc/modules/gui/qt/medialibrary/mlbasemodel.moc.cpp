/****************************************************************************
** Meta object code from reading C++ file 'mlbasemodel.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mlbasemodel.hpp"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mlbasemodel.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11MLBaseModelE_t {};
} // unnamed namespace

template <> constexpr inline auto MLBaseModel::qt_create_metaobjectdata<qt_meta_tag_ZN11MLBaseModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MLBaseModel",
        "parentIdChanged",
        "",
        "mlChanged",
        "favoriteOnlyChanged",
        "sortByColumn",
        "criteria",
        "Qt::SortOrder",
        "order",
        "getData",
        "QModelIndexList",
        "indexes",
        "QJSValue",
        "callback",
        "getDataFlat",
        "QList<int>",
        "indexList",
        "getDataById",
        "MLItemId",
        "id",
        "getIndexFromId",
        "addAndPlay",
        "list",
        "options",
        "parentId",
        "ml",
        "MediaLib*",
        "favoriteOnly"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'parentIdChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'mlChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'favoriteOnlyChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'sortByColumn'
        QtMocHelpers::MethodData<void(QByteArray, Qt::SortOrder)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Method 'getData'
        QtMocHelpers::MethodData<void(const QModelIndexList &, QJSValue)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 }, { 0x80000000 | 12, 13 },
        }}),
        // Method 'getDataFlat'
        QtMocHelpers::MethodData<void(const QVector<int> &, QJSValue)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 }, { 0x80000000 | 12, 13 },
        }}),
        // Method 'getDataById'
        QtMocHelpers::MethodData<QJSValue(MLItemId)>(17, 2, QMC::AccessPublic, 0x80000000 | 12, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Method 'getIndexFromId'
        QtMocHelpers::MethodData<QJSValue(MLItemId)>(20, 2, QMC::AccessPublic, 0x80000000 | 12, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Method 'addAndPlay'
        QtMocHelpers::MethodData<void(const QModelIndexList &, const QStringList &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 22 }, { QMetaType::QStringList, 23 },
        }}),
        // Method 'addAndPlay'
        QtMocHelpers::MethodData<void(const QModelIndexList &)>(21, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 10, 22 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'parentId'
        QtMocHelpers::PropertyData<MLItemId>(24, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 0),
        // property 'ml'
        QtMocHelpers::PropertyData<MediaLib*>(25, 0x80000000 | 26, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 1),
        // property 'favoriteOnly'
        QtMocHelpers::PropertyData<bool>(27, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MLBaseModel, qt_meta_tag_ZN11MLBaseModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MLBaseModel::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11MLBaseModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11MLBaseModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11MLBaseModelE_t>.metaTypes,
    nullptr
} };

void MLBaseModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MLBaseModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->parentIdChanged(); break;
        case 1: _t->mlChanged(); break;
        case 2: _t->favoriteOnlyChanged(); break;
        case 3: _t->sortByColumn((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::SortOrder>>(_a[2]))); break;
        case 4: _t->getData((*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2]))); break;
        case 5: _t->getDataFlat((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2]))); break;
        case 6: { QJSValue _r = _t->getDataById((*reinterpret_cast<std::add_pointer_t<MLItemId>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 7: { QJSValue _r = _t->getIndexFromId((*reinterpret_cast<std::add_pointer_t<MLItemId>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->addAndPlay((*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 9: _t->addAndPlay((*reinterpret_cast<std::add_pointer_t<QModelIndexList>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MLBaseModel::*)()>(_a, &MLBaseModel::parentIdChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MLBaseModel::*)()>(_a, &MLBaseModel::mlChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MLBaseModel::*)()>(_a, &MLBaseModel::favoriteOnlyChanged, 2))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MediaLib* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<MLItemId*>(_v) = _t->parentId(); break;
        case 1: *reinterpret_cast<MediaLib**>(_v) = _t->ml(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->getFavoriteOnly(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setParentId(*reinterpret_cast<MLItemId*>(_v)); break;
        case 1: _t->setMl(*reinterpret_cast<MediaLib**>(_v)); break;
        case 2: _t->setFavoriteOnly(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 0: _t->unsetParentId(); break;
        default: break;
        }
    }
}

const QMetaObject *MLBaseModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MLBaseModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11MLBaseModelE_t>.strings))
        return static_cast<void*>(this);
    return BaseModel::qt_metacast(_clname);
}

int MLBaseModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
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
void MLBaseModel::parentIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MLBaseModel::mlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MLBaseModel::favoriteOnlyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
namespace {
struct qt_meta_tag_ZN17MLListCacheLoaderE_t {};
} // unnamed namespace

template <> constexpr inline auto MLListCacheLoader::qt_create_metaobjectdata<qt_meta_tag_ZN17MLListCacheLoaderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MLListCacheLoader"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MLListCacheLoader, qt_meta_tag_ZN17MLListCacheLoaderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MLListCacheLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17MLListCacheLoaderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17MLListCacheLoaderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17MLListCacheLoaderE_t>.metaTypes,
    nullptr
} };

void MLListCacheLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MLListCacheLoader *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *MLListCacheLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MLListCacheLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17MLListCacheLoaderE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ListCacheLoader<std::unique_ptr<MLItem>>"))
        return static_cast< ListCacheLoader<std::unique_ptr<MLItem>>*>(this);
    return QObject::qt_metacast(_clname);
}

int MLListCacheLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP

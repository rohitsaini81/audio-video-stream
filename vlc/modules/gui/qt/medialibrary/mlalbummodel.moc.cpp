/****************************************************************************
** Meta object code from reading C++ file 'mlalbummodel.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mlalbummodel.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mlalbummodel.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12MLAlbumModelE_t {};
} // unnamed namespace

template <> constexpr inline auto MLAlbumModel::qt_create_metaobjectdata<qt_meta_tag_ZN12MLAlbumModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MLAlbumModel",
        "roleNames",
        "QHash<int,QByteArray>",
        "",
        "Roles",
        "ALBUM_ID",
        "ALBUM_TITLE",
        "ALBUM_RELEASE_YEAR",
        "ALBUM_SHORT_SUMMARY",
        "ALBUM_COVER",
        "ALBUM_MAIN_ARTIST",
        "ALBUM_NB_TRACKS",
        "ALBUM_DURATION",
        "ALBUM_TITLE_FIRST_SYMBOL",
        "ALBUM_MAIN_ARTIST_FIRST_SYMBOL"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'roleNames'
        QtMocHelpers::MethodData<QHash<int,QByteArray>() const>(1, 3, QMC::AccessPublic, 0x80000000 | 2),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Roles'
        QtMocHelpers::EnumData<enum Roles>(4, 4, QMC::EnumFlags{}).add({
            {    5, Roles::ALBUM_ID },
            {    6, Roles::ALBUM_TITLE },
            {    7, Roles::ALBUM_RELEASE_YEAR },
            {    8, Roles::ALBUM_SHORT_SUMMARY },
            {    9, Roles::ALBUM_COVER },
            {   10, Roles::ALBUM_MAIN_ARTIST },
            {   11, Roles::ALBUM_NB_TRACKS },
            {   12, Roles::ALBUM_DURATION },
            {   13, Roles::ALBUM_TITLE_FIRST_SYMBOL },
            {   14, Roles::ALBUM_MAIN_ARTIST_FIRST_SYMBOL },
        }),
    };
    return QtMocHelpers::metaObjectData<MLAlbumModel, qt_meta_tag_ZN12MLAlbumModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MLAlbumModel::staticMetaObject = { {
    QMetaObject::SuperData::link<MLBaseModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12MLAlbumModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12MLAlbumModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12MLAlbumModelE_t>.metaTypes,
    nullptr
} };

void MLAlbumModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MLAlbumModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QHash<int,QByteArray> _r = _t->roleNames();
            if (_a[0]) *reinterpret_cast<QHash<int,QByteArray>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *MLAlbumModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MLAlbumModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12MLAlbumModelE_t>.strings))
        return static_cast<void*>(this);
    return MLBaseModel::qt_metacast(_clname);
}

int MLAlbumModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MLBaseModel::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP

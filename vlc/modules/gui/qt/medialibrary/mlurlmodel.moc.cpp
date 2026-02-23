/****************************************************************************
** Meta object code from reading C++ file 'mlurlmodel.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mlurlmodel.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mlurlmodel.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10MLUrlModelE_t {};
} // unnamed namespace

template <> constexpr inline auto MLUrlModel::qt_create_metaobjectdata<qt_meta_tag_ZN10MLUrlModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MLUrlModel",
        "addAndPlay",
        "",
        "url",
        "deleteStream",
        "MLItemId",
        "itemId",
        "Roles",
        "URL_ID",
        "URL_URL",
        "URL_LAST_PLAYED_DATE",
        "URL_IS_DELETABLE"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'addAndPlay'
        QtMocHelpers::MethodData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Method 'deleteStream'
        QtMocHelpers::MethodData<void(const MLItemId)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Roles'
        QtMocHelpers::EnumData<enum Roles>(7, 7, QMC::EnumFlags{}).add({
            {    8, Roles::URL_ID },
            {    9, Roles::URL_URL },
            {   10, Roles::URL_LAST_PLAYED_DATE },
            {   11, Roles::URL_IS_DELETABLE },
        }),
    };
    return QtMocHelpers::metaObjectData<MLUrlModel, qt_meta_tag_ZN10MLUrlModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MLUrlModel::staticMetaObject = { {
    QMetaObject::SuperData::link<MLBaseModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MLUrlModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MLUrlModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MLUrlModelE_t>.metaTypes,
    nullptr
} };

void MLUrlModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MLUrlModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->addAndPlay((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->deleteStream((*reinterpret_cast<std::add_pointer_t<MLItemId>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MLUrlModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MLUrlModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MLUrlModelE_t>.strings))
        return static_cast<void*>(this);
    return MLBaseModel::qt_metacast(_clname);
}

int MLUrlModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MLBaseModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP

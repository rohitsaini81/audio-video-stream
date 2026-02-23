/****************************************************************************
** Meta object code from reading C++ file 'vlctick.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vlctick.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vlctick.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7VLCTickE_t {};
} // unnamed namespace

template <> constexpr inline auto VLCTick::qt_create_metaobjectdata<qt_meta_tag_ZN7VLCTickE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VLCTick",
        "valid",
        "",
        "isSubSecond",
        "isSubHour",
        "formatHMS",
        "formatFlags",
        "formatLong",
        "formatShort",
        "toMinutes",
        "toSeconds",
        "toHours",
        "FormatFlag",
        "SubSecondFormattedAsMS"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'valid'
        QtMocHelpers::MethodData<bool() const>(1, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'isSubSecond'
        QtMocHelpers::MethodData<bool() const>(3, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'isSubHour'
        QtMocHelpers::MethodData<bool() const>(4, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'formatHMS'
        QtMocHelpers::MethodData<QString(int) const>(5, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 6 },
        }}),
        // Method 'formatHMS'
        QtMocHelpers::MethodData<QString() const>(5, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString),
        // Method 'formatLong'
        QtMocHelpers::MethodData<QString(int) const>(7, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 6 },
        }}),
        // Method 'formatLong'
        QtMocHelpers::MethodData<QString() const>(7, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString),
        // Method 'formatShort'
        QtMocHelpers::MethodData<QString(int) const>(8, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 6 },
        }}),
        // Method 'formatShort'
        QtMocHelpers::MethodData<QString() const>(8, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString),
        // Method 'toMinutes'
        QtMocHelpers::MethodData<int() const>(9, 2, QMC::AccessPublic, QMetaType::Int),
        // Method 'toSeconds'
        QtMocHelpers::MethodData<int() const>(10, 2, QMC::AccessPublic, QMetaType::Int),
        // Method 'toHours'
        QtMocHelpers::MethodData<int() const>(11, 2, QMC::AccessPublic, QMetaType::Int),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'FormatFlag'
        QtMocHelpers::EnumData<enum FormatFlag>(12, 12, QMC::EnumFlags{}).add({
            {   13, FormatFlag::SubSecondFormattedAsMS },
        }),
    };
    return QtMocHelpers::metaObjectData<VLCTick, qt_meta_tag_ZN7VLCTickE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VLCTick::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7VLCTickE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7VLCTickE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7VLCTickE_t>.metaTypes,
    nullptr
} };

void VLCTick::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<VLCTick *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = _t->valid();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->isSubSecond();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->isSubHour();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->formatHMS((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->formatHMS();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->formatLong((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->formatLong();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->formatShort((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->formatShort();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { int _r = _t->toMinutes();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 10: { int _r = _t->toSeconds();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 11: { int _r = _t->toHours();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}
namespace {
struct qt_meta_tag_ZN11VLCDurationE_t {};
} // unnamed namespace

template <> constexpr inline auto VLCDuration::qt_create_metaobjectdata<qt_meta_tag_ZN11VLCDurationE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VLCDuration",
        "QML.Element",
        "vlcDuration",
        "scale",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'scale'
        QtMocHelpers::MethodData<VLCDuration(float) const>(3, 4, QMC::AccessPublic, 0x80000000 | 0, {{
            { QMetaType::Float, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<VLCDuration, void>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject VLCDuration::staticMetaObject = { {
    QtPrivate::MetaObjectForType<VLCTick>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11VLCDurationE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11VLCDurationE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11VLCDurationE_t>.metaTypes,
    nullptr
} };

void VLCDuration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<VLCDuration *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { VLCDuration _r = _t->scale((*reinterpret_cast<std::add_pointer_t<float>>(_a[1])));
            if (_a[0]) *reinterpret_cast<VLCDuration*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}
namespace {
struct qt_meta_tag_ZN7VLCTimeE_t {};
} // unnamed namespace

template <> constexpr inline auto VLCTime::qt_create_metaobjectdata<qt_meta_tag_ZN7VLCTimeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VLCTime",
        "QML.Element",
        "vlcTime",
        "scale",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'scale'
        QtMocHelpers::MethodData<VLCTime(float) const>(3, 4, QMC::AccessPublic, 0x80000000 | 0, {{
            { QMetaType::Float, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<VLCTime, void>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject VLCTime::staticMetaObject = { {
    QtPrivate::MetaObjectForType<VLCTick>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7VLCTimeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7VLCTimeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7VLCTimeE_t>.metaTypes,
    nullptr
} };

void VLCTime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<VLCTime *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { VLCTime _r = _t->scale((*reinterpret_cast<std::add_pointer_t<float>>(_a[1])));
            if (_a[0]) *reinterpret_cast<VLCTime*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}
namespace {
struct qt_meta_tag_ZN14VLCTickForeignE_t {};
} // unnamed namespace

template <> constexpr inline auto VLCTickForeign::qt_create_metaobjectdata<qt_meta_tag_ZN14VLCTickForeignE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VLCTickForeign",
        "QML.Element",
        "VLCTick",
        "QML.Foreign",
        "QML.ForeignIsNamespace",
        "true"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    2 },
            {    4,    5 },
    });
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN14VLCTickForeignE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}

static constexpr auto qt_staticMetaObjectContent_ZN14VLCTickForeignE =
    VLCTickForeign::qt_create_metaobjectdata<qt_meta_tag_ZN14VLCTickForeignE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN14VLCTickForeignE =
    qt_staticMetaObjectContent_ZN14VLCTickForeignE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN14VLCTickForeignE =
    qt_staticMetaObjectContent_ZN14VLCTickForeignE.relocatingData;

Q_CONSTINIT const QMetaObject VLCTickForeign::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN14VLCTickForeignE.stringdata,
    qt_staticMetaObjectStaticContent_ZN14VLCTickForeignE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN14VLCTickForeignE.metaTypes,
    nullptr
} };

QT_WARNING_POP

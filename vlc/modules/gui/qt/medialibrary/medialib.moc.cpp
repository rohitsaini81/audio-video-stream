/****************************************************************************
** Meta object code from reading C++ file 'medialib.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "medialib.hpp"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'medialib.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8MediaLibE_t {};
} // unnamed namespace

template <> constexpr inline auto MediaLib::qt_create_metaobjectdata<qt_meta_tag_ZN8MediaLibE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MediaLib",
        "discoveryStarted",
        "",
        "discoveryCompleted",
        "parsingProgressChanged",
        "percent",
        "discoveryEntryPointChanged",
        "entryPoint",
        "discoveryPendingChanged",
        "state",
        "idleChanged",
        "deserializeMlItemIdFromString",
        "MLItemId",
        "serialized_id",
        "addToPlaylist",
        "itemId",
        "options",
        "mrl",
        "QUrl",
        "QVariantList",
        "itemIdList",
        "addAndPlay",
        "insertIntoPlaylist",
        "size_t",
        "index",
        "itemIds",
        "reload",
        "mlInputItem",
        "QList<MLItemId>",
        "itemIdVector",
        "QJSValue",
        "callback",
        "discoveryPending",
        "parsingProgress",
        "discoveryEntryPoint",
        "idle"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'discoveryStarted'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'discoveryCompleted'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'parsingProgressChanged'
        QtMocHelpers::SignalData<void(quint32)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 5 },
        }}),
        // Signal 'discoveryEntryPointChanged'
        QtMocHelpers::SignalData<void(QString)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'discoveryPendingChanged'
        QtMocHelpers::SignalData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Signal 'idleChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'deserializeMlItemIdFromString'
        QtMocHelpers::MethodData<MLItemId(const QString &)>(11, 2, QMC::AccessPublic, 0x80000000 | 12, {{
            { QMetaType::QString, 13 },
        }}),
        // Method 'addToPlaylist'
        QtMocHelpers::MethodData<void(const MLItemId &, const QStringList &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 15 }, { QMetaType::QStringList, 16 },
        }}),
        // Method 'addToPlaylist'
        QtMocHelpers::MethodData<void(const MLItemId &)>(14, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 12, 15 },
        }}),
        // Method 'addToPlaylist'
        QtMocHelpers::MethodData<void(const QString &, const QStringList &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 }, { QMetaType::QStringList, 16 },
        }}),
        // Method 'addToPlaylist'
        QtMocHelpers::MethodData<void(const QString &)>(14, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Method 'addToPlaylist'
        QtMocHelpers::MethodData<void(const QUrl &, const QStringList &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 17 }, { QMetaType::QStringList, 16 },
        }}),
        // Method 'addToPlaylist'
        QtMocHelpers::MethodData<void(const QUrl &)>(14, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 18, 17 },
        }}),
        // Method 'addToPlaylist'
        QtMocHelpers::MethodData<void(const QVariantList &, const QStringList &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 }, { QMetaType::QStringList, 16 },
        }}),
        // Method 'addToPlaylist'
        QtMocHelpers::MethodData<void(const QVariantList &)>(14, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Method 'addAndPlay'
        QtMocHelpers::MethodData<void(const MLItemId &, const QStringList &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 15 }, { QMetaType::QStringList, 16 },
        }}),
        // Method 'addAndPlay'
        QtMocHelpers::MethodData<void(const MLItemId &)>(21, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 12, 15 },
        }}),
        // Method 'addAndPlay'
        QtMocHelpers::MethodData<void(const QString &, const QStringList &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 }, { QMetaType::QStringList, 16 },
        }}),
        // Method 'addAndPlay'
        QtMocHelpers::MethodData<void(const QString &)>(21, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Method 'addAndPlay'
        QtMocHelpers::MethodData<void(const QUrl &, const QStringList &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 17 }, { QMetaType::QStringList, 16 },
        }}),
        // Method 'addAndPlay'
        QtMocHelpers::MethodData<void(const QUrl &)>(21, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 18, 17 },
        }}),
        // Method 'addAndPlay'
        QtMocHelpers::MethodData<void(const QVariantList &, const QStringList &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 }, { QMetaType::QStringList, 16 },
        }}),
        // Method 'addAndPlay'
        QtMocHelpers::MethodData<void(const QVariantList &)>(21, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Method 'insertIntoPlaylist'
        QtMocHelpers::MethodData<void(size_t, const QVariantList &, const QStringList &)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 23, 24 }, { 0x80000000 | 19, 25 }, { QMetaType::QStringList, 16 },
        }}),
        // Method 'insertIntoPlaylist'
        QtMocHelpers::MethodData<void(size_t, const QVariantList &)>(22, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 23, 24 }, { 0x80000000 | 19, 25 },
        }}),
        // Method 'reload'
        QtMocHelpers::MethodData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'mlInputItem'
        QtMocHelpers::MethodData<void(const QVector<MLItemId> &, QJSValue)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 28, 29 }, { 0x80000000 | 30, 31 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'discoveryPending'
        QtMocHelpers::PropertyData<bool>(32, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 4),
        // property 'parsingProgress'
        QtMocHelpers::PropertyData<int>(33, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Final, 2),
        // property 'discoveryEntryPoint'
        QtMocHelpers::PropertyData<QString>(34, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 3),
        // property 'idle'
        QtMocHelpers::PropertyData<bool>(35, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 5),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MediaLib, qt_meta_tag_ZN8MediaLibE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MediaLib::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8MediaLibE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8MediaLibE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8MediaLibE_t>.metaTypes,
    nullptr
} };

void MediaLib::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MediaLib *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->discoveryStarted(); break;
        case 1: _t->discoveryCompleted(); break;
        case 2: _t->parsingProgressChanged((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1]))); break;
        case 3: _t->discoveryEntryPointChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->discoveryPendingChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->idleChanged(); break;
        case 6: { MLItemId _r = _t->deserializeMlItemIdFromString((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<MLItemId*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->addToPlaylist((*reinterpret_cast<std::add_pointer_t<MLItemId>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 8: _t->addToPlaylist((*reinterpret_cast<std::add_pointer_t<MLItemId>>(_a[1]))); break;
        case 9: _t->addToPlaylist((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 10: _t->addToPlaylist((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->addToPlaylist((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 12: _t->addToPlaylist((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 13: _t->addToPlaylist((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 14: _t->addToPlaylist((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 15: _t->addAndPlay((*reinterpret_cast<std::add_pointer_t<MLItemId>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 16: _t->addAndPlay((*reinterpret_cast<std::add_pointer_t<MLItemId>>(_a[1]))); break;
        case 17: _t->addAndPlay((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 18: _t->addAndPlay((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->addAndPlay((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 20: _t->addAndPlay((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 21: _t->addAndPlay((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 22: _t->addAndPlay((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 23: _t->insertIntoPlaylist((*reinterpret_cast<std::add_pointer_t<size_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[3]))); break;
        case 24: _t->insertIntoPlaylist((*reinterpret_cast<std::add_pointer_t<size_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[2]))); break;
        case 25: _t->reload(); break;
        case 26: _t->mlInputItem((*reinterpret_cast<std::add_pointer_t<QList<MLItemId>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MediaLib::*)()>(_a, &MediaLib::discoveryStarted, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MediaLib::*)()>(_a, &MediaLib::discoveryCompleted, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MediaLib::*)(quint32 )>(_a, &MediaLib::parsingProgressChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MediaLib::*)(QString )>(_a, &MediaLib::discoveryEntryPointChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MediaLib::*)(bool )>(_a, &MediaLib::discoveryPendingChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MediaLib::*)()>(_a, &MediaLib::idleChanged, 5))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->discoveryPending(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->parsingProgress(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->discoveryEntryPoint(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->idle(); break;
        default: break;
        }
    }
}

const QMetaObject *MediaLib::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaLib::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8MediaLibE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MediaLib::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MediaLib::discoveryStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MediaLib::discoveryCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MediaLib::parsingProgressChanged(quint32 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void MediaLib::discoveryEntryPointChanged(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void MediaLib::discoveryPendingChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void MediaLib::idleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'sout_widgets.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sout_widgets.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sout_widgets.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14VirtualDestBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto VirtualDestBox::qt_create_metaobjectdata<qt_meta_tag_ZN14VirtualDestBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VirtualDestBox",
        "mrlUpdated",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'mrlUpdated'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VirtualDestBox, qt_meta_tag_ZN14VirtualDestBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VirtualDestBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14VirtualDestBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14VirtualDestBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14VirtualDestBoxE_t>.metaTypes,
    nullptr
} };

void VirtualDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VirtualDestBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->mrlUpdated(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VirtualDestBox::*)()>(_a, &VirtualDestBox::mrlUpdated, 0))
            return;
    }
}

const QMetaObject *VirtualDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VirtualDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14VirtualDestBoxE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VirtualDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void VirtualDestBox::mrlUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN11FileDestBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto FileDestBox::qt_create_metaobjectdata<qt_meta_tag_ZN11FileDestBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FileDestBox",
        "fileBrowse",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'fileBrowse'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FileDestBox, qt_meta_tag_ZN11FileDestBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FileDestBox::staticMetaObject = { {
    QMetaObject::SuperData::link<VirtualDestBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FileDestBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FileDestBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11FileDestBoxE_t>.metaTypes,
    nullptr
} };

void FileDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FileDestBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fileBrowse(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *FileDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FileDestBoxE_t>.strings))
        return static_cast<void*>(this);
    return VirtualDestBox::qt_metacast(_clname);
}

int FileDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN11HTTPDestBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto HTTPDestBox::qt_create_metaobjectdata<qt_meta_tag_ZN11HTTPDestBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "HTTPDestBox"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<HTTPDestBox, qt_meta_tag_ZN11HTTPDestBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject HTTPDestBox::staticMetaObject = { {
    QMetaObject::SuperData::link<VirtualDestBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11HTTPDestBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11HTTPDestBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11HTTPDestBoxE_t>.metaTypes,
    nullptr
} };

void HTTPDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<HTTPDestBox *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *HTTPDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HTTPDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11HTTPDestBoxE_t>.strings))
        return static_cast<void*>(this);
    return VirtualDestBox::qt_metacast(_clname);
}

int HTTPDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN11MMSHDestBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto MMSHDestBox::qt_create_metaobjectdata<qt_meta_tag_ZN11MMSHDestBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MMSHDestBox"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MMSHDestBox, qt_meta_tag_ZN11MMSHDestBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MMSHDestBox::staticMetaObject = { {
    QMetaObject::SuperData::link<VirtualDestBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11MMSHDestBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11MMSHDestBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11MMSHDestBoxE_t>.metaTypes,
    nullptr
} };

void MMSHDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MMSHDestBox *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *MMSHDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MMSHDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11MMSHDestBoxE_t>.strings))
        return static_cast<void*>(this);
    return VirtualDestBox::qt_metacast(_clname);
}

int MMSHDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN11RTSPDestBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto RTSPDestBox::qt_create_metaobjectdata<qt_meta_tag_ZN11RTSPDestBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "RTSPDestBox"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RTSPDestBox, qt_meta_tag_ZN11RTSPDestBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject RTSPDestBox::staticMetaObject = { {
    QMetaObject::SuperData::link<VirtualDestBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11RTSPDestBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11RTSPDestBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11RTSPDestBoxE_t>.metaTypes,
    nullptr
} };

void RTSPDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RTSPDestBox *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *RTSPDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RTSPDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11RTSPDestBoxE_t>.strings))
        return static_cast<void*>(this);
    return VirtualDestBox::qt_metacast(_clname);
}

int RTSPDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN10UDPDestBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto UDPDestBox::qt_create_metaobjectdata<qt_meta_tag_ZN10UDPDestBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "UDPDestBox"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UDPDestBox, qt_meta_tag_ZN10UDPDestBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject UDPDestBox::staticMetaObject = { {
    QMetaObject::SuperData::link<VirtualDestBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10UDPDestBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10UDPDestBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10UDPDestBoxE_t>.metaTypes,
    nullptr
} };

void UDPDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UDPDestBox *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *UDPDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDPDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10UDPDestBoxE_t>.strings))
        return static_cast<void*>(this);
    return VirtualDestBox::qt_metacast(_clname);
}

int UDPDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN10SRTDestBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto SRTDestBox::qt_create_metaobjectdata<qt_meta_tag_ZN10SRTDestBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SRTDestBox"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SRTDestBox, qt_meta_tag_ZN10SRTDestBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SRTDestBox::staticMetaObject = { {
    QMetaObject::SuperData::link<VirtualDestBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SRTDestBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SRTDestBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10SRTDestBoxE_t>.metaTypes,
    nullptr
} };

void SRTDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SRTDestBox *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *SRTDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SRTDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SRTDestBoxE_t>.strings))
        return static_cast<void*>(this);
    return VirtualDestBox::qt_metacast(_clname);
}

int SRTDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN11RISTDestBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto RISTDestBox::qt_create_metaobjectdata<qt_meta_tag_ZN11RISTDestBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "RISTDestBox"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RISTDestBox, qt_meta_tag_ZN11RISTDestBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject RISTDestBox::staticMetaObject = { {
    QMetaObject::SuperData::link<VirtualDestBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11RISTDestBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11RISTDestBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11RISTDestBoxE_t>.metaTypes,
    nullptr
} };

void RISTDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RISTDestBox *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *RISTDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RISTDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11RISTDestBoxE_t>.strings))
        return static_cast<void*>(this);
    return VirtualDestBox::qt_metacast(_clname);
}

int RISTDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN10RTPDestBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto RTPDestBox::qt_create_metaobjectdata<qt_meta_tag_ZN10RTPDestBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "RTPDestBox"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RTPDestBox, qt_meta_tag_ZN10RTPDestBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject RTPDestBox::staticMetaObject = { {
    QMetaObject::SuperData::link<VirtualDestBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10RTPDestBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10RTPDestBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10RTPDestBoxE_t>.metaTypes,
    nullptr
} };

void RTPDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RTPDestBox *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *RTPDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RTPDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10RTPDestBoxE_t>.strings))
        return static_cast<void*>(this);
    return VirtualDestBox::qt_metacast(_clname);
}

int RTPDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN10ICEDestBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto ICEDestBox::qt_create_metaobjectdata<qt_meta_tag_ZN10ICEDestBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ICEDestBox"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ICEDestBox, qt_meta_tag_ZN10ICEDestBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ICEDestBox::staticMetaObject = { {
    QMetaObject::SuperData::link<VirtualDestBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ICEDestBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ICEDestBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10ICEDestBoxE_t>.metaTypes,
    nullptr
} };

void ICEDestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ICEDestBox *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *ICEDestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ICEDestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ICEDestBoxE_t>.strings))
        return static_cast<void*>(this);
    return VirtualDestBox::qt_metacast(_clname);
}

int ICEDestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VirtualDestBox::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP

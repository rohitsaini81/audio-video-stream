/****************************************************************************
** Meta object code from reading C++ file 'open_panels.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "open_panels.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'open_panels.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9OpenPanelE_t {};
} // unnamed namespace

template <> constexpr inline auto OpenPanel::qt_create_metaobjectdata<qt_meta_tag_ZN9OpenPanelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OpenPanel",
        "mrlUpdated",
        "",
        "methodChanged",
        "method",
        "updateMRL"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'mrlUpdated'
        QtMocHelpers::SignalData<void(const QStringList &, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 2 }, { QMetaType::QString, 2 },
        }}),
        // Signal 'methodChanged'
        QtMocHelpers::SignalData<void(const QString &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Slot 'updateMRL'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OpenPanel, qt_meta_tag_ZN9OpenPanelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OpenPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9OpenPanelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9OpenPanelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9OpenPanelE_t>.metaTypes,
    nullptr
} };

void OpenPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OpenPanel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->mrlUpdated((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->methodChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->updateMRL(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OpenPanel::*)(const QStringList & , const QString & )>(_a, &OpenPanel::mrlUpdated, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OpenPanel::*)(const QString & )>(_a, &OpenPanel::methodChanged, 1))
            return;
    }
}

const QMetaObject *OpenPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9OpenPanelE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OpenPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void OpenPanel::mrlUpdated(const QStringList & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void OpenPanel::methodChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN11FileOpenBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto FileOpenBox::qt_create_metaobjectdata<qt_meta_tag_ZN11FileOpenBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FileOpenBox",
        "accept",
        "",
        "reject"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'accept'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reject'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FileOpenBox, qt_meta_tag_ZN11FileOpenBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FileOpenBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QFileDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FileOpenBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FileOpenBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11FileOpenBoxE_t>.metaTypes,
    nullptr
} };

void FileOpenBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FileOpenBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *FileOpenBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileOpenBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FileOpenBoxE_t>.strings))
        return static_cast<void*>(this);
    return QFileDialog::qt_metacast(_clname);
}

int FileOpenBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileDialog::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN13FileOpenPanelE_t {};
} // unnamed namespace

template <> constexpr inline auto FileOpenPanel::qt_create_metaobjectdata<qt_meta_tag_ZN13FileOpenPanelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FileOpenPanel",
        "updateMRL",
        "",
        "browseFileSub",
        "browseFile",
        "removeFile",
        "updateButtons"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'updateMRL'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'browseFileSub'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'browseFile'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'removeFile'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateButtons'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FileOpenPanel, qt_meta_tag_ZN13FileOpenPanelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FileOpenPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<OpenPanel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13FileOpenPanelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13FileOpenPanelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13FileOpenPanelE_t>.metaTypes,
    nullptr
} };

void FileOpenPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FileOpenPanel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateMRL(); break;
        case 1: _t->browseFileSub(); break;
        case 2: _t->browseFile(); break;
        case 3: _t->removeFile(); break;
        case 4: _t->updateButtons(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *FileOpenPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileOpenPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13FileOpenPanelE_t>.strings))
        return static_cast<void*>(this);
    return OpenPanel::qt_metacast(_clname);
}

int FileOpenPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OpenPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN12NetOpenPanelE_t {};
} // unnamed namespace

template <> constexpr inline auto NetOpenPanel::qt_create_metaobjectdata<qt_meta_tag_ZN12NetOpenPanelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NetOpenPanel",
        "updateMRL",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'updateMRL'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NetOpenPanel, qt_meta_tag_ZN12NetOpenPanelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NetOpenPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<OpenPanel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12NetOpenPanelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12NetOpenPanelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12NetOpenPanelE_t>.metaTypes,
    nullptr
} };

void NetOpenPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NetOpenPanel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateMRL(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *NetOpenPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetOpenPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12NetOpenPanelE_t>.strings))
        return static_cast<void*>(this);
    return OpenPanel::qt_metacast(_clname);
}

int NetOpenPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OpenPanel::qt_metacall(_c, _id, _a);
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
struct qt_meta_tag_ZN13DiscOpenPanelE_t {};
} // unnamed namespace

template <> constexpr inline auto DiscOpenPanel::qt_create_metaobjectdata<qt_meta_tag_ZN13DiscOpenPanelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DiscOpenPanel",
        "updateMRL",
        "",
        "browseDevice",
        "updateButtons",
        "eject"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'updateMRL'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'browseDevice'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateButtons'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'eject'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DiscOpenPanel, qt_meta_tag_ZN13DiscOpenPanelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DiscOpenPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<OpenPanel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13DiscOpenPanelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13DiscOpenPanelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13DiscOpenPanelE_t>.metaTypes,
    nullptr
} };

void DiscOpenPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DiscOpenPanel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateMRL(); break;
        case 1: _t->browseDevice(); break;
        case 2: _t->updateButtons(); break;
        case 3: _t->eject(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *DiscOpenPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiscOpenPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13DiscOpenPanelE_t>.strings))
        return static_cast<void*>(this);
    return OpenPanel::qt_metacast(_clname);
}

int DiscOpenPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OpenPanel::qt_metacall(_c, _id, _a);
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
    return _id;
}
namespace {
struct qt_meta_tag_ZN16CaptureOpenPanelE_t {};
} // unnamed namespace

template <> constexpr inline auto CaptureOpenPanel::qt_create_metaobjectdata<qt_meta_tag_ZN16CaptureOpenPanelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CaptureOpenPanel",
        "updateMRL",
        "",
        "initialize",
        "updateButtons",
        "enableAdvancedDialog",
        "advancedDialog"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'updateMRL'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'initialize'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateButtons'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enableAdvancedDialog'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'advancedDialog'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CaptureOpenPanel, qt_meta_tag_ZN16CaptureOpenPanelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CaptureOpenPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<OpenPanel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16CaptureOpenPanelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16CaptureOpenPanelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16CaptureOpenPanelE_t>.metaTypes,
    nullptr
} };

void CaptureOpenPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CaptureOpenPanel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateMRL(); break;
        case 1: _t->initialize(); break;
        case 2: _t->updateButtons(); break;
        case 3: _t->enableAdvancedDialog((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->advancedDialog(); break;
        default: ;
        }
    }
}

const QMetaObject *CaptureOpenPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaptureOpenPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16CaptureOpenPanelE_t>.strings))
        return static_cast<void*>(this);
    return OpenPanel::qt_metacast(_clname);
}

int CaptureOpenPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OpenPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP

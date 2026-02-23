/****************************************************************************
** Meta object code from reading C++ file 'video_window_handler.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "video_window_handler.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'video_window_handler.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18VideoWindowHandlerE_t {};
} // unnamed namespace

template <> constexpr inline auto VideoWindowHandler::qt_create_metaobjectdata<qt_meta_tag_ZN18VideoWindowHandlerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VideoWindowHandler",
        "askVideoToResize",
        "",
        "Qt::WindowStates",
        "askVideoSetFullScreen",
        "askVideoOnTop",
        "setVideoSize",
        "w",
        "h",
        "states",
        "setVideoFullScreen",
        "setVideoOnTop"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'askVideoToResize'
        QtMocHelpers::SignalData<void(unsigned int, unsigned int, Qt::WindowStates)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 2 }, { QMetaType::UInt, 2 }, { 0x80000000 | 3, 2 },
        }}),
        // Signal 'askVideoSetFullScreen'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'askVideoOnTop'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setVideoSize'
        QtMocHelpers::SlotData<void(unsigned int, unsigned int, Qt::WindowStates)>(6, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::UInt, 7 }, { QMetaType::UInt, 8 }, { 0x80000000 | 3, 9 },
        }}),
        // Slot 'setVideoFullScreen'
        QtMocHelpers::SlotData<void(bool)>(10, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setVideoOnTop'
        QtMocHelpers::SlotData<void(bool)>(11, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VideoWindowHandler, qt_meta_tag_ZN18VideoWindowHandlerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VideoWindowHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18VideoWindowHandlerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18VideoWindowHandlerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18VideoWindowHandlerE_t>.metaTypes,
    nullptr
} };

void VideoWindowHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VideoWindowHandler *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->askVideoToResize((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Qt::WindowStates>>(_a[3]))); break;
        case 1: _t->askVideoSetFullScreen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->askVideoOnTop((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->setVideoSize((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Qt::WindowStates>>(_a[3]))); break;
        case 4: _t->setVideoFullScreen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setVideoOnTop((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VideoWindowHandler::*)(unsigned int , unsigned int , Qt::WindowStates )>(_a, &VideoWindowHandler::askVideoToResize, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (VideoWindowHandler::*)(bool )>(_a, &VideoWindowHandler::askVideoSetFullScreen, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (VideoWindowHandler::*)(bool )>(_a, &VideoWindowHandler::askVideoOnTop, 2))
            return;
    }
}

const QMetaObject *VideoWindowHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoWindowHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18VideoWindowHandlerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VideoWindowHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void VideoWindowHandler::askVideoToResize(unsigned int _t1, unsigned int _t2, Qt::WindowStates _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void VideoWindowHandler::askVideoSetFullScreen(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void VideoWindowHandler::askVideoOnTop(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'friend.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../friend.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'friend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
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
struct qt_meta_tag_ZN6FriendE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN6FriendE = QtMocHelpers::stringData(
    "Friend",
    "showOrHideOnlineUserW",
    "",
    "flushFriendList",
    "groupChatSendMsg",
    "deleteFriend",
    "privateChat",
    "searchUser",
    "searchPriChatWid",
    "privateChatWid*",
    "const char*",
    "chatName",
    "insertPriChatWidList",
    "priChat",
    "updateGroupShowMsgTE",
    "PDU*",
    "pdu"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN6FriendE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x0a,    2 /* Public */,
       4,    0,   70,    2, 0x0a,    3 /* Public */,
       5,    0,   71,    2, 0x0a,    4 /* Public */,
       6,    0,   72,    2, 0x0a,    5 /* Public */,
       7,    0,   73,    2, 0x0a,    6 /* Public */,
       8,    1,   74,    2, 0x0a,    7 /* Public */,
      12,    1,   77,    2, 0x0a,    9 /* Public */,
      14,    1,   80,    2, 0x0a,   11 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 9, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 9,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject Friend::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN6FriendE.offsetsAndSizes,
    qt_meta_data_ZN6FriendE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN6FriendE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Friend, std::true_type>,
        // method 'showOrHideOnlineUserW'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flushFriendList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'groupChatSendMsg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteFriend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'privateChat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'searchUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'searchPriChatWid'
        QtPrivate::TypeAndForceComplete<privateChatWid *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        // method 'insertPriChatWidList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<privateChatWid *, std::false_type>,
        // method 'updateGroupShowMsgTE'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PDU *, std::false_type>
    >,
    nullptr
} };

void Friend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Friend *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showOrHideOnlineUserW(); break;
        case 1: _t->flushFriendList(); break;
        case 2: _t->groupChatSendMsg(); break;
        case 3: _t->deleteFriend(); break;
        case 4: _t->privateChat(); break;
        case 5: _t->searchUser(); break;
        case 6: { privateChatWid* _r = _t->searchPriChatWid((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< privateChatWid**>(_a[0]) = std::move(_r); }  break;
        case 7: _t->insertPriChatWidList((*reinterpret_cast< std::add_pointer_t<privateChatWid*>>(_a[1]))); break;
        case 8: _t->updateGroupShowMsgTE((*reinterpret_cast< std::add_pointer_t<PDU*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< privateChatWid* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Friend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Friend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN6FriendE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Friend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP

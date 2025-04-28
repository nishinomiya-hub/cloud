/****************************************************************************
** Meta object code from reading C++ file 'filesystem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../filesystem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesystem.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10FileSystemE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10FileSystemE = QtMocHelpers::stringData(
    "FileSystem",
    "uploadProgress",
    "",
    "bytesSent",
    "total",
    "downloadProgress",
    "bytesReceived",
    "createDir",
    "flushDir",
    "delFileOrDir",
    "renameFile",
    "entryDir",
    "QModelIndex",
    "index",
    "returnPreDir",
    "uploadFile",
    "startTimer",
    "uploadFileData",
    "downloadFile",
    "moveFile",
    "moveDesDir",
    "shareFile",
    "getDownloadFileInfo",
    "TransFile*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10FileSystemE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  110,    2, 0x06,    1 /* Public */,
       5,    2,  115,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,  120,    2, 0x0a,    7 /* Public */,
       8,    0,  121,    2, 0x0a,    8 /* Public */,
       9,    0,  122,    2, 0x0a,    9 /* Public */,
      10,    0,  123,    2, 0x0a,   10 /* Public */,
      11,    1,  124,    2, 0x0a,   11 /* Public */,
      14,    0,  127,    2, 0x0a,   13 /* Public */,
      15,    0,  128,    2, 0x0a,   14 /* Public */,
      16,    0,  129,    2, 0x0a,   15 /* Public */,
      17,    0,  130,    2, 0x0a,   16 /* Public */,
      18,    0,  131,    2, 0x0a,   17 /* Public */,
      19,    0,  132,    2, 0x0a,   18 /* Public */,
      20,    0,  133,    2, 0x0a,   19 /* Public */,
      21,    0,  134,    2, 0x0a,   20 /* Public */,
      22,    0,  135,    2, 0x0a,   21 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    6,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 23,

       0        // eod
};

Q_CONSTINIT const QMetaObject FileSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN10FileSystemE.offsetsAndSizes,
    qt_meta_data_ZN10FileSystemE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10FileSystemE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileSystem, std::true_type>,
        // method 'uploadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'downloadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'createDir'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flushDir'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'delFileOrDir'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'renameFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'entryDir'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'returnPreDir'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uploadFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startTimer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uploadFileData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downloadFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveDesDir'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'shareFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getDownloadFileInfo'
        QtPrivate::TypeAndForceComplete<TransFile *, std::false_type>
    >,
    nullptr
} };

void FileSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FileSystem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->uploadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 1: _t->downloadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 2: _t->createDir(); break;
        case 3: _t->flushDir(); break;
        case 4: _t->delFileOrDir(); break;
        case 5: _t->renameFile(); break;
        case 6: _t->entryDir((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 7: _t->returnPreDir(); break;
        case 8: _t->uploadFile(); break;
        case 9: _t->startTimer(); break;
        case 10: _t->uploadFileData(); break;
        case 11: _t->downloadFile(); break;
        case 12: _t->moveFile(); break;
        case 13: _t->moveDesDir(); break;
        case 14: _t->shareFile(); break;
        case 15: { TransFile* _r = _t->getDownloadFileInfo();
            if (_a[0]) *reinterpret_cast< TransFile**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (FileSystem::*)(qint64 , qint64 );
            if (_q_method_type _q_method = &FileSystem::uploadProgress; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (FileSystem::*)(qint64 , qint64 );
            if (_q_method_type _q_method = &FileSystem::downloadProgress; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *FileSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10FileSystemE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FileSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void FileSystem::uploadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileSystem::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'Library.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../library-management/Library.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Library.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSLibraryInfoENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLibraryInfoENDCLASS = QtMocHelpers::stringData(
    "LibraryInfo",
    "booksUpdated",
    "",
    "QComboBox*",
    "bookList",
    "QLabel*",
    "bookCount",
    "loadBooks",
    "updateCount",
    "updatedText",
    "insertBookSlot",
    "bookName",
    "numOfBooks"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLibraryInfoENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[12];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[9];
    char stringdata5[8];
    char stringdata6[10];
    char stringdata7[10];
    char stringdata8[12];
    char stringdata9[12];
    char stringdata10[15];
    char stringdata11[9];
    char stringdata12[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLibraryInfoENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLibraryInfoENDCLASS_t qt_meta_stringdata_CLASSLibraryInfoENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "LibraryInfo"
        QT_MOC_LITERAL(12, 12),  // "booksUpdated"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 10),  // "QComboBox*"
        QT_MOC_LITERAL(37, 8),  // "bookList"
        QT_MOC_LITERAL(46, 7),  // "QLabel*"
        QT_MOC_LITERAL(54, 9),  // "bookCount"
        QT_MOC_LITERAL(64, 9),  // "loadBooks"
        QT_MOC_LITERAL(74, 11),  // "updateCount"
        QT_MOC_LITERAL(86, 11),  // "updatedText"
        QT_MOC_LITERAL(98, 14),  // "insertBookSlot"
        QT_MOC_LITERAL(113, 8),  // "bookName"
        QT_MOC_LITERAL(122, 10)   // "numOfBooks"
    },
    "LibraryInfo",
    "booksUpdated",
    "",
    "QComboBox*",
    "bookList",
    "QLabel*",
    "bookCount",
    "loadBooks",
    "updateCount",
    "updatedText",
    "insertBookSlot",
    "bookName",
    "numOfBooks"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLibraryInfoENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    2,   43,    2, 0x0a,    4 /* Public */,
       8,    2,   48,    2, 0x0a,    7 /* Public */,
      10,    4,   53,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    9,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QString, QMetaType::Int,    4,    6,   11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject LibraryInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSLibraryInfoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLibraryInfoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLibraryInfoENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LibraryInfo, std::true_type>,
        // method 'booksUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QComboBox *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        // method 'loadBooks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QComboBox *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        // method 'updateCount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        // method 'insertBookSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QComboBox *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void LibraryInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LibraryInfo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->booksUpdated((*reinterpret_cast< std::add_pointer_t<QComboBox*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[2]))); break;
        case 1: _t->loadBooks((*reinterpret_cast< std::add_pointer_t<QComboBox*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[2]))); break;
        case 2: _t->updateCount((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[2]))); break;
        case 3: _t->insertBookSlot((*reinterpret_cast< std::add_pointer_t<QComboBox*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QComboBox* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QComboBox* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QComboBox* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LibraryInfo::*)(QComboBox * , QLabel * );
            if (_t _q_method = &LibraryInfo::booksUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *LibraryInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibraryInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLibraryInfoENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LibraryInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void LibraryInfo::booksUpdated(QComboBox * _t1, QLabel * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP

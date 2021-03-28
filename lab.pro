QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    basedialog.cpp \
    eighthtask.cpp \
    eleventhtask.cpp \
    fifthtask.cpp \
    fourthtask.cpp \
    main.cpp \
    mainwindow.cpp \
    ninthtask.cpp \
    sixthtask.cpp \
    student.cpp \
    tenthtask.cpp \
    twelfthtask.cpp \
    utils.cpp

HEADERS += \
    basedialog.h \
    eighthtask.h \
    eleventhtask.h \
    fifthtask.h \
    fourthtask.h \
    indexlist.h \
    itor.h \
    list.h \
    mainwindow.h \
    ninthtask.h \
    seventhtask.h \
    sixthtask.h \
    student.h \
    tenthtask.h \
    twelfthtask.h \
    utils.h \
    vector.h

FORMS += \
    eighthtask.ui \
    fifthtask.ui \
    fourthtask.ui \
    mainwindow.ui \
    ninthtask.ui \
    sixthtask.ui \
    tenthtask.ui \
    twelfthtask.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

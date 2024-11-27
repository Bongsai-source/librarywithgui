QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    borrowreturn.cpp \
    main.cpp \
    dashboard.cpp \
    manbooks.cpp \
    members.cpp

HEADERS += \
    borrowreturn.h \
    dashboard.h \
    manbooks.h \
    members.h

FORMS += \
    borrowreturn.ui \
    dashboard.ui \
    manbooks.ui \
    members.ui

TRANSLATIONS += \
    librarymanagement_en_US.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

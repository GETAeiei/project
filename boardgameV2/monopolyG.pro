QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    action.cpp \
    addhomeicon.cpp \
    bank.cpp \
    bhutan.cpp \
    bonus.cpp \
    brazil.cpp \
    buyornot.cpp \
    chance.cpp \
    china.cpp \
    dice.cpp \
    england.cpp \
    france.cpp \
    japan.cpp \
    korea.cpp \
    main.cpp \
    main2.cpp \
    main3.cpp \
    mainwindow.cpp \
    myanmar.cpp \
    space.cpp \
    supertax.cpp \
    swis.cpp \
    taiwan.cpp \
    tax.cpp \
    usa.cpp \
    vietnam.cpp \
    wait.cpp \
    win.cpp

HEADERS += \
    action.h \
    addhomeicon.h \
    bank.h \
    bhutan.h \
    bonus.h \
    brazil.h \
    buyornot.h \
    chance.h \
    china.h \
    dice.h \
    england.h \
    france.h \
    japan.h \
    korea.h \
    main2.h \
    main3.h \
    mainwindow.h \
    myanmar.h \
    space.h \
    supertax.h \
    swis.h \
    taiwan.h \
    tax.h \
    usa.h \
    vietnam.h \
    wait.h \
    win.h

FORMS += \
    bhutan.ui \
    bonus.ui \
    brazil.ui \
    buyornot.ui \
    chance.ui \
    china.ui \
    england.ui \
    france.ui \
    japan.ui \
    korea.ui \
    main2.ui \
    main3.ui \
    mainwindow.ui \
    myanmar.ui \
    space.ui \
    supertax.ui \
    swis.ui \
    taiwan.ui \
    tax.ui \
    usa.ui \
    vietnam.ui \
    wait.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

DISTFILES +=

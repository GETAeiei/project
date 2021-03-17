QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dice.cpp \
    main.cpp \
    main3.cpp \
    mainwindow.cpp \
    space01.cpp \
    space02.cpp \
    space03.cpp \
    space04.cpp \
    space05.cpp \
    space06.cpp \
    space07.cpp \
    space08.cpp \
    space09.cpp \
    space10.cpp \
    space11.cpp \
    space12.cpp \
    space13.cpp \
    space14.cpp \
    space15.cpp \
    space16.cpp \
    space17.cpp \
    space18.cpp \
    space19.cpp \
    space20.cpp \
    space21.cpp \
    space22.cpp \
    space23.cpp \
    win.cpp \
    winwin.cpp \
    winwin2.cpp

HEADERS += \
    dice.h \
    main3.h \
    mainwindow.h \
    space01.h \
    space02.h \
    space03.h \
    space04.h \
    space05.h \
    space06.h \
    space07.h \
    space08.h \
    space09.h \
    space10.h \
    space11.h \
    space12.h \
    space13.h \
    space14.h \
    space15.h \
    space16.h \
    space17.h \
    space18.h \
    space19.h \
    space20.h \
    space21.h \
    space22.h \
    space23.h \
    win.h \
    winwin.h \
    winwin2.h

FORMS += \
    main3.ui \
    mainwindow.ui \
    space01.ui \
    space02.ui \
    space03.ui \
    space04.ui \
    space05.ui \
    space06.ui \
    space07.ui \
    space08.ui \
    space09.ui \
    space10.ui \
    space11.ui \
    space12.ui \
    space13.ui \
    space14.ui \
    space15.ui \
    space16.ui \
    space17.ui \
    space18.ui \
    space19.ui \
    space20.ui \
    space21.ui \
    space22.ui \
    space23.ui \
    winwin.ui \
    winwin2.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

DISTFILES +=

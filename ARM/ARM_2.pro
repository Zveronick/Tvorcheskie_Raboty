QT       += core gui
QT += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

QMAKE_CLEAN += *.o
QMAKE_CLEAN += moc_*

SOURCES += \
    main.cpp \
    firstwindow.cpp \
    secondwindow.cpp

HEADERS += \
    filework.h \
    firstwindow.h \
    hash.h \
    secondwindow.h

FORMS += \
    firstwindow.ui \
    secondwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../../../../qtData/clientdat.bin \
    ../../../../../qtData/userdat.bin \
    ../../../AppData/Roaming/qtData/clientdat.bin \
    ../../../AppData/Roaming/qtData/userdat.bin \
    data/clientdat.bin \
    data/userdat.bin

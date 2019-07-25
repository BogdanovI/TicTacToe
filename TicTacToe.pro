TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        src/gamecursor.cpp \
        src/gamefield.cpp \
        src/main.cpp \

INCLUDEPATH += \
    include/

HEADERS += \ \
    include/gamecursor.h \
    include/gamefield.h


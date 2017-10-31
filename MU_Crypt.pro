TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    invalidsaltexception.cpp \
    timesaltgeneration.cpp \
    shadriver.cpp

HEADERS += \
    crypticalgorithm.h \
    invalidsaltexception.h \
    salt.h \
    timesaltgeneration.h \
    shadriver.h

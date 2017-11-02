TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    invalidsaltexception.cpp \
    timesaltgeneration.cpp \
    shadriver.cpp \
    filewriter.cpp \
    state.cpp \
    filereader.cpp \
    encrypter.cpp \
    aesalgorithm.cpp \
    encryptedfilestate.cpp \
    parser.cpp \
    decrypter.cpp \
    dispatcher.cpp

HEADERS += \
    crypticalgorithm.h \
    invalidsaltexception.h \
    salt.h \
    timesaltgeneration.h \
    shadriver.h \
    filewriter.h \
    state.h \
    filereader.h \
    encrypter.h \
    aesalgorithm.h \
    encryptedfilestate.h \
    parser.h \
    decrypter.h \
    dispatcher.h

LIBS    += -lssl
LIBS    += -lcrypto

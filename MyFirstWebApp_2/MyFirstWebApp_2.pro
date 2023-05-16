QT  += core
QT  -= gui
QT  += network

TARGET = MyFirstWebApp_2

CONFIG   += console

TEMPLATE = app

SOURCES += src/main.cpp \
    src\helloworldcontroller.cpp

HEADERS += \
    src/helloworldcontroller.h

OTHER_FILES += etc\webapp1.ini

include(C:\MyFirstWebApp_2\QtWebApp\httpserver\httpserver.pri)

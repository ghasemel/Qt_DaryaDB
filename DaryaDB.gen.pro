#################################################################################################
## File created by QxEntityEditor 1.2.2 (2017/09/29 00:34) : please, do NOT modify this file ! ##
#################################################################################################

include(E:/Cpp/Qt/QxOrm_1.4.4/QxOrm/QxOrm.pri)

TEMPLATE = lib
CONFIG += dll
DEFINES += _BUILDING_DARYADB
INCLUDEPATH += E:/Cpp/Qt/QxOrm_1.4.4/QxOrm/include
DESTDIR = $$PWD/bin/

CONFIG(debug, debug|release) {
TARGET = DaryaDBd
} else {
TARGET = DaryaDB
} # CONFIG(debug, debug|release)

LIBS += -L"E:/Cpp/Qt/QxOrm_1.4.4/QxOrm/lib"

CONFIG(debug, debug|release) {
LIBS += -l"QxOrmd"
} else {
LIBS += -l"QxOrm"
} # CONFIG(debug, debug|release)

include($$PWD/DaryaDB.gen.pri)

!contains(DEFINES, _QX_UNITY_BUILD) {
SOURCES += $$PWD/src/DaryaDB_main.gen.cpp
} # !contains(DEFINES, _QX_UNITY_BUILD)

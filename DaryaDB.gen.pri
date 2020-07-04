#################################################################################################
## File created by QxEntityEditor 1.2.2 (2017/09/29 00:34) : please, do NOT modify this file ! ##
#################################################################################################

!contains(DEFINES, _QX_NO_PRECOMPILED_HEADER) {
PRECOMPILED_HEADER += $$PWD/include/DaryaDB_precompiled_header.gen.h
} # !contains(DEFINES, _QX_NO_PRECOMPILED_HEADER)

HEADERS += $$PWD/include/DaryaDB_precompiled_header.gen.h
HEADERS += $$PWD/include/DaryaDB_export.gen.h

HEADERS += $$PWD/include/kol.gen.h
HEADERS += $$PWD/include/moin.gen.h
HEADERS += $$PWD/include/taf.gen.h
HEADERS += $$PWD/include/v_kol_moin.gen.h

HEADERS += $$PWD/custom/include/kol.h
HEADERS += $$PWD/custom/include/moin.h
HEADERS += $$PWD/custom/include/taf.h
HEADERS += $$PWD/custom/include/v_kol_moin.h

contains(DEFINES, _QX_UNITY_BUILD) {

SOURCES += $$PWD/src/DaryaDB_all.gen.cpp

} else {

SOURCES += $$PWD/src/kol.gen.cpp
SOURCES += $$PWD/src/moin.gen.cpp
SOURCES += $$PWD/src/taf.gen.cpp
SOURCES += $$PWD/src/v_kol_moin.gen.cpp

SOURCES += $$PWD/custom/src/kol.cpp
SOURCES += $$PWD/custom/src/moin.cpp
SOURCES += $$PWD/custom/src/taf.cpp
SOURCES += $$PWD/custom/src/v_kol_moin.cpp

} # contains(DEFINES, _QX_UNITY_BUILD)

include($$PWD/custom/DaryaDB.pri)

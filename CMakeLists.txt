#################################################################################################
## File created by QxEntityEditor 1.2.2 (2017/09/29 00:34) : please, do NOT modify this file ! ##
#################################################################################################

cmake_minimum_required(VERSION 3.1)

project(DaryaDB LANGUAGES CXX)

if(NOT TARGET QxOrm)
   add_subdirectory("E:/Cpp/Qt/QxOrm_1.4.4/QxOrm/" ./QxOrm)
endif() # NOT TARGET QxOrm

include("E:/Cpp/Qt/QxOrm_1.4.4/QxOrm/QxOrm.cmake")

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_DEBUG_POSTFIX "d")

set(DARYADB_HEADERS
    ./include/DaryaDB_precompiled_header.gen.h
    ./include/DaryaDB_export.gen.h
    ./include/kol.gen.h
    ./include/moin.gen.h
    ./include/taf.gen.h
    ./include/v_kol_moin.gen.h
    ./custom/include/kol.h
    ./custom/include/moin.h
    ./custom/include/taf.h
    ./custom/include/v_kol_moin.h
   )

if(_QX_UNITY_BUILD)

   set(DARYADB_SRCS ./src/DaryaDB_all.gen.cpp)

else() # _QX_UNITY_BUILD

   set(DARYADB_SRCS
       ./src/kol.gen.cpp
       ./src/moin.gen.cpp
       ./src/taf.gen.cpp
       ./src/v_kol_moin.gen.cpp
       ./custom/src/kol.cpp
       ./custom/src/moin.cpp
       ./custom/src/taf.cpp
       ./custom/src/v_kol_moin.cpp
       ./src/DaryaDB_main.gen.cpp
      )

endif() # _QX_UNITY_BUILD

add_library(DaryaDB SHARED ${DARYADB_SRCS} ${DARYADB_HEADERS})

target_compile_definitions(DaryaDB PRIVATE -D_BUILDING_DARYADB)

target_link_libraries(DaryaDB ${QX_LIBRARIES} QxOrm)

set_target_properties(DaryaDB PROPERTIES
                      ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      LIBRARY_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      LIBRARY_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      ARCHIVE_OUTPUT_DIRECTORY_MINSIZEREL "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      LIBRARY_OUTPUT_DIRECTORY_MINSIZEREL "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      ARCHIVE_OUTPUT_DIRECTORY_RELWITHDEBINFO "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      LIBRARY_OUTPUT_DIRECTORY_RELWITHDEBINFO "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                     )

qx_auto_source_group("${DARYADB_SRCS};${DARYADB_HEADERS}")

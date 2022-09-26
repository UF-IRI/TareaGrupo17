add_library(libreria example.cpp codigo1.h codigo1.cpp codigo2.h codigo2.cpp codigo3.h codigo3.cpp) 

target_include_directories(libreria PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

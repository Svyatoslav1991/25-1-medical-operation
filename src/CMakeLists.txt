cmake_minimum_required (VERSION 3.8)

project ("25-1-medical-operation")

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable (25-1-medical-operation "main.cpp" ${MY_INCLUDE_DIR}/functions.h  ${MY_INCLUDE_DIR}/point.h "functions.cpp" "point.cpp")

target_include_directories(25-1-medical-operation PUBLIC ${CMAKE_SOURCE_DIR}/include)
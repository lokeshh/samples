cmake_minimum_required(VERSION 3.3)
project(02_templatePlainBox)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp PlainBox.h)
add_executable(02_templatePlainBox ${SOURCE_FILES} )
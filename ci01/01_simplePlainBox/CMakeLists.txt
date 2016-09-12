cmake_minimum_required(VERSION 3.3)
project(01_simplePlainBox)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp PlainBox.cpp)
add_executable(01_simplePlainBox ${SOURCE_FILES})
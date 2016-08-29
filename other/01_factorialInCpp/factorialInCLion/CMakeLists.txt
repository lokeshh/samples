cmake_minimum_required(VERSION 3.5)
project(factorialInCLion)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp factorial.h factorial.cpp)
add_executable(factorialInCLion ${SOURCE_FILES})
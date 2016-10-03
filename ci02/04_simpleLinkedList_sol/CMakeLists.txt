cmake_minimum_required(VERSION 3.3)
project(05_simpleLinkedList_sol)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(05_simpleLinkedList_sol ${SOURCE_FILES})
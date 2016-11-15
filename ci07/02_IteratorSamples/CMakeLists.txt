cmake_minimum_required(VERSION 3.5)
project(02_IteratorSamples)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(02_IteratorSamples ${SOURCE_FILES})
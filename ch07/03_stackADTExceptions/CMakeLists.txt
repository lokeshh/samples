cmake_minimum_required(VERSION 3.5)
project(03_stackADTExceptions)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(HEADER_FILES PrecondViolatedExcep.h LinkedStack.h Node.h StackInterface.h)

set(SOURCE_FILES main.cpp PrecondViolatedExcep.cpp)
add_executable(03_stackADTExceptions ${SOURCE_FILES} ${HEADER_FILES})
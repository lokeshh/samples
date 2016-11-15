cmake_minimum_required(VERSION 3.5)
project(01_LinkedListIterator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp PrecondViolatedExcep.cpp)
set(HEADER_FILES LinkedList.h LinkedIterator.h ListInterface.h Node.h PrecondViolatedExcep.h)
add_executable(01_LinkedListIterator ${SOURCE_FILES} ${HEADER_FILES})
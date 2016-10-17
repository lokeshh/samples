cmake_minimum_required(VERSION 3.5)
project(01_smartLinkedList)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES CMakeLists.txt LinkedList.h int04-linkedList-driver.cpp ListInterface.h Node.h PrecondViolatedExcep.cpp PrecondViolatedExcep.h)
add_executable(01_smartLinkedList ${SOURCE_FILES})
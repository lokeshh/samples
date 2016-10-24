cmake_minimum_required(VERSION 3.5)
project(01_variousSorts)

## Check for Windows ##
if (WIN32) # true if windows (32 and 64 bit)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++0x")
else ()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif ()

#set(SOURCE_FILES main.cpp)
#add_executable(01_variousSorts ${SOURCE_FILES})

add_executable(selection_Sort selectionSort.cpp)
add_executable(insertion_Sort insertionSort.cpp)
add_executable(merge_Sort mergesort.cpp)
add_executable(quick_Sort quicksort.cpp)
add_executable(bubble_Sort bubbleSort.cpp)

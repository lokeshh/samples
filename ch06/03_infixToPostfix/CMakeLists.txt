cmake_minimum_required(VERSION 3.4)
project(03_expressionEvaluationStacks)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp infixToPostfix.cpp)
add_executable(03_expressionEvaluationStacks ${SOURCE_FILES})
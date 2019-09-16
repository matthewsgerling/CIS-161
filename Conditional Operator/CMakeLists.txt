cmake_minimum_required(VERSION 3.14)
project(Conditional_Operator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Conditional_Operator
        ConditionalOperator.cpp
        ConditionalOperator.h)

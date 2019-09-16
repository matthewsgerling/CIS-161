cmake_minimum_required(VERSION 3.14)
project(IfAssignment)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(IfAssignment
        IfAssignmentGerling.cpp
        IfAssignmentGerling.h)

cmake_minimum_required(VERSION 3.22)
project(code)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(code
        src/IntStack/int_stack.cpp
        src/IntStack/int_stack.h
        src/IntStack/main.cpp
        )

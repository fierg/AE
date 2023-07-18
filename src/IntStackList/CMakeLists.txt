cmake_minimum_required(VERSION 3.22)
project(build)

set(CMAKE_CXX_STANDARD 14)

add_executable(run
        int_stack_list.cpp
        int_stack.h
        main.cpp
        )

cmake_minimum_required(VERSION 3.22)
project(build)

set(CMAKE_CXX_STANDARD 14)


add_executable(run
        dictionary.cpp
        dictionary.h
        main.cpp
        )

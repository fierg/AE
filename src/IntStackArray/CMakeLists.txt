cmake_minimum_required(VERSION 3.22)
project(build)
function(message)
    list(GET ARGV 0 MessageType)
    if(MessageType STREQUAL FATAL_ERROR OR
            MessageType STREQUAL SEND_ERROR OR
            MessageType STREQUAL WARNING OR
            MessageType STREQUAL AUTHOR_WARNING)
        list(REMOVE_AT ARGV 0)
        _message(${MessageType} "${ARGV}")
    endif()
endfunction()
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_MESSAGE_LOG_LEVEL "WARNING")
set_property(GLOBAL PROPERTY RULE_MESSAGES OFF)

add_executable(run
        int_stack.cpp
        int_stack.h
        main.cpp
        )

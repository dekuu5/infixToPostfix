cmake_minimum_required(VERSION 3.23)
project(myproject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(myproject
        header.h
        infix_to_postfix.cpp
        main.cpp
        stack.cpp
        postfix_calc.cpp)

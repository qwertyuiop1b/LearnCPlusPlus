cmake_minimum_required(VERSION 3.25)
project(smart_pointer)

set(CMAKE_CXX_STANDARD 14)

add_executable(smart_pointer
        main.cpp Point.h Point.cpp)

cmake_minimum_required(VERSION 3.8)
project(ex09)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Logger.cpp Logger.hpp)
add_executable(ex09 ${SOURCE_FILES})
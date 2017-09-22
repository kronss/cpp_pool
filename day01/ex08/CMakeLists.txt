cmake_minimum_required(VERSION 3.7)
project(ex08)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Human.cpp Human.hpp)
add_executable(ex08 ${SOURCE_FILES})
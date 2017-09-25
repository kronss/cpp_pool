cmake_minimum_required(VERSION 3.8)
project(ex01)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Fixed.class.cpp Fixed.class.hpp)
add_executable(ex01 ${SOURCE_FILES})
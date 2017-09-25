cmake_minimum_required(VERSION 3.8)
project(ex02)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Fixed.class.hpp Fixed.class.cpp)
add_executable(ex02 ${SOURCE_FILES})
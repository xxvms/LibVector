cmake_minimum_required(VERSION 3.7)
project(LibVector)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Book.cpp Book.h Library.cpp Library.h User.cpp User.h)
add_executable(LibVector ${SOURCE_FILES})
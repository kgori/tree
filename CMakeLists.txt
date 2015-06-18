cmake_minimum_required(VERSION 3.2)
project(tree)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

set(SOURCE_FILES main.cpp)
add_executable(tree ${SOURCE_FILES} node.cpp node.h)
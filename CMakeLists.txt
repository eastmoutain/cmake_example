cmake_minimum_required(VERSION 3.8)

project(test)

set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_VERBOSE_MAKEFILE on)

set(CMAKE_C_COMPILER "gcc") #
set(CMAKE_CXX_COMPILER "g++")

add_definitions(-DXXX)

set(CMAKE_C_FLAGS "-O2 -Wall")

set(CMAKE_CXX_FLAGS "-O2 -Wall")

message("cflags: " ${CMAKE_C_FLAGS})
message("cxxflags: " ${CMAKE_CXX_FLAGS})

add_subdirectory(lib)
add_subdirectory(src)

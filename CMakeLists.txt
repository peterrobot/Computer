cmake_minimum_required(VERSION 3.8)

########## Project Name ##########

project(computer)

########## Message some information #############

message(STATUS "CMake version: ${CMAKE_VERSION}")

########## Set some variables ##########

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED Ture)

########## Subdirectories ##########

add_subdirectory(Computer)
cmake_minimum_required(VERSION 3.10)

project(Common)

add_library(common STATIC common.cpp)
target_include_directories(common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

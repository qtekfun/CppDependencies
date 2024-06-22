cmake_minimum_required(VERSION 3.10)

project(Executable2)

add_executable(exe2 main.cpp)
target_link_libraries(exe2 common)
target_include_directories(exe2 PUBLIC ../common)

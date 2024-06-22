cmake_minimum_required(VERSION 3.10)

project(Executable1)

add_executable(exe1 main.cpp)
target_link_libraries(exe1 common)
target_include_directories(exe1 PUBLIC ../common)

cmake_minimum_required(VERSION 3.10.2)

project(OOP)

include_directories(header src)

add_executable(khangdc1 main.cpp)

target_include_directories(khangdc1 PUBLIC header)

target_link_libraries(khangdc1 header)

add_subdirectory(header)
cmake_minimum_required(VERSION 3.10.2)

project(cplusplus)

add_executable(khangdc1 main.cpp)

add_subdirectory(calc)

target_include_directories(khangdc1 PUBLIC calc)

target_link_libraries(khangdc1 calc)
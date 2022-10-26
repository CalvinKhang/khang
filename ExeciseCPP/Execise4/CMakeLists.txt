cmake_minimum_required(VERSION 3.10.2)

project(khangdc1)

include_directories(template)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug) 


add_executable(khangdc1 main.cpp)

target_include_directories(khangdc1 PUBLIC temp01)

target_link_libraries(khangdc1 temp01)

add_subdirectory(template)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests gtest.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} pthread)
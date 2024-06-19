cmake_minimum_required(VERSION 3.10)
project(CompositeExample)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(GTest REQUIRED PATHS /usr/src/gtest)
include_directories(${GTEST_INCLUDE_DIRS})

add_library(fun SHARED fun.cpp)

add_executable(funExample fun.cpp)
target_link_libraries(funExample PRIVATE fun)

enable_testing()
add_executable(funExampleTests test1.cpp)
target_link_libraries(funExampleTests fun)
add_test(NAME funExampleTests COMMAND funExampleTests)

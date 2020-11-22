cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(facade)

# Library.
add_library(computer_components memory.cc disk.cc cpu.cc computer.cc)

# Binary
add_executable(main main.cc)
target_link_libraries(main computer_components)

# Test.
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(tests memory_test.cc disk_test.cc cpu_test.cc computer_test.cc)
target_link_libraries(tests GTest::GTest GTest::Main computer_components)

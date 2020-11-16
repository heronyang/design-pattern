cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(composite)

# Library.
add_library(employee engineer.cc manager.cc)

# Binary
add_executable(main main.cc)
target_link_libraries(main employee)

# Test.
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(tests engineer_test.cc manager_test.cc)
target_link_libraries(tests GTest::GTest GTest::Main employee)

cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(singleton)

# Library.
add_library(config config.cc)

# Build executable.
add_executable(main main.cc)
target_link_libraries(main config)

# Test.
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(tests config_test.cc)
target_link_libraries(tests GTest::GTest GTest::Main config)
gtest_discover_tests(tests)

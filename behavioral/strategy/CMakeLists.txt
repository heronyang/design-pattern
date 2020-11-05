cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(strategy)

# Library.
add_library(cache memory_cache.cc disk_cache.cc)

# Build executable.
add_executable(strategy main.cc)
target_link_libraries(strategy cache)

# Test.
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(tests memory_cache_test.cc disk_cache_test.cc)
target_link_libraries(tests GTest::GTest GTest::Main cache)
gtest_discover_tests(tests)

cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(state)

# Library
add_library(process process.cc)
add_library(process_state process_state.cc running_process_state.cc
  stopped_process_state.cc paused_process_state.cc)

# Binary
add_executable(state main.cc)
target_link_libraries(state process process_state)

# Test
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(tests process_test.cc process_state_test.cc
  running_process_state_test.cc stopped_process_state_test.cc
  paused_process_state_test.cc)
target_link_libraries(tests GTest::GTest GTest::Main process process_state)
gtest_discover_tests(tests)

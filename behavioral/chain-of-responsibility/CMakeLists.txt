cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(ChainOfResponsibility)

# Library
add_library(logger logger.cc console_logger.cc file_logger.cc email_logger.cc)

# Binary
add_executable(main main.cc)
target_link_libraries(main logger)

# Test
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(tests console_logger_test.cc file_logger_test.cc
  email_logger_test.cc)
target_link_libraries(tests GTest::GTest GTest::Main logger)
gtest_discover_tests(tests)

cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(prototype)

# Library.
add_library(resume resume.cc)
add_library(letter letter.cc)

# Build executable.
set(SOURCES main.cc)
add_executable(prototype ${SOURCES})
target_link_libraries(prototype resume letter)

# Test.
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(tests resume_test.cc letter_test.cc)
target_link_libraries(tests GTest::GTest GTest::Main resume letter)
gtest_discover_tests(tests)

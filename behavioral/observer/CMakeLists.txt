cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(Observer)

# Library
add_library(course_website course_website.cc)
add_library(student student.cc)

# Binary
add_executable(observer main.cc)
target_link_libraries(observer course_website student)

# Test
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(tests course_website_test.cc student_test.cc)
target_link_libraries(tests GTest::GTest GTest::Main course_website student)
gtest_discover_tests(tests)

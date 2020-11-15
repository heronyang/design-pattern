cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(decorator)

# Library.
add_library(print photo.cc decorated_print.cc framed_print.cc laminated_print.cc)

# Binary
add_executable(main main.cc)
target_link_libraries(main print)

# Test.
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(tests photo_test.cc framed_print_test.cc laminated_print_test.cc)
target_link_libraries(tests GTest::GTest GTest::Main print)

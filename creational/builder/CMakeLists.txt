cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(builder)

# Library.
add_library(package package.cc)
add_library(delivery delivery.cc delivery_builder.cc)

# Build executable.
set(SOURCES main.cc package.cc delivery.cc delivery_builder.cc)
add_executable(main ${SOURCES})

# Test.
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(tests package_test.cc delivery_test.cc delivery_builder_test.cc)
target_link_libraries(tests GTest::GTest GTest::Main package delivery)
gtest_discover_tests(tests)

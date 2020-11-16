cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(factory)

# Link libraries.
add_subdirectory(world)
add_subdirectory(vehicle)

# Build executable.
set(SOURCES main.cc world/world.cc vehicle/car.cc vehicle/bike.cc)
add_executable(main ${SOURCES})
target_include_directories(
  main PRIVATE ${PROJECT_SOURCE_DIR}/vehicle ${PROJECT_SOURCE_DIR}/world)

# Test.
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(tests world/world_test.cc vehicle/bike_test.cc vehicle/car_test.cc)
target_link_libraries(tests GTest::GTest GTest::Main vehicle world)
gtest_discover_tests(tests)

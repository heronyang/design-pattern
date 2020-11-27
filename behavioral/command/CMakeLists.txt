cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(Command)

# Library
add_library(command attack_command.cc defense_command.cc)
add_library(game game.cc)

# Binary
add_executable(main main.cc)
target_link_libraries(main command game)

# Test
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(tests attack_command_test.cc defense_command_test.cc game_test.cc)
target_link_libraries(tests GTest::GTest GTest::Main command game)

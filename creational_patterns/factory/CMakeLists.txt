set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
project(Factory)

set(SOURCES main.cc world.cc vehicles/bike.cc vehicles/car.cc)
add_executable(Factory ${SOURCES})
target_include_directories(Factory PRIVATE ${PROJECT_SOURCE_DIR}/vehicles)

cmake_minimum_required(VERSION 3.18)
project(cmake_demo)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(adder)

target_include_directories(${PROJECT_NAME} PRIVATE adder)

target_link_libraries(${PROJECT_NAME} adder)


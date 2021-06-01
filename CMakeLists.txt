cmake_minimum_required(VERSION 3.18)
project(cmake_demo VERSION 1.2)

configure_file(${PROJECT_NAME}.h.in ${PROJECT_NAME}.h)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME}
        PUBLIC ${PROJECT_BINARY_DIR}
)

add_subdirectory(adder)

add_subdirectory(glfw)

target_include_directories(
        ${PROJECT_NAME}
        PUBLIC adder
        PUBLIC glfw/include
)

target_link_directories(
        ${PROJECT_NAME}
        PRIVATE adder
        PRIVATE glfw/src
)

target_link_libraries(${PROJECT_NAME} adder glfw)

#set (GLFW_BUILD_DOCS OFF)

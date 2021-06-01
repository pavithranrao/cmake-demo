cmake_minimum_required(VERSION 3.18)
project(cmake_demo VERSION 1.2)
set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME}
        PUBLIC ${PROJECT_BINARY_DIR}
)

option(USE_ADDER "a simple lib for adding floats" ON)

# adder
if(USE_ADDER)
    add_subdirectory(adder)
    target_include_directories(
            ${PROJECT_NAME}
            PUBLIC adder
    )
    target_link_directories(
            ${PROJECT_NAME}
            PRIVATE adder
    )
    target_link_libraries(${PROJECT_NAME} adder)
endif()

add_subdirectory(glfw)

target_include_directories(
        ${PROJECT_NAME}
        PUBLIC glfw/include
)

target_link_directories(
        ${PROJECT_NAME}
        PRIVATE glfw/src
)

target_link_libraries(${PROJECT_NAME} glfw)

#set (GLFW_BUILD_DOCS OFF)

configure_file(${PROJECT_NAME}.h.in ${PROJECT_NAME}.h)
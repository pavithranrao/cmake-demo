// Learning CMake from the youtube channel
// https://www.youtube.com/watch?v=nlKcXPUJGwA&list=PLalVdRk2RC6o5GHu618ARWh0VO0bFlif4&index=1

#include <iostream>
#include <adder.h>
#include <GLFW/glfw3.h>
#include <cmake_demo.h>


int main(int argc, char* argv[]) {
    std::cout << "Hello, World!" << std::endl;
    std::cout << add(10.5, 20.5) << std::endl;
    std::cout << PROJECT_NAME << " v" << PROJECT_VER_MAJOR << "." << PROJECT_VER_MINOR  << std::endl;

//    GLFWwindow* window;
//    int width, height;
//
//    if( !glfwInit() )
//    {
//        fprintf( stderr, "Failed to initialize GLFW\n" );
//        exit( EXIT_FAILURE );
//    }
//
//    glfwWindowHint(GLFW_DEPTH_BITS, 16);
//    glfwWindowHint(GLFW_TRANSPARENT_FRAMEBUFFER, GLFW_TRUE);
//
//    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
//
//    glfwDestroyWindow(window);

    return 0;
}

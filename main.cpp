#include<iostream>
#include<glad/gl.h>
#include<GLFW/glfw3.h>

int main()
{
    //GLFWの初期化
    glfwInit();

    //GLFWのバージョンを指定
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    
}
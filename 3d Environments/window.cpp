/*
#include<glad/glad.h>
#include<glfw3.h>
#include <stdio.h>
#include <stdlib.h>
#include<iostream>

int main()
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
    int framebufferwidth = 0;
    int framebufferheight = 0;

    GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);

    glfwGetFrameBufferSize(window, &framebufferheight, &framebufferwidth);
    glViewport(0, 0, framebufferheight, framebufferwidth);

    glfwMakeContextCurrent(window);

    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    return 0;
}
*/
#include"libs.h"

void framebuffer_resize_callback(GLFWwindow* window, int fbW, int fbH)
{
    glViewport(0, 0, fbW, fbH);
}

bool loadShaders(GLuint& program)
{
    char infoLog[512];
    GLint success;

    std::string temp = "";
    std::string src = "";
    std::ifstream in_file;

    in_file.open("vertex_core.glsl");

    if (in_file.is_open())
    {
        while (std::getline(in_file, temp))
            src += temp + "\n";
    }
    else
    {
        std::cout << "ERROR::LOADSHADERS::COULD_NOT_LOAD_VERTEX_FILE" << "\n";
    }

    in_file.close();

    GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);

}

int main()
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);
    int framebufferwidth = 0;
    int framebufferheight = 0;

    GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);

    glfwSetFramebufferSizeCallback(window, framebuffer_resize_callback);
    //glfwGetFramebufferSize(window, &framebufferheight, &framebufferwidth);
    //glViewport(0, 0, framebufferheight, framebufferwidth);

    glfwMakeContextCurrent(window);



    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    while(!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
        glClearColor(0.f, 0.f, 0.f, 1.f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

        glfwSwapBuffers(window);
        glFlush();
    }

    GLuint core_program;
    loadShaders(core_program);

    glfwTerminate();
    return 0;
}
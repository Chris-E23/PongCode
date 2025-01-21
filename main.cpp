
#include "glad.h"
#include <GLFW/glfw3.h>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include <iostream>
#include <glm/glm.hpp> 
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "ball.h"
#include "paddle.h"
#include "Shader.h"
void drawSquare(float width, float center, Shader ourShader, unsigned int &VBO, unsigned int &VAO, unsigned int &EBO);
GLFWwindow* preProcessing(){
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    #ifdef __APPLE__
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    #endif

    GLFWwindow* window = glfwCreateWindow(800, 600, "Pong", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }


    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }
  
    glViewport(0, 0, 800, 600);
    return window;
}
int main()
{
    
    GLFWwindow* window = preProcessing();
    paddle Paddle1; 
    paddle Paddle2; 
    ball mainBall; 

  
    Shader ourShader("default.vs", "default.fs");

    while (!glfwWindowShouldClose(window))
    {
       glfwPollEvents();
       glClear(GL_COLOR_BUFFER_BIT);
       glfwSwapBuffers(window);
      Paddle1.drawPaddle();

    }
    glfwTerminate();
    return 0;
}

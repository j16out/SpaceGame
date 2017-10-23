#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <thread>


int main()
{
glfwInit(); //initiallize window program

glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); //the 3 in opengl 3.2
glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2); //the 2 in opengl 3.2
glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); //sets the minimum opengl context version ie opengl3.2

//specify specific requirements for window
glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
GLFWwindow* window = glfwCreateWindow(1200, 900, "OpenGL", nullptr, nullptr); // parameters of window
//GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL", glfwGetPrimaryMonitor(), nullptr); // Fullscreen example
    
    
glfwMakeContextCurrent(window); 

while(!glfwWindowShouldClose(window))
{
    glfwSwapBuffers(window);
    glfwPollEvents();
    
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    glfwSetWindowShouldClose(window, GL_TRUE);
}    
    
    
    
    glfwTerminate(); //clean up all used rescourses
}

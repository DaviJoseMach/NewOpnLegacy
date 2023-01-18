#include <GLFW/glfw3.h>

int main(void)
{
    if (!glfwInit())
        return -1;


    GLFWwindow* window = glfwCreateWindow(800, 800, "triangle", NULL, NULL);

    glfwMakeContextCurrent(window);



    glClearColor(0.0, 0.15, 0.25, 1.0);


    while (!glfwWindowShouldClose(window))
    {
       

        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(1.0, 0.0, 0.0);
        glBegin(GL_TRIANGLES);
        glVertex3f(0.0, 0.5, 0.0);
        glVertex3f(-0.5, -0.5, 0.0);
        glVertex3f(0.5, -0.5, 0.0);
        glEnd();

        glfwSwapBuffers(window);


    }

    glfwTerminate();
    return 0;
}
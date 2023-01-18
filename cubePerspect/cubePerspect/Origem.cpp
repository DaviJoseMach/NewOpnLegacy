
#include <Windows.h>
#include <GLFW/glfw3.h>
#include <gl/GLU.h>
#include <iostream>

int main(void)
{
    const int larg = 800;
    const int alt = 600;


    if (!glfwInit())
        return -1;


    GLFWwindow* window = glfwCreateWindow(larg, alt, "CubeCCCDtr", NULL, NULL);

    glfwMakeContextCurrent(window);



    glClearColor(0.0, 0.15, 0.25, 1.0);
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glLineWidth(4.f);

    void red(int w, int h);
    {
        int w;
        int h;

        int largura, altura;
        glfwGetFramebufferSize(window, &largura, &altura);
        red(largura, altura);

        glViewport(0, w, 0, h);
        float aspect = (float)w / (float)h;


        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluPerspective(45.0, aspect, 0.1, 500);


    };




    while (!glfwWindowShouldClose(window))
    {
     

        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(0.5, 0.5, 0.00);
        glBegin(GL_QUADS);
        glVertex3f(-2.5, -2.5, 0.0);
        glVertex3f(2.5, -2.5, 0.0);
        glVertex3f(2.5, 2.5, 0.0);
        glVertex3f(-2.5, 2.5, 0.0);
        glEnd();

        glfwSwapBuffers(window);


    }

    glfwTerminate();
    return 0;
}
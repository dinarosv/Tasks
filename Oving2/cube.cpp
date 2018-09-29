//
// Created by Dina Rosvoll on 28.08.2018.
//
#include <cstdlib>
#include <GLUT/glut.h>
#include<stdio.h>

// Display callback ------------------------------------------------------------
void drawGLScene()
{
    glBegin(GL_LINE_LOOP);
    glVertex3f(-1.0f, 1.0f, -1.0f);
    glVertex3f(1.0f, 1.0f, -1.0f);
    glVertex3f(1.0f, -1.0f, -1.0f);
    glVertex3f(-1.0f, -1.0f, -1.0f);
    glVertex3f(-1.0f, 1.0f, -1.0f);
    glVertex3f(-1.0f, 1.0f, 1.0f);
    glVertex3f(-1.0f, -1.0f, 1.0f);
    glVertex3f(-1.0f, -1.0f, -1.0f);
    glVertex3f(1.0f, -1.0f, -1.0f);
    glVertex3f(1.0f, -1.0f, 1.0f);
    glVertex3f(-1.0f, -1.0f, 1.0f);
    glVertex3f(-1.0f, 1.0f, 1.0f);
    glVertex3f(1.0f, 1.0f, 1.0f);
    glVertex3f(1.0f, -1.0f, 1.0f);
    glVertex3f(1.0f, 1.0f, 1.0f);
    glVertex3f(1.0f, 1.0f, -1.0f);
    glEnd();


}

void two_one(){
    glTranslatef(-2.0f, -1.0f, -10.0f);
    glRotatef(22.5f, 1.0f, 1.0f, 0.0f);

    drawGLScene();

    glTranslatef(4.0f, 0.0f, 0.0f);
    glutWireCube(2);
}

void two_two_a(){
    glTranslatef(0.0f, -2.0f, -10.0f);
    glRotatef(10.0f, 1.0f, 1.0f, 0.0f);
    glScalef(2.0f, 2.0f, 2.0f);
    glutWireCube(2);
}
void two_two_b(){
    glRotatef(10.0f, 1.0f, 1.0f, 0.0f);
    glScalef(2.0f, 2.0f, 2.0f);
    glTranslatef(0.0f, -2.0f, -10.0f);
    glutWireCube(2);
}
void two_two_c(){
    glScalef(2.0f, 2.0f, 2.0f);
    glRotatef(10.0f, 1.0f, 1.0f, 0.0f);
    glTranslatef(0.0f, -2.0f, -10.0f);
    glutWireCube(2);
}
void two_three(){
    glTranslatef(0.0f, -2.0f, -10.0f);
    gluLookAt(5.0f, 0.0f, 5.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    //gluLookAt(0.0f, 0.0f, 5.0f, 2.0f, 2.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    //gluLookAt(0.0f, 10.0f, 10.0f, 0.0f, 0.0f, 5.0f, 1.0f, 1.0f, 0.0f);
    glutWireCube(2);
}
float a = 0;

void two_four(){
    glTranslatef(0.0f, -1.5f, -10.0f + a);
    glutWireCube(2);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0,1.25,3.0,100.0);
    glViewport(0,0, 500, 500);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glColor3f(1.0f, 0.0f, 1.0f);
    two_four();
    glFlush();
}

// Keyboard callback function ( called on keyboard event handling )
void keyboard(unsigned char key, int x, int y)
{
    if (key == 'q' || key == 'Q')
        exit(EXIT_SUCCESS);
    if (key == 'a') {
        printf("test\n");
        a -= 5.0;
        glutPostRedisplay();
    }
        //gluLookAt(2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
        //glutPostRedisplay();

}


// Main execution  function
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);      // Initialize GLUT
    glutInitWindowSize (500, 300);
    glutCreateWindow("OpenGL example");  // Create a window
    glutDisplayFunc(display);   // Register display callback
    glutKeyboardFunc(keyboard); // Register keyboard callback
    glutMainLoop();             // Enter main event loop

    return (EXIT_SUCCESS);
}


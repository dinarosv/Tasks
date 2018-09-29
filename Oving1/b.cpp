//
// Created by Dina Rosvoll on 28.08.2018.
//
#include <cstdlib>
#include <GLUT/glut.h>

// Display callback ------------------------------------------------------------

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0,1.25,3.0,100.0);
    glViewport(0,0, 500, 500);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glColor3f(1.0f, 0.0f, 0.0f);

    glTranslatef(-15.0f, 0.0f, -40.0f);
    glBegin(GL_POINT);
    glVertex3f(0.0f, 2.0f, 0.0f);
    glVertex3f(1.5f, 1.5f, 0.0f);
    glVertex3f(2.0f, 0.0f, 0.0f);
    glVertex3f(1.5f, -1.5f, 0.0f);
    glVertex3f(0.0f, -2.0f, 0.0f);
    glVertex3f(-1.5f, -1.5f, 0.0f);
    glVertex3f(-2.0f, 0.0f, 0.0f);
    glEnd();

    glTranslatef(7.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex3f(0.0f, 2.0f, 0.0f);
    glVertex3f(1.5f, 1.5f, 0.0f);
    glVertex3f(2.0f, 0.0f, 0.0f);
    glVertex3f(1.5f, -1.5f, 0.0f);
    glVertex3f(0.0f, -2.0f, 0.0f);
    glVertex3f(-1.5f, -1.5f, 0.0f);
    glVertex3f(-2.0f, 0.0f, 0.0f);
    glEnd();

    glTranslatef(7.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_STRIP);
    glVertex3f(0.0f, 2.0f, 0.0f);
    glVertex3f(1.5f, 1.5f, 0.0f);
    glVertex3f(2.0f, 0.0f, 0.0f);
    glVertex3f(1.5f, -1.5f, 0.0f);
    glVertex3f(0.0f, -2.0f, 0.0f);
    glVertex3f(-1.5f, -1.5f, 0.0f);
    glVertex3f(-2.0f, 0.0f, 0.0f);
    glEnd();

    glTranslatef(7.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0f, 2.0f, 0.0f);
    glVertex3f(1.5f, 1.5f, 0.0f);
    glVertex3f(2.0f, 0.0f, 0.0f);
    glVertex3f(1.5f, -1.5f, 0.0f);
    glVertex3f(0.0f, -2.0f, 0.0f);
    glVertex3f(-1.5f, -1.5f, 0.0f);
    glVertex3f(-2.0f, 0.0f, 0.0f);
    glEnd();

    glTranslatef(7.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.0f, 2.0f, 0.0f);
    glVertex3f(1.5f, 1.5f, 0.0f);
    glVertex3f(2.0f, 0.0f, 0.0f);
    glVertex3f(1.5f, -1.5f, 0.0f);
    glVertex3f(0.0f, -2.0f, 0.0f);
    glVertex3f(-1.5f, -1.5f, 0.0f);
    glVertex3f(-2.0f, 0.0f, 0.0f);
    glEnd();

    glTranslatef(-28.0f, -7.0f, 0.0f);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex3f(0.0f, 2.0f, 0.0f);
    glVertex3f(1.5f, 1.5f, 0.0f);
    glVertex3f(2.0f, 0.0f, 0.0f);
    glVertex3f(1.5f, -1.5f, 0.0f);
    glVertex3f(0.0f, -2.0f, 0.0f);
    glVertex3f(-1.5f, -1.5f, 0.0f);
    glVertex3f(-2.0f, 0.0f, 0.0f);
    glEnd();

    glTranslatef(7.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex3f(0.0f, 2.0f, 0.0f);
    glVertex3f(1.5f, 1.5f, 0.0f);
    glVertex3f(2.0f, 0.0f, 0.0f);
    glVertex3f(1.5f, -1.5f, 0.0f);
    glVertex3f(0.0f, -2.0f, 0.0f);
    glVertex3f(-1.5f, -1.5f, 0.0f);
    glVertex3f(-2.0f, 0.0f, 0.0f);
    glEnd();

    glTranslatef(7.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex3f(0.0f, 2.0f, 0.0f);
    glVertex3f(1.5f, 1.5f, 0.0f);
    glVertex3f(2.0f, 0.0f, 0.0f);
    glVertex3f(1.5f, -1.5f, 0.0f);
    glVertex3f(0.0f, -2.0f, 0.0f);
    glVertex3f(-1.5f, -1.5f, 0.0f);
    glVertex3f(-2.0f, 0.0f, 0.0f);
    glEnd();

    glTranslatef(7.0f, 0.0f, 0.0f);
    glBegin(GL_QUAD_STRIP);
    glVertex3f(0.0f, 2.0f, 0.0f);
    glVertex3f(1.5f, 1.5f, 0.0f);
    glVertex3f(2.0f, 0.0f, 0.0f);
    glVertex3f(1.5f, -1.5f, 0.0f);
    glVertex3f(0.0f, -2.0f, 0.0f);
    glVertex3f(-1.5f, -1.5f, 0.0f);
    glVertex3f(-2.0f, 0.0f, 0.0f);
    glEnd();

    glTranslatef(7.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex3f(0.0f, 2.0f, 0.0f);
    glVertex3f(1.5f, 1.5f, 0.0f);
    glVertex3f(2.0f, 0.0f, 0.0f);
    glVertex3f(1.5f, -1.5f, 0.0f);
    glVertex3f(0.0f, -2.0f, 0.0f);
    glVertex3f(-1.5f, -1.5f, 0.0f);
    glVertex3f(-2.0f, 0.0f, 0.0f);
    glEnd();

    glFlush();
}

// Keyboard callback function ( called on keyboard event handling )
void keyboard(unsigned char key, int x, int y)
{
    if (key == 'q' || key == 'Q')
        exit(EXIT_SUCCESS);
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

//
// Created by Dina Rosvoll on 11.09.2018.
//
#include <cstdlib>
#include <GLUT/glut.h>
#include<stdio.h>
float a = 0, b=0, c=0;

void drawCube(float x, float y, float z){

    x = x*2; y = y*2; z= z*2;

    glColor3f(1.0f, 0.5f, 0.0f); //orange
    glBegin(GL_POLYGON);//z=-1 flate
    glVertex3f(x+1.0f, y+1.0f, z-1.0f);
    glVertex3f(x-1.0f, y+1.0f, z-1.0f);
    glVertex3f(x-1.0f, y-1.0f, z-1.0f);
    glVertex3f(x+1.0f, y-1.0f, z-1.0f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f); //hvit
    glBegin(GL_POLYGON);//y=-1 flate
    glVertex3f(x+1.0f, y-1.0f, z+1.0f);
    glVertex3f(x+1.0f, y-1.0f, z-1.0f);
    glVertex3f(x-1.0f, y-1.0f, z-1.0f);
    glVertex3f(x-1.0f, y-1.0f, z+1.0f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);//rød
    glBegin(GL_POLYGON); //x=-1 flate
    glVertex3f(x-1.0f, y+1.0f, z-1.0f);
    glVertex3f(x-1.0f, y-1.0f, z-1.0f);
    glVertex3f(x-1.0f, y-1.0f, z+1.0f);
    glVertex3f(x-1.0f, y+1.0f, z+1.0f);
    glEnd();

    glColor3f(0.0f, 1.0f, 0.0f);//grønn
    glBegin(GL_POLYGON); //x=1 flate
    glVertex3f(x+1.0f, y-1.0f, z+1.0f);
    glVertex3f(x+1.0f, y+1.0f, z+1.0f);
    glVertex3f(x+1.0f, y+1.0f, z-1.0f);
    glVertex3f(x+1.0f, y-1.0f, z-1.0f);
    glEnd();

    glColor3f(1.0f, 1.0f, 0.0f);//gul
    glBegin(GL_POLYGON); //y=1 flate
    glVertex3f(x+1.0f, y+1.0f, z+1.0f);
    glVertex3f(x+1.0f, y+1.0f, z-1.0f);
    glVertex3f(x-1.0f, y+1.0f, z-1.0f);
    glVertex3f(x-1.0f, y+1.0f, z+1.0f);
    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);//blå
    glBegin(GL_POLYGON);//z=1 flate
    glVertex3f(x+1.0f, y+1.0f, z+1.0f);
    glVertex3f(x-1.0f, y+1.0f, z+1.0f);
    glVertex3f(x-1.0f, y-1.0f, z+1.0f);
    glVertex3f(x+1.0f, y-1.0f, z+1.0f);
    glEnd();

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

    glTranslatef(0.0f, -2.0f, -20.0f);
    glRotatef(-10.0f+b, 0,1,0);

    //venstre side kube
    glPushMatrix();
    glRotatef(0.0f+a, 1, 0, 0);
    drawCube(-1.1f, -1.1f, -1.1f);
    drawCube(-1.1f, -1.1f, 0.0f);
    drawCube(-1.1f, -1.1f, 1.1f);
    drawCube(-1.1f, 0.0f, -1.1f);
    drawCube(-1.1f, 0.0f, 0.0f);
    drawCube(-1.1f, 0.0f, 1.1f);
    drawCube(-1.1f, 1.1f, -1.1f);
    drawCube(-1.1f, 1.1f, 0.0f);
    drawCube(-1.1f, 1.1f, 1.1f);
    glPopMatrix();

    //midt
    drawCube(0.0f, -1.1f, -1.1f);
    drawCube(0.0f, -1.1f, 0.0f);
    drawCube(0.0f, -1.1f, 1.1f);
    drawCube(0.0f, 0.0f, -1.1f);
    drawCube(0.0f, 0.0f, 1.1f);
    drawCube(0.0f, 1.1f, -1.1f);
    drawCube(0.0f, 1.1f, 0.0f);
    drawCube(0.0f, 1.1f, 1.1f);


    //høyre side kube
    drawCube(1.1f, -1.1f, -1.1f);
    drawCube(1.1f, -1.1f, 0.0f);
    drawCube(1.1f, -1.1f, 1.1f);
    drawCube(1.1f, 0.0f, -1.1f);
    drawCube(1.1f, 0.0f, 0.0f);
    drawCube(1.1f, 0.0f, 1.1f);
    drawCube(1.1f, 1.1f, -1.1f);
    drawCube(1.1f, 1.1f, 0.0f);
    drawCube(1.1f, 1.1f, 1.1f);


    glFlush();
}

// Keyboard callback function ( called on keyboard event handling )
void keyboard(unsigned char key, int x, int y)
{
    if (key == 'q' || key == 'Q')
        exit(EXIT_SUCCESS);
    if (key == 'a') {
        a -= 5.0;
        glutPostRedisplay();
    }
    if (key == 'b') {
        b -= 5.0;
        glutPostRedisplay();

    }

}
// Main execution  function
int main(int argc, char *argv[])
{


    glutInit(&argc, argv);      // Initialize GLUT
    glutInitWindowSize (500, 500);
    glutCreateWindow("OpenGL Rubiks");  // Create a window
    glutDisplayFunc(display);   // Register display callback
    glutKeyboardFunc(keyboard); // Register keyboard callback
    glutMainLoop();             // Enter main event loop

    return (EXIT_SUCCESS);
}

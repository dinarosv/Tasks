#include <cstdlib>
#include <GLUT/glut.h>

// Display callback ------------------------------------------------------------

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(1.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLES);
    glVertex3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-1.0f, -1.0f, 0.0f);
    glVertex3f( 1.0f, -1.0f, 0.0f);
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
    glutCreateWindow("OpenGL oppgave a");  // Create a window
    glutDisplayFunc(display);   // Register display callback
    glutKeyboardFunc(keyboard); // Register keyboard callback
    glutMainLoop();             // Enter main event loop

    return (EXIT_SUCCESS);
}
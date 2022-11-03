#include<Windows.h>
#include<GL\glut.h>
float p = -10;
void init()
{
    // Set display window color to as glClearColor(R,G,B,Alpha)
    glClearColor(1, 1, 1, 1);
    // Set projection parameters.
    glMatrixMode(GL_PROJECTION);
    // Set 2D Transformation as gluOrtho2D(Min Width, Max Width, Min Height, Max Height)
    gluOrtho2D(0.0, 150, 0.0, 150);
}
void home()
{
 
    if(p<=100)
      p= p+0.005;
      else
        p =-10;
 
    glutPostRedisplay();
    glClear(GL_COLOR_BUFFER_BIT);
    // Set line segment color as glColor3f(R,G,B)
    glColor3f(0, 0.8, 0.5);
    glBegin(GL_POLYGON);
    glVertex2i(p+53, p+42);
    glVertex2i(p+56, p+34);
    glVertex2i(p+59, p+42);
    glVertex2i(p+67, p+45);
    glVertex2i(p+59, p+48);
    glVertex2i(p+56, p+56);
    glVertex2i(p+53,p+48);
    glVertex2i(p+45, p+45);
    glEnd();
 
 
    glColor3f(0, 0.4, 0.4);
    glBegin(GL_POLYGON);
    glVertex2i(p+75,42);
    glVertex2i(p+78,34);
    glVertex2i(p+81,42);
    glVertex2i(p+89,45);
    glVertex2i(p+81,48);
    glVertex2i(p+78,56);
    glVertex2i(p+75,48);
    glVertex2i(p+67, 45);
    glEnd();
 
   glColor3f( 1 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(63,p+53);
   glVertex2i(67,p+45);
   glVertex2i(70,p+53);
   glVertex2i(79,p+56);
   glVertex2i(70,p+59);
   glVertex2i(67,p+67);
   glVertex2i(64,p+59);
   glVertex2i(56,p+56);
   glEnd();
 
   glColor3f( 1 ,0, 1);
   glBegin(GL_POLYGON);
   glVertex2i(p+63,p+31);
   glVertex2i(p+67,p+23);
   glVertex2i(p+70,p+31);
   glVertex2i(p+79,p+34);
   glVertex2i(p+70,p+37);
   glVertex2i(p+67,p+45);
   glVertex2i(p+64,p+37);
   glVertex2i(p+56,p+34);
   glEnd();
 
 
 
 
    // Process all OpenGL routine s as quickly as possible
    glFlush();
}
int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(800, 600);
    glutCreateWindow("4 Star in OpenGL ");
    init();
    // Send graphics to display window
    glutDisplayFunc(home);
    // Display everything and wait.
    glutMainLoop();
}
 

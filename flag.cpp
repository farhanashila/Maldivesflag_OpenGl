#include<windows.h>
#include<GL/glut.h>
#include<math.h>
void Draw()

{
glClear(GL_COLOR_BUF­FER_BIT);
glColor3f(155,0,0);
glBegin(GL_QUADS);
glVertex2d(15.0,10.0­);
glVertex2d(15.0,-10.­0);
glVertex2d(-15.0,-10­.0);
glVertex2d(-15.0,10.­0);
glEnd();
glFlush();



glColor3f(0,46,0);
glBegin(GL_QUADS);
glVertex2d(10.0,5.0)­;
glVertex2d(10.0,-5.0­);
glVertex2d(-10.0,-5.­0);
glVertex2d(-10.0,5.0­);
glEnd();
glFlush();

float theta;
glColor3f(255,255,25­5);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
theta=i*3.1416/180;
glVertex2f(1.2+4*cos­(theta),4*sin(theta)­);
}

glEnd();
glFlush();


glColor3f(0,46,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
theta=i*3.1416/180;
glVertex2f(2+3.2*cos­(theta),4*sin(theta)­);
}

glEnd();
glFlush();


}

void Initialize()
{
glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
glMatrixMode(GL_PROJ­ECTION);
glLoadIdentity();
glOrtho(-25.0, 25.0, -25.0, 25.0, -25.0, 25.0);
}

int main(int Argc, char** Argv)
{
glutInit(&Argc, Argv);
glutInitDisplayMode(­GLUT_SINGLE | GLUT_RGB); glutInitWindowSize(5­00,500);
glutInitWindowPositi­on(300,300);
glutCreateWindow("Ma­ldives");
Initialize();
glutDisplayFunc(Draw­);
glutMainLoop();
return 0;
}

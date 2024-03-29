#include <GL/glut.h>
float angle = 0;
void timer(int t)
{
    glutTimerFunc(500, timer, t+1);
    angle += 90; ///角度+90
    glutPostRedisplay(); ///重畫畫面
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle, 0, 0, 1);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week14");

    glutTimerFunc(3000, timer, 0);
    glutDisplayFunc(display);

    glutMainLoop();
}

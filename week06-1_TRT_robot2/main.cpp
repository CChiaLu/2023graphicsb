#include <GL/glut.h>
float angle = 0;
void myCube() ///改函式
{
    glPushMatrix();
        glScalef(0.5, 0.2, 0.2); ///調大小
        glutSolidCube(1); ///正方塊
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glutSolidSphere(0.01, 30, 30); ///小球做中心點參考

    glPushMatrix();
        glTranslatef(0.3, 0.5, 0); ///讓茶壺掛在一個點轉
        glRotatef(angle, 0, 0, 1);
        glTranslatef(0.45, 0, 0);
        glutSolidTeapot(0.3);
    glPopMatrix();

    glutSwapBuffers();
    angle++;
}
int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week05");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}

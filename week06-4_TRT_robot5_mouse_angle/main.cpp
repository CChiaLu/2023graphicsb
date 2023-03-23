#include <GL/glut.h>
float angle = 0;
void myCube()
{
    glPushMatrix();
        glScalef(1, 0.3, 0.3); ///調大小
        glutSolidCube(0.5); ///正方塊
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glutSolidSphere(0.01, 30, 30); ///小球做中心點參考

    glPushMatrix(); ///右邊的
        glTranslatef(0.25, 0, 0); ///讓物體掛在這個點
        glRotatef(angle, 0, 0, 1);
        glTranslatef(0.25, 0, 0);
        myCube(); ///上手臂
        glPushMatrix();
            glTranslatef(0.25, 0, 0);
            glRotatef(angle, 0, 0, 1);
            glTranslatef(0.25, 0, 0);
            myCube(); ///下手肘
        glPopMatrix();

    glPopMatrix();

    glPushMatrix(); ///左邊的
        glTranslatef(-0.25, 0, 0);
        glRotatef(-angle, 0, 0, 1);
        glTranslatef(-0.25, 0, 0);
        myCube(); ///上手臂
        glPushMatrix();
            glTranslatef(-0.25, 0, 0);
            glRotatef(-angle, 0, 0, 1);
            glTranslatef(-0.25, 0, 0);
            myCube(); ///下手肘
        glPopMatrix();

    glPopMatrix();

    glutSwapBuffers();
    /// angle++; ///先註解掉
}
void motion(int x, int y) ///新加的 mouse motion
{
    angle = x;
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week05");

    glutMotionFunc(motion); ///新加的 mouse motion
    glutDisplayFunc(display);
    glutIdleFunc(display);

    glutMainLoop();
}

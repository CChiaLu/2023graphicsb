#include <GL/glut.h>
float X=0, Y=0, Z=0; ///�ϥ�global�ܼ�
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///�M�I��
    glPushMatrix();
        glTranslatef( X, Y, Z); ///�ӵ�x,y,z�Ӳ���
        glutSolidTeapot( 0.3 );
    glPopMatrix();

    glutSwapBuffers();
}
void mouse( int button, int state, int x, int y) /// mouse()
{       /// �����k��    ���U��} �px �py   0...300
    X =  (x-150)/150.0; /// ��@�b�B���@�b
    Y = -(y-150)/150.0; /// ��@�b�B���@�b�By�ܭt��
}
int main(int argc,char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03");

    glutMouseFunc(mouse); ///�]�w�nmouse�[��
    glutDisplayFunc(display);

    glutMainLoop();
}

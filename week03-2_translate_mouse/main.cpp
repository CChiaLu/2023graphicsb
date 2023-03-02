#include <GL/glut.h>
float X=0, Y=0, Z=0; ///使用global變數
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///清背景
    glPushMatrix();
        glTranslatef( X, Y, Z); ///照著x,y,z來移動
        glutSolidTeapot( 0.3 );
    glPopMatrix();

    glutSwapBuffers();
}
void mouse( int button, int state, int x, int y) /// mouse()
{       /// 左中右鍵    按下放開 小x 小y   0...300
    X =  (x-150)/150.0; /// 減一半、除一半
    Y = -(y-150)/150.0; /// 減一半、除一半、y變負的
}
int main(int argc,char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03");

    glutMouseFunc(mouse); ///設定好mouse涵式
    glutDisplayFunc(display);

    glutMainLoop();
}

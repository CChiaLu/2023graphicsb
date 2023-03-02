#include <GL/glut.h>
#include <stdio.h>
float X=0, Y=0, Z=0;
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_LINE_LOOP);
      glVertex2f(-0.23, 0.01);
  glVertex2f(-0.51, 0.29);
  glVertex2f(-0.57, 0.49);


    glEnd();
    glutSwapBuffers();
}
void mouse( int button, int state, int x, int y)
{       /// 左中右鍵    按下放開 小x 小y   0...300
    X =  (x-150)/150.0; /// 減一半、除一半
    Y = -(y-150)/150.0; /// 減一半、除一半、y變負的
    if(state==GLUT_DOWN) printf("  glVertex2f(%.2f, %.2f);\n", X, Y);
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

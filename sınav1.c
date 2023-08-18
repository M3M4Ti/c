#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>

#define PI 3.14159265358979323846
#define PENCERE_GENISLIK 800
#define PENCERE_YUKSEKLIK 600
#define ANIMASYON_HIZI 0.01

float dunyaninYorungeYaricapi = 200.0;
float ayinYorungeYaricapi = 80.0;
float dunyaAci = 0.0;
float ayAci = 0.0;

void init()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-PENCERE_GENISLIK / 2, PENCERE_GENISLIK / 2, -PENCERE_YUKSEKLIK / 2, PENCERE_YUKSEKLIK / 2);
}

void cemberCiz(float yaricap)
{
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++)
    {
        float aci = 2 * PI * i / 360;
        float x = yaricap * cos(aci);
        float y = yaricap * sin(aci);
        glVertex2f(x, y);
    }
    glEnd();
}

void sahneyiCiz()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 1.0, 1.0);

    // Dünya'nın yörünge çizgisi
    glPushMatrix();
    cemberCiz(dunyaninYorungeYaricapi);
    glPopMatrix();

    // Dünya'yı çiz
    glPushMatrix();
    glRotatef(dunyaAci, 0.0, 0.0, 1.0);
    glTranslatef(dunyaninYorungeYaricapi, 0.0, 0.0);
    glutWireSphere(20.0, 20, 20);
    glPopMatrix();

    // Ay'ın yörünge çizgisi
    glPushMatrix();
    glRotatef(dunyaAci, 0.0, 0.0, 1.0);
    cemberCiz(ayinYorungeYaricapi);
    glPopMatrix();

    // Ay'ı çiz
    glPushMatrix();
    glRotatef(dunyaAci, 0.0, 0.0, 1.0);
    glTranslatef(ayinYorungeYaricapi, 0.0, 0.0);
    glRotatef(ayAci, 0.0, 0.0, 1.0);
    glutWireSphere(8.0, 10, 10);
    glPopMatrix();

    glutSwapBuffers();
}

void guncelle(int value)
{
    dunyaAci += ANIMASYON_HIZI;
    ayAci += ANIMASYON_HIZI * 12; // Ay'ın daha hızlı dönmesi

    if (dunyaAci > 360)
        dunyaAci -= 360;

    glutPostRedisplay();
    glutTimerFunc(16, guncelle, 0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(PENCERE_GENISLIK, PENCERE_YUKSEKLIK);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Dünya'nın Dönüşü");
    init();
    glutDisplayFunc(sahneyiCiz);
    glutTimerFunc(0, guncelle, 0);
    glutMainLoop();
    return 0;
}

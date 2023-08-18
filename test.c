#include <stdio.h>
#include <graphics.h>

void drawCircle(int x, int y, int radius) {
    int d = 3 - 2 * radius;
    int xPos = 0;
    int yPos = radius;

    while (xPos <= yPos) {
        putpixel(x + xPos, y - yPos, WHITE);
        putpixel(x - xPos, y - yPos, WHITE);
        putpixel(x + xPos, y + yPos, WHITE);
        putpixel(x - xPos, y + yPos, WHITE);
        putpixel(x + yPos, y - xPos, WHITE);
        putpixel(x - yPos, y - xPos, WHITE);
        putpixel(x + yPos, y + xPos, WHITE);
        putpixel(x - yPos, y + xPos, WHITE);

        if (d < 0) {
            d += 4 * xPos + 6;
        } else {
            d += 4 * (xPos - yPos) + 10;
            yPos--;
        }

        xPos++;
    }
}

void drawTriangle(int x, int y, int size) {
    int x1 = x - size / 2;
    int y1 = y + size / 2;
    int x2 = x;
    int y2 = y - size / 2;
    int x3 = x + size / 2;
    int y3 = y + size / 2;

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int centerX = getmaxx() / 2;
    int centerY = getmaxy() / 2;
    int radius = 50;
    int triangleSize = 100;
    int frameDelay = 10;

    while (!kbhit()) {
        cleardevice();

        // Çemberi çiz
        drawCircle(centerX, centerY, radius);

        // Üçgeni çiz
        int triangleY = getmaxy() - frameDelay * (getmaxy() / frameDelay);
        drawTriangle(centerX, triangleY, triangleSize);

        // Çemberin hareketini güncelle
        centerY += frameDelay;

        // Üçgenin hareketini güncelle
        triangleY -= frameDelay;

        if (triangleY + triangleSize / 2 <= 0) {
            triangleY = getmaxy();
        }

        delay(50);
    }

    closegraph();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Unix/Linux sistemlerinde bekleme fonksiyonu için

#define TOP_KAREKTER 'O'
#define SAHNE_GENISLIK 40
#define SAHNE_YUKSEKLIK 20

void temizle_ekran() {
    system("cls"); // Windows sistemlerinde
    // system("clear"); // Linux/Unix  sistemlerinde
}

void bekle(int milliseconds) {
    usleep(milliseconds * 1000);
}

int main() {
    int topX = SAHNE_GENISLIK / 2;
    int topY = SAHNE_YUKSEKLIK / 2;
    int hizX = 1;
    int hizY = 1;

    while (1) {
        temizle_ekran();

        // Topun konumunu güncelle
        topX += hizX;
        topY += hizY;

        // Topun sınırları kontrol et
        if (topX <= 0 || topX >= SAHNE_GENISLIK - 1) {
            hizX *= -1; // Yönü değiştir
        }

        if (topY <= 0 || topY >= SAHNE_YUKSEKLIK - 1) {
            hizY *= -1; // Yönü değiştir
        }

        // Sahneyi çiz
        for (int y = 0; y < SAHNE_YUKSEKLIK; y++) {
            for (int x = 0; x < SAHNE_GENISLIK; x++) {
                if (x == topX && y == topY) {
                    printf("%c", TOP_KAREKTER);
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }

        bekle(500); // 500 milisaniye bekle
    }

    return 0;
}

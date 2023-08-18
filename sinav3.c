#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main() {
    char sayiDizisi[BUFFER_SIZE];
    char karakterDizisi[BUFFER_SIZE];
    int sayiUzunlugu = 0;
    int karakterUzunlugu = 0;

    FILE* seriPort = fopen("COM1", "r");
    if (seriPort == NULL) {
        perror("Seri port açılamadı");
        return 1;
    }

    while (1) {
        char buffer[BUFFER_SIZE];
        memset(buffer, 0, sizeof(buffer));

        if (fgets(buffer, sizeof(buffer), seriPort) == NULL) {
            perror("Veri okunamadı");
            break;
        }

        for (int i = 0; i < strlen(buffer); i++) {
            if (buffer[i] >= '0' && buffer[i] <= '9') {
                sayiDizisi[sayiUzunlugu++] = buffer[i];
            } else {
                karakterDizisi[karakterUzunlugu++] = buffer[i];
            }
        }

        printf("Sayılar: %s\n", sayiDizisi);
        printf("Karakterler: %s\n", karakterDizisi);
    }

    fclose(seriPort);
    return 0;
}

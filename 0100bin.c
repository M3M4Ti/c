#include <stdio.h>

int main() {
    FILE *dosya = fopen("17.txt", "w");
    if (dosya == NULL) {
        printf("Dosya olusturulamadi.");
        return 1;
    }

    for (int i = 0; i <= 100000; i += 17) {
        fprintf(dosya, "%d\n", i);
    }

    fclose(dosya);
    printf("17.txt dosyasi olusturuldu ve sayilar yazildi.\n");

    return 0;
}

#include <stdio.h>

int main() {
    char karakterDizisi[100];
    int aSayisi = 0, ASayisi = 0;
    int i = 0;

    printf("Bir karakter dizisi girin: ");
    fgets(karakterDizisi, sizeof(karakterDizisi), stdin);

    while (karakterDizisi[i] != '\0') {
        if (karakterDizisi[i] == 'a')
            aSayisi++;
        else if (karakterDizisi[i] == 'A')
            ASayisi++;
        i++;
    }

    printf("Girilen karakter dizisinde %d adet 'a' ve %d adet 'A' bulunmaktadir.\n", aSayisi, ASayisi);

    return 0;
}

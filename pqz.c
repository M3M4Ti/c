#include <stdio.h>

void takas_et(int *a, int *b) {
    int gecici = *a;
    *a = *b;
    *b = gecici;
}

int main() {
    int p, q, z;
    printf("p degerini girin: ");
    scanf("%d", &p);
    printf("q degerini girin: ");
    scanf("%d", &q);
    printf("z degerini girin: ");
    scanf("%d", &z);
    if (p < q) {
        takas_et(&p, &q);
    }
    if (p < z) {
        takas_et(&p, &z);
    }
    if (q < z) {
        takas_et(&q, &z);
    }
    printf("Siralanan degerler: %d, %d, %d\n", p, q, z);
}


#include <stdio.h>

void matrismethod(int matris[][3], int* dizi, int satir, int sutun) {
    int index = 0;
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            dizi[index] = matris[i][j];
            index++;
        }
    }
}

int main() {
    int matris[2][3] = {{23,12,24}, {1905, 2002, 2023}};
    int dizi[6];

    matrismethod(matris, dizi, 2, 3);

    printf("Matris: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    printf("\nDizi: \n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", dizi[i]);
    }

    return 0;
}

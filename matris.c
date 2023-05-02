#include <stdio.h>

int main() {
   int a[5][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15} };
   int b[5][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1}, {12, 11, 10}, {15, 14, 13} };
   int c[5][3] = { 0 };

   // Matris çarpımı işlemi
   for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 3; j++) {
         for (int k = 0; k < 5; k++) {
            c[i][j] += a[i][k] * b[k][j];
         }
      }
   }

   // Çarpım sonucunu yazdırma
   printf("AxB = \n");
   for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 3; j++) {
         printf("%d ", c[i][j]);
      }
      printf("\n");
   }

   return 0;
}
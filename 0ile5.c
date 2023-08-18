#include <stdio.h>

int main() {
    int sayi;
    for (sayi = 1; sayi <= 10000; sayi++) {
        if (sayi % 3 == 0 && sayi % 5 != 0) {
            printf("%d\n", sayi);
        }
    }
}

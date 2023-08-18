#include <stdio.h>

int main() {
    int s1 = 0;
    int s2 = 1;
    int s3 = 0;

    printf("Fibonacci Sayilari: \n");
    printf("%d\n", s1);
    printf("%d\n", s2);

    while (s3 <= 10000) {
        s3 = s1 + s2;
        if (s3 <= 10000) {
            printf("%d\n", s3);
        }
        s1 = s2;
        s2 = s3;
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, partLen;

    printf("Bir metin girin: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str) - 1; // fgets, sonuna null karakteri koyduğu için uzunluğu bir azaltın
    partLen = len / 3;

    printf("1. parcasi: ");
    for (i = 0; i < partLen; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    printf("2. parcasi: ");
    for (i = partLen; i < partLen*2; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    printf("3. parcasi: ");
    for (i = partLen*2; i < len; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

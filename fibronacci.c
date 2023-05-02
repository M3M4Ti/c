#include <stdio.h>

#define N 1000

int main()
{
    int fib[N];
    int i;

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < N; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    FILE *fp = fopen("fibonacci.txt", "w");
    if (fp == NULL)
    {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    for (i = 0; i < N; i++)
    {
        fprintf(fp, "%d\n", fib[i]);
    }

    fclose(fp);

    printf("Islem tamamlandi!\n");

    return 0;
}

#include <stdio.h>
#include <math.h>

float standartsapma(float data[]);

int main()
{
    int i;
    float not[20];

    printf("20 not giriniz: ");
    for(i=0; i < 20; ++i)
        scanf("%f", &not[i]);

    printf("\nNotların standart sapması = %.6f", standartsapma(not));

    return 0;
}

float standartsapma(float not[])
{
    float toplam = 0.0, mean, sapma = 0.0;

    int i;

    for(i=0; i<20; ++i)
    {
        toplam += not[i];
    }

    mean = toplam/20;

    for(i=0; i<20; ++i)
        sapma += pow(not[i] - mean, 2);

    return sqrt(sapma/10);
}
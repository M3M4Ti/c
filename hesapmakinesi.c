#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("Lutfen yapmak istediginiz islemi secin:\n");
    printf("1 - Toplama\n");
    printf("2 - Cikarma\n");
    printf("3 - Carpma\n");
    printf("4 - Bolme\n");
    printf("5 - Permutasyon\n");
    printf("6 - Kombinasyon\n");
    printf("7 - Mod\n");
    printf("8 - Cosinus\n");
    printf("9 - Sinus\n");
    printf("10 - Tanjant\n");
    printf("Secenek: ");

    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Lutfen ilk sayiyi girin: ");
            scanf("%f", &num1);
            printf("Lutfen ikinci sayiyi girin: ");
            scanf("%f", &num2);

            result = num1 + num2;
            printf("%.2f + %.2f = %.2f", num1, num2, result);
            break;
        case 2:
            printf("Lutfen ilk sayiyi girin: ");
            scanf("%f", &num1);
            printf("Lutfen ikinci sayiyi girin: ");
            scanf("%f", &num2);

            result = num1 - num2;
            printf("%.2f - %.2f = %.2f", num1, num2, result);
            break;
        case 3:
            printf("Lutfen ilk sayiyi girin: ");
            scanf("%f", &num1);
            printf("Lutfen ikinci sayiyi girin: ");
            scanf("%f", &num2);

            result = num1 * num2;
            printf("%.2f * %.2f = %.2f", num1, num2, result);
            break;
        case 4:
            printf("Lutfen ilk sayiyi girin: ");
            scanf("%f", &num1);
            printf("Lutfen ikinci sayiyi girin: ");
            scanf("%f", &num2);

            result = num1 / num2;
            printf("%.2f / %.2f = %.2f", num1, num2, result);
            break;
        case 5:
            printf("Lutfen n sayisini girin: ");
            scanf("%f", &num1);
            printf("Lutfen r sayisini girin: ");
            scanf("%f", &num2);

            result = tgamma(num1 + 1) / tgamma(num1 - num2 + 1);
            printf("%.2f P %.2f = %.2f", num1, num2, result);
            break;

        case 6:
            printf("Lutfen n sayisini girin: ");
            scanf("%f", &num1);
            printf("Lutfen r sayisini girin: ");
            scanf("%f", &num2);

            result = tgamma(num1 + 1) / (tgamma(num1 - num2 + 1) * tgamma(num2 + 1));
            printf("%.2f C %.2f = %.2f", num1, num2, result);
            break;

        case 7:
            printf("Lutfen bir sayi girin: ");
            scanf("%f", &num1);
            printf("Lutfen mod degerini girin: ");
            scanf("%f", &num2);

            result = fmod(num1, num2);
            printf("%.2f mod %.2f = %.2f", num1, num2, result);
            break;

        case 8:
            printf("Lutfen aci derecesini girin: ");
            scanf("%f", &num1);

            result = cos(num1 * M_PI / 180);
            printf("cos(%.2f) = %.2f", num1, result);
            break;

        case 9:
            printf("Lutfen aci derecesini girin: ");
            scanf("%f", &num1);

            result = sin(num1 * M_PI / 180);
            printf("sin(%.2f) = %.2f", num1, result);
            break;

        case 10:
            printf("Lutfen aci derecesini girin: ");
            scanf("%f", &num1);

            result = tan(num1 * M_PI / 180);
            printf("tan(%.2f) = %.2f", num1, result);
            break;

        default:
            printf("Gecersiz bir islem secildi.");
    }

    return 0;
}
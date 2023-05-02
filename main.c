#include<stdio.h>
int main(){
    int k,z,deger=1;
    printf("K'yı giriniz");
    scanf("%d",&k);
    printf("Z yi giriniz");
    scanf("%d",&z);
    for(int i=0;i<=k;i++){
        for(int j=1;j<=z;j++){
            deger=2*k+i*j-2;
            deger*=deger;
        }
        deger*=deger;
    }
    printf("Sonuç=%s",deger);
}
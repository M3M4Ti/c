#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{ 
int i,n=20;
int dizi[20];
float artm,stsp,vryns;
artm=0;
vryns=0;
printf("20 Tane Sinav Not Giriniz\n");
for(i=0;i<n;i++)
{
printf("%d: ",i+1);
scanf("%d",&dizi[i]);
}
for(i=0;i<n;i++)
artm=artm+dizi[i];
artm=artm/n;
for(i=0;i<n;i++)
vryns=vryns+(dizi[i]-artm)*(dizi[i]-artm);
vryns=vryns/n;
stsp=sqrt(vryns);
printf("Aritmetik Ortalama=%f\n",artm);
printf("Varyans =%f\n",vryns);
printf("Standart Sapma =%f\n",stsp);
getch();
}
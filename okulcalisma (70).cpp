#include <stdio.h>

int main()
{

 int b1,b2,sayac=0;

 printf("Bolunecek sayiyi gir: ");

 scanf("%d",&b1);

 printf("Bolen sayiyi gir: ");

 scanf("%d",&b2);

 for(sayac=1;b1>b2;sayac++)//for dongusunde bolunen bolenenden buyukse sayaci arttiriyor 

 b1=b1-b2;

 printf("Bolme isleminin sonucu : %d",sayac);

}

#include <stdio.h>
#include <math.h>
main(void)
{
 int sayi,sayac=0,top=0,bas;
 printf(" Bir sayi giriniz lufensssssss: ");
 scanf("%d",&sayi);
 while(sayi>9)
 {
 bas=sayi%10;
 sayi=sayi/10;
 top=top+bas*pow(2,sayac);
 sayac++;
 }
 top=top+sayi*pow(2,sayac);
 printf("dv %d",top);
}


#include <stdio.h>

#include <math.h>// bu kütüphane ile birlikte matematik islemlerini yaptiriyoruz
main(void)
{
 int sayi,i=0,top=0;
 printf(" Bir sayi gir: ");
 scanf("%d",&sayi);
 while(sayi>=2)
 {
 top=top+(sayi%2)*pow(10,i);
 sayi=sayi/2;
 i++;
 }
top=top+sayi*pow(10,i);
printf("bv %d",top);
}

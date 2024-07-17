#include <stdio.h>
int sayi, x, top = 0, temp = 0;
main()
{
 printf("Sayi giriniz = ");
 scanf("%d",&sayi);
 x=sayi;
 temp = sayi % 100;
 top = temp + top;
 sayi = sayi / 100;
 top=top+sayi;
 top=top^2;
 if (x== top)
 printf("Orjinal sayi");
 else
 printf("Orjinal degil");

 }


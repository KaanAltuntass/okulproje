#include <stdio.h>
#include <stdlib.h>
#include <time.h>//
main()
{
int tahmin,tutulan,sayac;
printf("sayi gir len: ");
rand();
tutulan=((rand()% 10)+1);
for(sayac=1;sayac<=10;sayac++)
{
scanf("%d",&tahmin);
if(tahmin==tutulan)
printf("%d seferde buldun",sayac);
else
{
if(tahmin<tutulan)
printf("tahmini yukselt: ");
else
printf("tahmini indir:");
}
if(sayac==10)
break;
}
printf("uzgunuz bi daha ki sefere");
}

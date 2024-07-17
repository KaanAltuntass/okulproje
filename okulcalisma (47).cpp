#include <stdio.h>
main()
{
 int sayi,i=1,neg=0,poz=0;
 printf("sayi girinizssss(50 tane)\n");
 for(i=1;i<=50;i++)
 {
 scanf("%d",&sayi);
 if(sayi<0)
 neg=neg+1;
 else
 {
 if(sayi>0)
 poz=poz+1;
 }
 }
printf("negatif %d , pozitif %d ",neg,poz);
}


#include <stdio.h>
main()
{
 int k,sayac=0,max=0,bolunen=0;
 printf("sayi girin: ");
 scanf("%d",&k);
 while(k!=1)
 {
 sayac++;
 if(k%2==1)
 {
 k=(k*3)+1;
 sayac++;
 bolunen=0; 
 }
 else
 {
 if(bolunen<k)
 bolunen=k;
 k=k/2;
 }
 if(max<k)
 {
 max=k;
 }
 }
printf("maks:%d ,islem :%d ,soncift :%d",max,sayac,bolunen);
}


#include <stdio.h>
#define n 5
main()
{
 int dizi[n];
 int i,enb=0,k;
 printf("dizinin elemanlarini gir\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&dizi[i]);
 if(enb < dizi[i])
 enb=dizi[i];
 }
printf("%d",enb);
}


#include <stdio.h>
main()
{
 int a,enb,b;
 printf("sayi gir: ");
 scanf("%d",&a);
 enb=0;
 while(a!=0)
 {
 b=a-a/10*10;
 if(enb<b)
 enb=b;
 a =(a/10);
 }
printf("enbuyuk %d",enb);
}


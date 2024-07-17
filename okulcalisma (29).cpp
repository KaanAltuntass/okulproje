#include <stdio.h>
main()
{
 int a,enk,enb,temp,i;
 float b,ort,fark;
 printf("10 tane sayi giriniz:\n");
 scanf("%d",&a);
 enk=a;
 enb=a;
 temp=a;
 for(i=2;i<=10;i++)
 {
 scanf("%d",&a);
 if(enk>a)
 enk=a;
 if(enb<a)
 enb=a;
 temp=temp+a;
 }
b=(enb+enk)/2 ;
ort=temp/10 ;
fark=ort-b;
printf("%f",fark);
}

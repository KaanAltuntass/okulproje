#include <stdio.h>
#include <math.h>
main(void)
{
 int a,b,c,d; 
 printf("4 adet kenar giriniz efenim\n");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 if( a+c==b+d)
 printf("kare");
 else
 printf("kare degil");
}

#include <stdio.h>
#include <math.h>
main(void)
{
 int yil;
 printf("yili gir:");
 scanf("%d",&yil);
 if(fmod(yil,4)==0)
 printf("artik");
 else
 printf("artik yil degil");

}

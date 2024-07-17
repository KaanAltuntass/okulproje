#include <stdio.h>
#include <math.h>
main(void)
{
 int a,v;
 printf("a degerini gir: ");
 scanf("%d",&a);
 if( a<15)
 {
 v=32*a;
 printf("%d",v);
 }
 else
 {
 if(a>35)
 v=1600-(32*a);
 else 
 v=480;
 printf("%d",v);
 }
}


#include <stdio.h>
#include <math.h>
main()
{
 int a,b,aci;
 float alan;
 printf("uctane sayi gir\n");
 scanf("%d%d",&a,&b);
 scanf("%d",&aci);
 alan=a*b*sin(aci)/2;
 printf("%f",alan);
}

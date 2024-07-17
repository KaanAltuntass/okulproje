#include <stdio.h>
#include <math.h>
main(void)
{
int sayac;
for(sayac=4;sayac*sayac<=1000;sayac++)
{
 printf("%lf\n",pow(sayac,2));//girdigimiz kutuphane sayesinde sayilarin karesini aliyoruz
 }
 
}


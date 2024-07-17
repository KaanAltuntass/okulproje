#include <stdio.h>
main()
{
 int sayac,tek=0,cift=0;
 for(sayac=1;sayac<500;sayac++)
 {
 tek=tek+sayac;
 cift=cift+(sayac+1); 
 }
if((tek-cift)<0)
printf ("fark negatif");
else
printf("fark pozitif");
}

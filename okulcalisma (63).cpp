#include <stdio.h>

main()
{
 int sayi;
 printf("sayi gir len:");
 scanf("%d",&sayi);
 if(sayi>0)
 printf("sayi pozitiftir");
 else
 {
 if(sayi<0)
 printf("sayi negatiftir");
 else
 printf ("sayi 0 'a esittir");
 }
}


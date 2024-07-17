#include <stdio.h>

main()
{
 int sayi,us,top=1;
 printf("Sayiyi gir bilader: ");
 scanf("%d",&sayi);
 printf("Ussu gir bilader: ");
 scanf("%d",&us);
 while(us>0)
 {
 top=top*sayi;
 us -- ;
 }
 printf("%d",top);
}


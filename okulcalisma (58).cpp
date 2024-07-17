#include <stdio.h>

main()
{
 int sayi ,bolen=1,sayac=2;
 printf("sayi gir kocum: ");
 scanf("%d",&sayi);
 while(sayac<sayi)
 {
 if(sayi%sayac==0)
 bolen=bolen+sayac;
 sayac++;
 }
if(bolen>sayi)
printf("guclu sayi");
else
printf("gucsuz sayi");

}

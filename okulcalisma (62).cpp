#include <stdio.h>
main()
{
 int sayi,sayac=2,top=1;
 printf("sayi giriniz lutfen efenim:");
 scanf("%d",&sayi);
 Ka:
 if(sayi%sayac==0)
 {
 top=top+sayac;
 sayac++;
 }
 else
 sayac++;
 if(sayac>sayi/2)
 {
 if(top==sayi)
 printf("mukemmel");
 else
 printf("mukemmel degil kral");
 }
 else
 goto Ka;
}

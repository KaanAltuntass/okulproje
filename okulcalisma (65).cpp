#include <stdio.h>

main(void)
{
 int sayi ;
 printf("sayi gir: ");
 scanf("%d",&sayi);
 Ka:
 if(sayi%5==0)
 {
 sayi=sayi/5;
 goto Ka;
 }
 if(sayi==1)
 printf("5'in kuvvetidir");
 else
 printf("5'in kuvveti degildir");

}

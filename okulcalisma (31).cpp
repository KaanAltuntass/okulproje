#include <stdio.h>
#include <math.h>
main()
{
 int sayi,fak=1,i;
 printf("sayi gir: ");
 scanf("%d",&sayi);
 if(sayi>=5 && sayi<=10)
 printf("karesi : %f",pow(sayi,2));
 if(sayi<5)
 {
 for(i=1;i<=sayi;i++)
 fak=fak*i;
 printf("faktoriyel :%d",fak);
 }
 if(sayi>10)
 printf("sonuc :%d",((sayi/2)-1));
 }

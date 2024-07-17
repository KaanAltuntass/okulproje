#include <stdio.h>

int main()
{
 int sayi,tek=0,cift=0,i;
 float oran;
 printf("20 adetsayi girin\n");
 for(i=1;i<=20;i++)//20 adet sayi olana kadar for dongusunu kullaniyoruz
{
 scanf("%d",&sayi);
 if(sayi%2==0)
 cift=cift+sayi;
 else
 tek=tek+sayi;
}
 oran=cift/tek;
 printf("oran : %f ",oran);
}


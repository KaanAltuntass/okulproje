#include <stdio.h>

main(void)
{
int negatif,i,sayi,negatifsayi=0,cift=0,bol=0;
printf("sayi gir: ");
 for(i=1;i<=25;i++)
 {

 scanf("%d",&sayi);
 if(sayi<0)
 negatif=negatifsayi+sayi;
 if(sayi%2==0)
 cift=cift*sayi;
 if(sayi==7)
 bol++;
 }
printf("negatifsayi : %d \n,cift :%d\n,7'e esit :%d",negatifsayi,cift,bol);
}

#include <stdio.h>

main()
{
int sayi,adet=4;
for(sayi=8;sayi<=100;sayi++)
{
 if((sayi%2)!=0)
 {
 if((sayi%3)!=0)
 {
 if((sayi%5)!=0)
 {
 if((sayi%7)!=0)
 adet++;
 }
 }
 }
}
printf("adet sayisi = %d",adet);
}


#include <stdio.h>

main()
{
int sayi;
for(sayi=10;sayi<=100;sayi++)
{
 if((sayi%2)!=0)
 {
 if((sayi%3)!=0)
 {
 if((sayi%5)!=0)
 {
 if((sayi%7)!=0)
 printf("%4d",sayi);
 }
 }
 }
}
}


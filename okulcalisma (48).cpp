#include <stdio.h>

main()
{
int sayi,birler,onlar,yuzler, binler,temp;
printf("sayi giriniz lutfensss: ");
scanf("%d",&sayi);
temp=sayi%1000;
onlar=(sayi%100)/10;
yuzler=temp/100;
binler=sayi/1000;
birler=sayi-(binler*1000)-(yuzler*100)-
(onlar*10);
printf("%d\n %d\n %d\n %d\n",binler,yuzler,onlar,birler);
}

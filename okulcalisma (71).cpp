#include <stdio.h>

main()
{
 int s1,s2,sayac=0;
 printf("1.sayi gir: ");
 scanf("%d",&s1);
 printf("2.sayi gir: ");
 scanf("%d",&s2);
 while(s2>0)//while dongusu ile s2 yi 0 olana kadar donguyu devam ettiriyoriz
 {
 sayac=sayac+s1;
 s2 --;
 }
printf("%d",sayac);
}

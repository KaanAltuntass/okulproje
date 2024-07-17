#include <stdio.h>

main()
{
int s1,s2;

printf("1.sayiyi gir: ");
scanf("%d",&s1);

printf("2.sayiyi gir: ");
 scanf("%d",&s2);

 while(s1>=s2)//while dongusunde 1.sayimiz 2. sayiya esit veya buyuk olana kadar devam ediyor
 
s1=s1-s2;

printf("%d",s1);

}

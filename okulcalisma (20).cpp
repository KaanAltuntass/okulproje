#include <stdio.h>
main()
{
char d[100];
int i=0;
printf("sayi girin: ");
gets(d);
 for(i=0;i<100;i++)
 {
 if(d[i]=='\0')
 {
 printf("%d",i);
 break;
 }
 }
}

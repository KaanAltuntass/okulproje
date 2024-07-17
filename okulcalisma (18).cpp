#include <stdio.h>
main()
{
char d[100];
int i=0;
printf("sayi giriniz: \n");
gets(d);
for(i=0;i<100;i++)
 {
 if(d[i]=='\0')
 break;
 }
while (i>-1)
 {
 printf("%c",d[i]);
 i--;
 }
}


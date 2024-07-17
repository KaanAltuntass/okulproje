#include <stdio.h>
main()
{
int i,j;
printf("sayiyi gir: ");
char d[20];
gets(d);
for(i=0;i<20;i++)
{
 if(d[i]=='\0')
 {
 i=i-1;
 break;
 }
}
for(j=0;j<=i;j++)
 {
 if(d[j]!=d[i])
 {
 printf("polindrom deðildir");
 goto dnz;
 }
 i--;
 }
printf("polindromdur");
dnz:
	return 0;
}


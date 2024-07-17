#include <stdio.h>
main()
{
int i;
int n=50;
int sayac = 0;
char ch;
char d[50];
gets(d);
printf("Karakteri Girin = ");
scanf("%c",&ch);
for (i = 0; i < n; i++)
{
if (d[i]=='\0')
break;
if (d[i] == ch)
{
sayac++;
}
}
printf("%d tane var",sayac );
}


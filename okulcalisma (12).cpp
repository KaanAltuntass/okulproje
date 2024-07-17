#include <stdio.h>
int d[10],top=0,i,ort,sayac=0;
main()
{
	printf("sayi gir\n");
for(i=0;i<10;i++)
{
 scanf("%d",&d[i]);
 top=top+d[i];
 }
if(top%10==0)
{
 ort=top/10;
 for(i=0;i<10;i++)
 {
 if(d[i]==ort)
 sayac++;
 }
printf("%d tane var",sayac);
}
else
printf("ortalama tam sayi degil");
}


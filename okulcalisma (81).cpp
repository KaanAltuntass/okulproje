#include <stdio.h>
int alt=0,ust=5,ara,i=0,d[5]={1,3,5,8,10};
int main()
{
	printf("sayiyi gir: ");
scanf("%d",&ara);
if( ara<d[0] || ara>d[4])
 {
 printf("bu sayi dizide yok");
 goto dnz;
 }
while((ust-alt)!=1)
{
i=(alt+ust)/2;
 if (d[i]==ara)
{
printf("%d .eleman",i+1);
break;
 }
if (d[i]>ara)
 ust=i;
 else
 alt=i;
}
dnz:
	return 0;
}


#include <stdio.h>
main()
{
int dizi[10] ,i;
dizi[0]=1,dizi[1]=1;
printf("%d %d ",dizi[0],dizi[1]);
for(i=2;i<10;i++)
 {
 dizi[i]=dizi[i-1]+dizi[i-2];
 printf("%d ",dizi[i]);
 }
}

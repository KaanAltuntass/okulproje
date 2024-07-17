#include <stdio.h>
main()
{
int d[10],a[10],i,j=0;
printf("sayilari gir:\n");
for(i=0;i<10;i++)
{
 scanf("%d",&d[i]);
 if(d[i]%20==0)
 a[j]=d[i];
 j++;
}
}


#include <stdio.h>

main()
{
float i=3,top=1;
int n,k;
printf("sayi gir: ");
scanf("%d",&n);
for(k=1;k<n;k++)
{
if(k%2==1)
top=top-1/i;
else
top=top+1/i;
i=i+2;
}
printf("%f",top);
}

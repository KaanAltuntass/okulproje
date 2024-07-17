#include <stdio.h>
main()
{
int d[10],i;
float ort=0;
printf("sayilari gir:\n");
for(i=0;i<10;i++)
{
scanf("%d",&d[i]);
ort=ort+d[i];
}
ort = ort / 10;
printf("%f",ort);
}

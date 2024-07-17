#include <stdio.h>
#include <math.h>
main()
{
int i;
long carpim=1;
for(i=1;i<=25;i++)
{
carpim=carpim*pow(i,2);
}
printf("carpimlari = %ld",carpim);
}


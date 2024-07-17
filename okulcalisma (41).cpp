#include <stdio.h>
main()
{
 float a,b,i;
 float x;
 printf("sayi girsss: ");
 scanf("%f",&x);
 s1:
 if((i*i)>x )
 {
 b=i*i;
 a=(i-1)*(i-1);
 }
 else
{
i++;
goto s1;
}
x=(i-1)+((x-a)/(b-x));
printf("%f",x);
}


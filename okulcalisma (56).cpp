#include <stdio.h> 
main(void)
{
 int a,b,c;
 printf("ilk sayiyi gir ");
 scanf("%d",&a);
 printf("ikinci sayiyi gir ");
 scanf("%d",&b);
 if(a>50 && b>50)
 {
 c=a+b;
 printf("%d",c);
 }
 else
printf("uygun deil");
}

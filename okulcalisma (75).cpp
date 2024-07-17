#include <stdio.h>
main()
{
int a,b,c;
printf("acilari gir lutfens: ");
scanf("%d%d%d",&a,&b,&c);
if(a==b)
 {
 if(b==c)
 {
 printf("ucgen eskenar");
 goto dnz;
 }
 else
 { 
 printf("ucgen ikizkenar");
 goto dnz;
 }
 }
 if(a==c)
 {
 printf("ucgen ikizkenar");
 goto dnz;
 }
 if(b==c)
 printf("ucgen ikizkenar");
 else
 printf("ucgen cesitkenar");
dnz:
	return 0;
}

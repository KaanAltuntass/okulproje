#include <stdio.h>

main(void)
{
int x,y,xcarpan=0,ycarpan=0,i;
printf("2 dene sayi gir:\n");
scanf("%d%d",&x,&y);
i=(x-(x%2))/2;
 while(i>0) 
 {
 if(x%i==0) 
 xcarpan=xcarpan+i;
 i--;
 }
i=1;
 while(i<y)
 {
 if(y%i==0)
 ycarpan=ycarpan+i;
 i++;
 }
if(xcarpan==y && ycarpan==x)
printf("%d ile %d dost sayilardir" ,x,y);
else
printf("%d ile %d dost degildir" ,x,y);


}


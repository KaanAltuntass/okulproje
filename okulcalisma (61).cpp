#include <stdio.h>

main()
{
int i,top=0,y=0;
 for(i=0;i<=98;i++)
 {
 top=top+(2+i);
 }
 for(i=1;i<=(top/2);i++)
 {
 if((top%i)==0)
 y=y+i;
 }
 if(top==y)
 printf("mukemmel abi");
 else
 printf("mukemmel degil abla");
}

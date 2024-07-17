#include <stdio.h>
main()
{
 int x,n,f=1,t=1,fak=1,i;
 scanf("%d",&x);
 for(i=1;i<=n+1;i++)
 {
 fak=fak*i;
 t=t+(x^i)/f;
 }
 printf("toplam : %d",t);
}


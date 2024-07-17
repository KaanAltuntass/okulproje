#include <stdio.h>
main()
{
 int n,i,f1=1,f2=1,j,t=0;
 printf("sayi giriniz 1 tanee: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=i;j++)
 f1 = f1*j;
 for(j=1;j<=(n-i);j++ )
 f2 = f2*j;
 t =t+((1/f1) + (i/f2));
 }
printf("toplam =%d" ,t);
}


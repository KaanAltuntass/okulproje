#include <stdio.h>
main()
{
 int dizi[6]={10,1,9,2,8,3};
 int n=6;
 int i, j, indis,temp;
 int min;
 for (i=0;i<n-1;i++)
 {
 min=dizi[i];
 indis=i;
 for (j=i+1;j<n;j++)
{
 if (dizi[j]<min)
 {
 min=dizi[j];
 indis=j;
 }
}
temp=dizi[i];
dizi[i]=min;
dizi[indis]=temp;
 }
 printf("siralanmis dizi\n");
 for(i=0;i<n;i++)
 printf("%d",dizi[i]);
 printf("\n");
}


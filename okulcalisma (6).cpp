#define N 10
#include <stdio.h>
main()
{
int i;
int sayi;
int say=0;
printf("sayilari gir:\n");
int dizi[N];
for (i=0;i<N;i++)
 {
 scanf("%d",&dizi[i]);
 }
scanf("%d",&sayi);
for (i=0;i<N;i++)
 {
 if (sayi<dizi[i])
 {
 say++;
 }
 }
printf("%d",say);
}


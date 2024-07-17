#include <stdio.h>
main()
{
int i;
int n = 0;
int p = 0;
int dizi[5];
printf("sayi gir: ");
for (i = 0; i <5; i++)
{
scanf("%d",&dizi[i]);
if (dizi[i] > 0)
p = p + 1;
else if (dizi[i] < 0)
n = n + 1;
}
printf("Pozitif sayisi = %d ",p);
printf("\n\n");
printf("Negatif sayisi = %d " ,n);
}


#include <stdio.h>

int main()
{
 int a,sayi,faktoriyel=1;
 printf("bir sayi gie : ");
 scanf("%d",&sayi);
 for(a=sayi;a>1;a--)//for dongusu ile sayiyi 1 e kadar carpacagimizi soyluyoruz
 faktoriyel=faktoriyel*a;//
 printf("Faktoriyel : %d",faktoriyel);
 
}

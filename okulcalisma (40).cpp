#include<stdio.h>
int main()
{
 int S1,S2,x,y,okek;
 printf("iki Sayi Gir:\n");
 scanf("%d%d",&S1, &S2);
 x=S1;
 y=S2;
 while(S1!=S2)
 {
 if (S1>S2)
 {
 S1=S1-S2;
 }
 else if (S2>S1)
 {
 S2=S2-S1;
 }
}
printf("OBEB %d\n", S1);
okek=(x*y)/S1;
printf("OKEK %d\n", okek);
}

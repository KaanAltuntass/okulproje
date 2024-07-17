#include <stdio.h>
main()
{
int i;
int j;
int a[3][3] = { 0, 1, 2 , 3, 6, 7 ,8, 9, 6 };
int b[3][3] = { 2, 5, 7 ,8, 3, 6 , 7, 9, 10 };
int c[3][3];
for (i = 0; i < 3; i++)
 {
 for (j = 0; j < 3; j++)
 {
 c[i][j] = a[i][j] + b[i][j];
 }
 }
 for (i = 0; i < 3; i++)
 {
 for (j = 0; j < 3; j++)
 {
 printf("%d",c[i][j]);
 }
 }
return 0;
}

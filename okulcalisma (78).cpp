#include <stdio.h>

int main()
{
    int dizi[6] = {10, 1, 9, 2, 8, 3};
    int n = 6;
    int i, j, index;

    for (i = 0; i < n; i++)
    {
        index = dizi[i];
        j = i;
        while ((j > 0) && (dizi[j - 1] > index))
        {
            dizi[j] = dizi[j - 1];
            j = j - 1;
        }
        dizi[j] = index;
    }

    printf("siralanmis dizi\n");
    for (i = 0; i < n; i++)
        printf("%d ", dizi[i]);
    printf("\n");
}


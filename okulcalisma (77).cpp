#include <stdio.h>

int main()
{
    int d[6] = {1, 15, 12, 9, 11, 2};
    int n = 6;
    int i, j;
    int x;
    int orta;
    orta = n / 2;

    while (orta > 0)
    {
        for (i = orta; i < n; ++i)
        {
            x = d[i];
            for (j = i - orta; (x < d[j]) && (j >= 0); j = j - orta)
            {
                d[j + orta] = d[j];
            }
            d[j + orta] = x;
        }
        orta = orta / 2;
    }

    printf("\n");
    for (i = 0; i < 6; ++i)
    {
        printf("%4d", d[i]);
    }
}


#include <stdio.h>

int main() {
    int i, j;
    int dizi[2][3];

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("d[%d][%d] = ", i, j);
            scanf("%d", &dizi[i][j]);
        }
    }


    printf("IV:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", dizi[i][j]);
        }
        printf("\n");
    }

    return 0;
}


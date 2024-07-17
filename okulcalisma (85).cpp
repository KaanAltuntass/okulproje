#include <stdio.h>

int main() {
    int dizi[2][2], i, j, transpose[2][2];
    printf("degeri gir: ");


    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &dizi[i][j]);
        }
    }


    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            transpose[i][j] = dizi[j][i];
        }
    }


    printf("Tm:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}



#include <stdio.h>

int main() {
    int i, j;
    int dizi[5][4];

    for (i = 0; i < 5; i++) {
        printf("No = ");
        scanf("%d", &dizi[i][0]);
        printf("Vize = ");
        scanf("%d", &dizi[i][1]);
        printf("Final = ");
        scanf("%d", &dizi[i][2]);
        dizi[i][3] = (int)((dizi[i][1] * 0.3) + (dizi[i][2] * 0.7)); 
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", dizi[i][j]); 
        }
        printf("\n");
    }

    return 0;
}


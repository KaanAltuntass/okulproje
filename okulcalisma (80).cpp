#include <stdio.h>

int main() {
    int i, j, d[10], temp;
printf("sayilari gir\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &d[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) { 
            if (d[j] > d[j + 1]) {
                temp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%2d ", d[i]);
    }

    return 0;
}


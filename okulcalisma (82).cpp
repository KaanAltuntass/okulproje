#include <stdio.h>

#define N 5

int main() {
    int d[N] = {11, 43, 4, 7, 32};
    int ara, i;

    printf("numara gir: ");
    scanf("%d", &ara);

    for (i = 0; i < N; i++) {
        if (d[i] == ara) {
            printf("%d. bu dizide var %d\n", ara, i);
            return 0;
        }
    }

    printf("bu dizide yok\n");

    return 0;
}


#include <stdio.h>

int main() {
    int d[15], k1 = 0, k2 = 0, k3 = 0, i;

    for (i = 0; i < 15; i++) {
        scanf("%d", &d[i]);
    }

    for (i = 0; i < 15; i++) {
        if (d[i] < 10) {
            k1++;
        } else if (d[i] < 100) {
            k2++;
        } else {
            k3++;
        }
    }

    printf("%d %d %d", k1, k2, k3);

    return 0;
}


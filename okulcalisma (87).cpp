#include <stdio.h>

int main() {
    int a[10], c[10], say = 0, i, j = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 9; i += 2) {
        c[j] = (a[i] + a[i + 1]) / 2;
        j++;
        say++;
    }

    for (i = 0; i < say; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}



#include <stdio.h>

#define n 8

int main() {
    int a[n], b[n], c[n + 1], i, elde = 0, top;

    for (i = 0; i < n; i++) {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        printf("b[%d]=", i);
        scanf("%d", &b[i]);
    }

    for (i = n - 1; i >= 0; i--) {
        top = a[i] + b[i] + elde;
        elde = top / 2;
        c[i + 1] = top % 2;
    }
    c[0] = elde;

    for (i = 0; i <= n; i++) {
        printf("%d", c[i]);
    }

    return 0;
}


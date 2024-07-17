#include <stdio.h>

int main() {
    int n, d[15], by1, by2, i;

    for (i = 0; i < 15; i++) {
        scanf("%d", &d[i]);
    }

    if (d[0] > d[1]) {
        by1 = d[0];
        by2 = d[1];
    } else {
        by1 = d[1];
        by2 = d[0];
    }

    for (i = 2; i < 15; i++) {
        if (d[i] > by2) {
            if (d[i] > by1) {
                by2 = by1;
                by1 = d[i];
            } else {
                by2 = d[i];
            }
        }
    }

    printf("%d", by2);

    return 0;
}


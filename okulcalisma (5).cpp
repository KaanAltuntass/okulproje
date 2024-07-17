#include <stdio.h>

#define N 10 

int main() {
    int A[N], i, temp;
    printf("sayilari gir\n");

    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int T = N / 2;
    for (i = 0; i < T; i++) {
        temp = A[i];
        A[i] = A[N - 1 - i];
        A[N - 1 - i] = temp;
    }

    for (i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}


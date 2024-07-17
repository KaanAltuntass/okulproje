#include <stdio.h>

int main() {
    int enb, enk, enkyer = 0, enbyer = 0, d[10], i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &d[i]);
        if (i == 0 || d[i] > enb) {
            enb = d[i];
            enbyer = i;
        }
        if (i == 0 || d[i] < enk) {
            enk = d[i];
            enkyer = i;
        }
    }

    printf("\n");
    printf("%d . eleman en büyük değeri : %d\n", enbyer + 1, enb);
    printf("%d . eleman en küçük değeri : %d\n", enkyer + 1, enk);

    return 0;
}


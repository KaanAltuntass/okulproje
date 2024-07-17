#include <stdio.h>

main() {
    int n = 5; // Eleman sayýsý
    int d[5];  // Sayýlarý tutan dizi
    int i;

    // Kullanýcýdan 5 adet sayý al
    printf("sayilari gir\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &d[i]);

        // Son elemaný alýrken fazladan bir kez daha sorma
        if ((n - 1) != i)
            scanf("%d", &d[n - 1]);

        n = n - 1;
    }

    n = 5;

    // Diziyi ekrana yazdýr
    for (i = 0; i < n; i++) {
        printf("%d", d[i]);
    }


}


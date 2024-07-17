#include <stdio.h>

main() {
    int i, j = 0, k = 1;
    char d[10] = {'B', 'i', 'l', 'g', 'i', 's', 'a', 'y', 'a', 'r'};

    // Diziyi ekrana yazdýr
    for (i = 0; i < 10; i++) {
        printf(" %c ", d[i]);
        j++;   // j'yi bir artýr
        i = j; // i'yi j'ye eþitle

        // Ýkinci bir iç döngü baþlat
        while (i < 10) {
            // k, j'den küçükse diziyi yazdýrmaya devam et
            if (k < j) {
                printf(" %c ", d[k]);
                k++;
            } else {
                k = 0; // k, j'ye eþitse sýfýrla
            }
        }
    }
}


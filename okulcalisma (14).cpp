#include <stdio.h>

main() {
    int i, j = 0, k = 1;
    char d[10] = {'B', 'i', 'l', 'g', 'i', 's', 'a', 'y', 'a', 'r'};

    // Diziyi ekrana yazd�r
    for (i = 0; i < 10; i++) {
        printf(" %c ", d[i]);
        j++;   // j'yi bir art�r
        i = j; // i'yi j'ye e�itle

        // �kinci bir i� d�ng� ba�lat
        while (i < 10) {
            // k, j'den k���kse diziyi yazd�rmaya devam et
            if (k < j) {
                printf(" %c ", d[k]);
                k++;
            } else {
                k = 0; // k, j'ye e�itse s�f�rla
            }
        }
    }
}


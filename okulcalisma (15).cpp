#include <stdio.h>

main() {
    int n = 5; // Eleman say�s�
    int d[5];  // Say�lar� tutan dizi
    int i;

    // Kullan�c�dan 5 adet say� al
    printf("sayilari gir\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &d[i]);

        // Son eleman� al�rken fazladan bir kez daha sorma
        if ((n - 1) != i)
            scanf("%d", &d[n - 1]);

        n = n - 1;
    }

    n = 5;

    // Diziyi ekrana yazd�r
    for (i = 0; i < n; i++) {
        printf("%d", d[i]);
    }


}


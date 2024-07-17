#include <stdio.h>

int d[10], i, x=0, enk;

main() {
    // ilk elemaný al
    scanf("%d", &d[0]);
    enk = d[0];

    // 10 elemaný al ve en küçüðü bul
    for (i = 1; i < 10; i++) {
        scanf("%d", &d[i]);

        // Eðer bulunan eleman þu ana kadar en küçükse
        if (enk > d[i]) {
            enk = d[i];
            x = i + 1; // En küçük elemanýn sýrasýný güncelle
        }
    }

    // En küçük elemanýn sýrasýný ekrana yazdýr
    printf("En küçük eleman %d.sirada", x);
}


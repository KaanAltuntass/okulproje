#include <stdio.h>

int d[10], i, x=0, enk;

main() {
    // ilk eleman� al
    scanf("%d", &d[0]);
    enk = d[0];

    // 10 eleman� al ve en k����� bul
    for (i = 1; i < 10; i++) {
        scanf("%d", &d[i]);

        // E�er bulunan eleman �u ana kadar en k���kse
        if (enk > d[i]) {
            enk = d[i];
            x = i + 1; // En k���k eleman�n s�ras�n� g�ncelle
        }
    }

    // En k���k eleman�n s�ras�n� ekrana yazd�r
    printf("En k���k eleman %d.sirada", x);
}


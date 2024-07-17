#include <conio.h>
#include <stdio.h>

#define n 50

main() {
    int bas = 0, i = 0, ogr[n], sayi;

    // en fazla 50 adet sayý al ve diziyi doldur
    while (i < n) {
        scanf("%d", &sayi);
        ogr[i] = sayi;

        // Girilen sayý 50 veya daha büyükse, 'bas'ý bir artýr
        if (ogr[i] >= 50) {
            bas = bas + 1;
        }

        i++;
    }

    printf("%d", bas);


}


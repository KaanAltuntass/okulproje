#include <conio.h>
#include <stdio.h>

#define n 50

main() {
    int bas = 0, i = 0, ogr[n], sayi;

    // en fazla 50 adet say� al ve diziyi doldur
    while (i < n) {
        scanf("%d", &sayi);
        ogr[i] = sayi;

        // Girilen say� 50 veya daha b�y�kse, 'bas'� bir art�r
        if (ogr[i] >= 50) {
            bas = bas + 1;
        }

        i++;
    }

    printf("%d", bas);


}


#include <iostream>

int main() {
    // ondal�k say�y� al
    printf("Ondal�k say�y� giriniz: ");
    int decimalNumber;
    scanf("%d", &decimalNumber);

    // Ondal�k say�y� binary formata �evirip ekrana yazd�r
    printf("Binary: ");

    if (decimalNumber == 0) {
        printf("0");
    } else {
        while (decimalNumber > 0) {
            int remainder = decimalNumber % 2;
            printf("%d", remainder);
            decimalNumber /= 2;
        }
    }

    printf("\n");

    return 0;
}


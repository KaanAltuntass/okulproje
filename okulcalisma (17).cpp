#include <iostream>

int main() {
    // ondalık sayıyı al
    printf("Ondalık sayıyı giriniz: ");
    int decimalNumber;
    scanf("%d", &decimalNumber);

    // Ondalık sayıyı binary formata çevirip ekrana yazdır
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


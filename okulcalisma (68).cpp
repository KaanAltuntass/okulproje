#include <stdio.h>
int main() {
    float sayi;
    int i=0;
    printf("Bir sayi giriniz \n");
    scanf("%f", &sayi);
    do {
        sayi = sayi / 10;
        i++;
    } while(sayi >= 1);
    printf("Sayi %d basamakli", i);
    return 0;
}

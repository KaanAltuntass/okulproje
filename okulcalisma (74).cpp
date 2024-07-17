#include <stdio.h>



int main(){

    int sayi1, sayi2, sonuc, sonucKare;

    printf("1.Sayi Gir: ");
    scanf("%d", &sayi1);
  
    printf("2.Sayi Gir: ");
    scanf("%d", &sayi2);

    sonuc = sayi1 + sayi2;
    sonucKare = sonuc * sonuc;//karesini aldiriyoruz

    printf("%d + %d= %d\n", sayi1, sayi2, sonuc);
    printf("%d^2= %d", sonuc, sonucKare);
    
}

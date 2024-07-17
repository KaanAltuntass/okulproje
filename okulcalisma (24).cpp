#include <stdio.h>
#include <math.h>

int main() {
    int x, n, i, j, fak;
    float t;
    printf("iki sayi gir: \n");
    scanf("%d%d", &x, &n);
    
    t = 1;
    for (i = 1; i <= n - 1; i++) {
        fak = 1;
        for (j = 1; j <= 2 * i; j++) {
            fak *= j;
        }
        t = t + pow(-1, i) * pow(x, (2 * i)) / fak;
    }
    
    printf("%f", t);
    
    return 0;
}


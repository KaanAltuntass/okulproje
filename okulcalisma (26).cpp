#include <stdio.h>
#include <math.h>

int main() {
    int n, x, fak = 1, i = 1, j = 1;
    float top = 0;
	printf("iki sayi gir: \n");
    scanf("%d%d", &n, &x);

    for (i = 1; i <= n; i++) {
        fak = 1;
        for (j = 1; j <= i; j++) {
            fak *= j;
        }
        top += pow(x, i) / fak;
    }

    printf("top : %f", top);
    
    return 0;
}

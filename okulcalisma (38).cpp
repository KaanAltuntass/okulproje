#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, delta = 0;
    float x, y;
    
    // abc ye deger verdik

    delta = (b * b) - (4 * a * c);
    
    if (delta == 0) {
        x = (-b) / (2 * a);
        printf("Tek k�k var = %f ", x);
    } else {
        if (delta < 0) {
            printf("reel k�k yok");
        } else {
            x = (-b - sqrt(delta)) / (2 * a);
            y = (-b + sqrt(delta)) / (2 * a);
            printf("iki k�k var x1=%f x2=%f", x, y);
        }
    }
    
    return 0;
}

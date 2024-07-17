#include <stdio.h>
#include <string.h>

int main() {
    char d[20], str[8] = {'a', 'e', 'i', 'o', 'ö', 'I', 'u', 'ü'};
    int i = 0, yuzde, sesli = 0, j, k;

    printf("Enter a string: ");
    fgets(d, 20, stdin);
    i = strlen(d) - 1; 

    for (j = 0; j < i; j++) {
        for (k = 0; k < 8; k++) {
            if (d[j] == str[k]) {
                sesli++;
                break;
            }
        }
    }

    yuzde = (sesli * 100) / i;
    printf("%d percent of the characters are vowels", yuzde);

    return 0;
}


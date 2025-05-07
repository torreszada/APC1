#include <stdio.h>

int main() { 
    int numero, i;
    scanf("%i", &numero);

    for(i = 1; i <= 101; i++) {
        if (numero % i == 0) {
            printf("%i eh multiplo de %i\n", numero, i);
        } else {
            printf("%i nao eh multiplo de %i\n", numero, i);
        }
    }

    return 0;
}
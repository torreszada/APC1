#include <stdio.h>
int main() {

    int n, fatorial = 1;
    printf("Entre com um numero inteiro positivo: ");
    scanf("%i", &n);

    if (n < 0) {
        printf("Fatorial de numero negativo nao existe!\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i; // fatorial = fatorial * i;
        }
        printf("Fatorial de %i eh %i\n", n, fatorial);
            fatorial = 1; // Reinicia o fatorial para o proximo numero
    }

    return 0;
}
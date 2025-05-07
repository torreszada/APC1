#include <stdio.h>

int main() { 
    int nota;
    do {
        if (nota < 1 || nota > 10) {
            printf("Tente novamente!");
        }
    } while(nota < 1 || nota > 10);
    printf("Entre com uma nota entre 0 e 10: ");
    scanf("%i", &nota);
    
    while (nota < 0 || nota > 10) {
        printf("Nota invalida! Entre com uma nota entre 0 e 10: ");
        scanf("%i", &nota);
    }

    return 0;
}
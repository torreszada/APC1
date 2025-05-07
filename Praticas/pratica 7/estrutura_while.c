#include <stdio.h>

int main() { 
    
    int nota;
    printf("Entre com uma nota entre 0 e 10: ");
    scanf("%i", &nota);

    while (nota < 0 || nota > 10) {
        printf("Nota invalida! Entre com uma nota entre 0 e 10: ");
        scanf("%i", &nota);
    }

    return 0;
}
#include <stdio.h>

int main () {
    int nota = 0;
    printf("Digite a nota (1 a 5): ");
    scanf("%i", &nota);
    getchar();
    switch (nota) {
        case 1:
            printf("Voce ganhou '*'\n");
            break;
        case 2:
            printf("Voce ganhou '**'\n");
            break;
        case 3:
            printf("Voce ganhou '***'\n");
            break;
        case 4:
            printf("Voce ganhou '****'\n");
            break;
        case 5:
            printf("Voce ganhou '*****'\n");
            break;
        default:
            printf("Nota invalida! tente novamente.\n");
            break;
    }

    return 0;
}
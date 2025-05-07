#include <stdio.h>

int main () {

    int numero;
    printf("Digite um numero: ");
    scanf("%i", &numero);

    int numero_eh_divisivel_por_2 = numero % 2 == 0;
    if (numero_eh_divisivel_por_2) {
        printf("O numero %i eh par!\n", numero);
    } else {
        printf("O numero %i eh impar!\n", numero);
    }
    int idade;
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    if (idade < 16) {
        printf("Voce nao pode votar!\n");
    } else if (idade >= 18 && idade < 60) {
        printf("Voce eh obrigado a votar!\n");
    } else {
        printf("Voce nao eh obrigado a votar!\n");
    }

    float media;
    printf("Digite sua media: ");
    scanf("%f", &media);
    if (media < 0.0f || media > 10.0f) {
        printf("A media deve ser entre 0.0 e 10.0.\n");
        return 0;
    }
    if (media >= 9.0f) {
        printf("A media eh %.1f e a mencao SS.\n", media);
    } else if (media >= 7.0f) {
        printf("A media eh %.1f e a mencao MS.\n", media);
    } else if (media >= 5.0f) {
        printf("A media eh %.1f e a mencao MM.\n", media);
    } else if (media >= 3.0f) {
        printf("A media eh %.1f e a mencao MI.\n", media);
    } else if (media > 0.0f) {
        printf("A media eh %.1f e a mencao II.\n", media);
    } else {
        printf("A media eh %.1f e a mencao SR.\n", media);
    }
    return 0;
}

#include <stdio.h>
int main() {
    int idade = 0;

    printf("Entre com a sua idade: ");
    scanf("%i", &idade);

    int pode_votar = idade >= 16;
    if (pode_votar) {
        printf("Voce pode votar\n");
    } else {
        if (idade >= 18 && idade <=70) {
            printf("Voce eh obrigado a votar!\n");
        } else {
            printf("Voce pode votar!\n");
        }
    }   

    return 0;
}
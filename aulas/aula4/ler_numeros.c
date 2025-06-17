#include <stdio.h>
int main() {
    int idade = 0;

    printf("Entre com sua idade: ");
    scanf("%i", &idade);
    getchar();
    printf("Voce tem %i anos\n", idade);

    float nota = 0.0f;
    printf("entre com a sua nota: ");
    scanf("%f" , &nota);
    getchar();
    printf("voce tirou %.1f\n", nota);

    return 0;
}
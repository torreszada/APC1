#include <stdio.h>

int main() {
    char tecla;
    int numero;
    float moeda;
    double dizima;

    tecla = 'd';
    printf("valor de tecla = %i\n", tecla);
    printf("valor de tecla = %c\n", tecla);

    numero = 4562;
    printf("valor de numero = %i\n", numero);

    moeda = 52.13f;
    printf("valor de mooeda = %.2f\n", moeda);

    dizima = 1.123456789;
    printf("valor de dizima = %.10f\n", dizima);
    dizima = 2.3333333333;
    printf("valor da dizima = %.10f\n", dizima);
    
    return 0;
}
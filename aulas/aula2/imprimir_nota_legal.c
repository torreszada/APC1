#include <stdio.h>

int main() {
    printf("----------------------------------------\n");
    printf("         NOTA LEGAL      \n");
    printf("----------------------------------------\n");
    printf("Item          Qde       Prc       Valor\n");
    printf("%-10s %03i %6.2f %7.2f\n",  "Caneta azul",    2, 2.0, 4.0);
    printf("%-10s %03i %6.2f %7.2f\n",  "Borracha",     1, 5.0, 5.0);
    printf("%-10s %03i %6.2f %7.2f\n",   "Regua",       1, 12.0, 12.0);
    printf("----------------------------------------\n");
    printf("TOTAL........................: R$  21.00\n");

    return 0;
}
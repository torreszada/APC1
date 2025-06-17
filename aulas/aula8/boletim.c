#include <stdio.h>

int main() {

float boletim[6][3];

printf("Entre com suas notas\n");
for (int i = 0; i < 6; i++) {
    for(int j = 0; j < 2; j++) {
        printf("Nota A%i: ", j+1);
        scanf("%f", &boletim[i][j]);
    }
    boletim[i][2] = 0.4 * (boletim[i][0] + 0.6 * boletim[i][1]);
}
printf("\nBoletim\n");
for (int i = 0; i < 6; i++) {
    printf("Disciplina %i: ", i+1);
    for(int j = 0; j < 3; j++) {
        if (j == 2) {
            printf("%5.1f", boletim[i][j]);
        }
    }
    printf("\n");
}
    return 0;
}
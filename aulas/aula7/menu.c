#include <stdio.h>
#include <stdlib.h>

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"

#define reset "\e[0m"

int main() {
    int opcao = 0;

    while (opcao != 4) {
        system("clear"); // Limpa a tela (Linux/Mac) ou system("cls") para Windows
        printf(BLU);
        printf("+--------------------------------------+\n");
        printf("|            MENU PRINCIPAL            |\n");
        printf("+--------------------------------------+\n");
        printf("| 1 - Novo jogo                        |\n");
        printf("| 2 - Ver score                        |\n");
        printf("| 3 - Sobre o jogo                     |\n");
        printf("| 4 - Sair                             |\n");
        printf("+--------------------------------------+\n");
        printf(reset);
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        while (getchar() != '\n'); // Limpa o buffer de entrada

        switch(opcao) {
            case 1:{
            int nivel = 0;
                system("clear"); // Limpa a tela (Linux/Mac) ou system("cls") para Windows
                printf("Novo jogo!\n");
                printf("Escolha o nivel de dificuldade:\n");
                printf("1 - Facil\n");
                printf("2 - Medio\n");
                printf("3 - Dificil\n");
                printf("Escolha uma opcao: ");
                scanf("%i", &nivel);
                while (getchar() != '\n'); // Limpa o buffer de entrada
                // Aqui você pode chamar a função para iniciar um novo jogo
                break;}
            case 2:{
                system("clear"); // Limpa a tela (Linux/Mac) ou system("cls") para Windows
                printf("Exibindo score!\n");
                printf("1 - Score do jogador 1 - 10000 pontos\n");
                printf("2 - Score do jogador 2 - 8000 pontos\n");
                printf("3 - Score do jogador 3 - 5000 pontos\n");
                printf("4 - Score do jogador 4 - 2000 pontos\n");
                printf("Escolha uma opcao: ");
                scanf("%i", &opcao);
                while (getchar() != '\n'); // Limpa o buffer de entrada
                // Aqui você pode chamar a função para exibir o score
                break;}
            case 3: {
                system("clear"); // Limpa a tela (Linux/Mac) ou system("cls") para Windows
                printf("Sobre o jogo\n\n");
                printf("Este jogo foi desenvolvido por Theo Torres Rodrigues Batista.\n");
                printf("Desenvolvido em C\n");
                printf("Por Dev1 e Dev2\n\n");
                printf("Copyright(c) 2025\n");
                printf("Pressione qualquer tecla para continuar...\n");
                getchar(); // Espera o usuário pressionar uma tecla
                while (getchar() != '\n'); // Limpa o buffer de entrada
                // Aqui você pode adicionar mais informações sobre o jogo
                break;}
            case 4:{
                printf("Saindo do jogo...\n");
                break;}
            default:{
                printf("Opcao invalida! Tente novamente.\n");
                break;}
    }
    }
    printf("Obrigado por jogar!\n");

    return 0;
}
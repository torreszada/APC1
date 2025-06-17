#include <stdio.h>
#include <string.h>
int main()
{
    struct cliente_t
    {
        char nome[61];
        int telefone;
        char email[61];
        char logradouro[61];
        int numero;
        int cep;
        char complemento[61];
        char cidade[41];
        char uf[3];
    };

    struct cliente_t cliente;
    strcpy(cliente.nome, "JOSE");
    cliente.telefone = 61111111;
    strcpy(cliente.email, "jose@iesb.br");
    strcpy(cliente.logradouro, "sqs");
    cliente.numero = 612;
    cliente.cep = 70000000;
    strcpy(cliente.complemento, "iesb");
    strcpy(cliente.cidade, "Brasilia");
    strcpy(cliente.uf, "DF");

    printf("Dados do cliente\n");
    printf("Nome: %s\n", cliente.nome);
    printf("Telefone: %i\n", cliente.telefone);
    printf("E-mail: %s\n", cliente.email);
    printf("Endereco: %s, %i - %s - %s/%s\n", cliente.logradouro, cliente.numero, cliente.complemento, cliente.cidade, cliente.uf);
    printf("CEP: %i", cliente.cep);

    struct cliente_t clientes[10];

    for(int i = 0; i < 10; i++)
    {
        printf("Digite o nome do cliente %d: ", i + 1);
        scanf(" %[^\n]", clientes[i].nome);
        printf("Digite o telefone do cliente %d: ", i + 1);
        scanf("%i", &clientes[i].telefone);
        printf("Digite o email do cliente %d: ", i + 1);
        scanf(" %[^\n]", clientes[i].email);
        printf("Digite o logradouro do cliente %d: ", i + 1);
        scanf(" %[^\n]", clientes[i].logradouro);
        printf("Digite o numero do cliente %d: ", i + 1);
        scanf("%i", &clientes[i].numero);
        printf("Digite o cep do cliente %d: ", i + 1);
        scanf("%i", &clientes[i].cep);
        printf("Digite o complemento do cliente %d: ", i + 1);
        scanf(" %[^\n]", clientes[i].complemento);
        printf("Digite a cidade do cliente %d: ", i + 1);
        scanf(" %[^\n]", clientes[i].cidade);
        printf("Digite a UF do cliente %d: ", i + 1);
        scanf(" %[^\n]", clientes[i].uf);
    }
    
    
    return 0;
}
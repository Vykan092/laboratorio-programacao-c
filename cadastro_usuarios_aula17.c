#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[50];
    char perfil[20];
    char confirmacao[50];
    char mensagem[100];

    printf("===== CADASTRO DE USUARIOS =====\n\n");

    printf("Digite seu nome: ");
    scanf("%49s", nome);
    printf("Digite seu perfil: ");
    scanf("%19s", perfil);

    strcpy(confirmacao, nome);

    strcpy(mensagem, "Bem-vindo(a), ");
    strcat(mensagem, confirmacao);
    strcat(mensagem, "!");

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %d\n", (int)strlen(nome));

    if (strcmp(perfil, "ADMIN") == 0)
    {
        printf("Perfil: Administrador\n");
    }
    else if (strcmp(perfil, "COMUM") == 0)
    {
        printf("Perfil: Comum\n");
    }
    else
    {
        printf("Perfil: Invalido\n");
    }

    printf("\n%s\n", mensagem);
    printf("Cadastro realizado com sucesso.\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void exibirMenu()
{
    printf("\n===== CALCULADORA =====\n\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n\n");
}

float somar(float a, float b)
{
    return a + b;
}

float subtrair(float a, float b)
{
    return a - b;
}

float multiplicar(float a, float b)
{
    return a * b;
}

float dividir(float a, float b)
{
    return a / b;
}

int main()
{
    int opcao;
    float n1, n2;

    do
    {
        exibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4)
        {
            printf("\nPrimeiro numero: ");
            scanf("%f", &n1);
            printf("Segundo numero: ");
            scanf("%f", &n2);
            printf("\n");
        }

        switch (opcao)
        {
        case 1:
            printf("Resultado: %.2f\n", somar(n1, n2));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrair(n1, n2));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplicar(n1, n2));
            break;
        case 4:
            if (n2 == 0)
            {
                printf("Erro: nao e possivel dividir por zero.\n");
            }
            else
            {
                printf("Resultado: %.2f\n", dividir(n1, n2));
            }
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
        }
    }
    while (opcao != 0);

    return 0;
}

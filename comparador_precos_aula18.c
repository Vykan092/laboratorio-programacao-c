#include <stdio.h>
#include <stdlib.h>

float maiorPreco(float p1, float p2)
{
    if (p1 > p2)
    {
        return p1;
    }
    else
    {
        return p2;
    }
}

int main()
{
    float preco1, preco2;

    printf("===== COMPARADOR DE PRECOS =====\n\n");

    printf("Preco 1: ");
    scanf("%f", &preco1);
    printf("Preco 2: ");
    scanf("%f", &preco2);

    printf("\n");

    if (preco1 == preco2)
    {
        printf("Os precos sao iguais: R$ %.2f\n", preco1);
    }
    else
    {
        printf("Maior preco: R$ %.2f\n", maiorPreco(preco1, preco2));
    }

    return 0;
}

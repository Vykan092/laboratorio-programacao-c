#include <stdio.h>
#include <stdlib.h>

int dobro(int quantidade)
{
    return quantidade * 2;
}

int main()
{
    int inicial, final;

    printf("===== CONTROLE DE ESTOQUE =====\n\n");

    printf("Quantidade inicial: ");
    scanf("%d", &inicial);

    final = dobro(inicial);

    printf("\nQuantidade inicial: %d\n", inicial);
    printf("Quantidade apos duplicacao: %d\n", final);

    return 0;
}

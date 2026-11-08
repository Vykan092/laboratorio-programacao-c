#include <stdio.h>
#include <stdlib.h>

int calcularFatorial(int n)
{
    int i;
    int resultado = 1;

    for (i = 1; i <= n; i++)
    {
        resultado = resultado * i;
    }

    return resultado;
}

int main()
{
    int numero;

    printf("===== CALCULADORA DE FATORIAL =====\n\n");

    do
    {
        printf("Digite um numero entre 0 e 12: ");
        scanf("%d", &numero);

        if (numero < 0 || numero > 12)
        {
            printf("Numero invalido!\n");
        }
    }
    while (numero < 0 || numero > 12);

    printf("\nFatorial de %d = %d\n", numero, calcularFatorial(numero));

    return 0;
}

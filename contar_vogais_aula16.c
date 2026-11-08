#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[50];
    int i;
    int vogais = 0;

    printf("Digite uma palavra em letras minusculas: ");
    scanf("%49s", palavra);

    for (i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            vogais++;
        }
    }

    printf("Quantidade de vogais: %d\n", vogais);

    return 0;
}

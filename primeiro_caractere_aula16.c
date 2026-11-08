#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    printf("Primeiro caractere: %c\n", palavra[0]);

    return 0;
}

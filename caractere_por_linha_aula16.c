#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[50];
    int i;

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    for (i = 0; palavra[i] != '\0'; i++)
    {
        printf("%c\n", palavra[i]);
    }

    return 0;
}

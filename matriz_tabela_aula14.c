#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[2][2] = {
        {10, 20},
        {30, 40}
    };
    int i, j;

    printf("===== MATRIZ 2x2 =====\n\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

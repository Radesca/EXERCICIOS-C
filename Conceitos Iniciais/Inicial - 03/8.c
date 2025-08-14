/*
8. Faça um programa para calcular e gerar a tabuada dos números 1 ao 10.
*/
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("Tabuada do %d:\n", i);
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}

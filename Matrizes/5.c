/*
5. Faça um programa que leia uma matriz de ordem 5 x 5, calcule e mostre a média dos elementos da diagonal principal.
*/
#include <stdio.h>

int main()
{
    int m[5][5], soma = 0;
    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &m[i][j]);
            if (i == j)
                soma += m[i][j];
        }
    }
    printf("Média da diagonal principal: %.2f\n", soma / 5.0);
    return 0;
}

/*
1. Faça um programa que leia uma matriz de ordem 5 x 3, calcule e mostre a soma de cada linha da matriz.
*/
#include <stdio.h>

int main()
{
    int m[5][3];
    printf("Digite os elementos da matriz 5x3:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        int soma = 0;
        for (int j = 0; j < 3; j++)
            soma += m[i][j];
        printf("Soma da linha %d: %d\n", i, soma);
    }
    return 0;
}

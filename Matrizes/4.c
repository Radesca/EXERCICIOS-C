/*
4. Faça um programa que leia uma matriz 4 x 5, determine e mostre através de uma função o menor elemento dessa matriz.
*/
#include <stdio.h>

int menor(int m[4][5])
{
    int min = m[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (m[i][j] < min)
                min = m[i][j];
        }
    }
    return min;
}

int main()
{
    int m[4][5];
    printf("Digite os elementos da matriz 4x5:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    printf("Menor elemento: %d\n", menor(m));
    return 0;
}

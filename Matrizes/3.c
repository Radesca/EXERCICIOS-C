/*
3. Faça um programa que receba uma matriz de inteiros de ordem 5 x 3 e verifique quais os elementos da matriz são múltiplos de 3, armazenando esses elementos em um vetor. Depois, o programa deve exibir o vetor resultante.
*/
#include <stdio.h>

int main()
{
    int m[5][3], v[15], k = 0;
    printf("Digite os elementos da matriz 5x3:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
            if (m[i][j] % 3 == 0)
                v[k++] = m[i][j];
        }
    }
    printf("Múltiplos de 3: ");
    for (int i = 0; i < k; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}

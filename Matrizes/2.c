/*
2. Faça um programa que leia uma matriz de ordem 3 x 5 e calcule a soma dos elementos de cada coluna da matriz, armazenando os resultados em um vetor. Depois, o programa deve exibir o vetor resultante.
*/
#include <stdio.h>

int main()
{
    int m[3][5], soma[5] = {0};
    printf("Digite os elementos da matriz 3x5:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &m[i][j]);
            soma[j] += m[i][j];
        }
    }
    printf("Soma das colunas: ");
    for (int j = 0; j < 5; j++)
        printf("%d ", soma[j]);
    printf("\n");
    return 0;
}

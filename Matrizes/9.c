/*
9. Faça um programa que receba as dimensões e os elementos de uma matriz, gere e exiba a sua transposta.
*/
#include <stdio.h>

int main()
{
    int m[20][20], t[20][20], l, c;
    printf("Digite o número de linhas e colunas: ");
    scanf("%d %d", &l, &c);
    printf("Digite os elementos:\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &m[i][j]);
            t[j][i] = m[i][j];
        }
    }
    printf("Matriz transposta:\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}

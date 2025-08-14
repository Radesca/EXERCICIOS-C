/*
10. Faça um programa que leia uma matriz 3 X 7 com valores inteiros, calcule e mostre quantos elementos dessa matriz estão no intervalo entre 10 e 50, desconsiderando os extremos. Em seguida, gere uma segunda matriz com os elementos diferentes de 10 e 50, completando a matriz com zero no lugar desses números.
*/
#include <stdio.h>

int main()
{
    int m[3][7], m2[3][7], cont = 0;
    printf("Digite os elementos da matriz 3x7:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            scanf("%d", &m[i][j]);
            if (m[i][j] > 10 && m[i][j] < 50)
                cont++;
            m2[i][j] = (m[i][j] != 10 && m[i][j] != 50) ? m[i][j] : 0;
        }
    }
    printf("Quantidade no intervalo (10,50): %d\n", cont);
    printf("Segunda matriz:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }
    return 0;
}

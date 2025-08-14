/*
8. Faça um programa que leia uma matriz quadrada de tamanho qualquer, calcule e mostre por meio de uma função, a soma dos elementos que não pertencem a nenhuma das diagonais– principal e secundária.
*/
#include <stdio.h>

int soma_foras_diag(int m[20][20], int n)
{
    int soma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && i + j != n - 1)
                soma += m[i][j];
        }
    }
    return soma;
}

int main()
{
    int m[20][20], n;
    printf("Digite a dimensão da matriz quadrada: ");
    scanf("%d", &n);
    printf("Digite os elementos:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    printf("Soma dos elementos fora das diagonais: %d\n", soma_foras_diag(m, n));
    return 0;
}

/*
6. Faça um programa que leia uma matriz quadrada com dimensão definida pelo usuário. Em seguida, implemente uma função que calcule e mostre a soma dos elementos que estão acima da diagonal principal.
*/
#include <stdio.h>

int soma_acima_diag(int m[20][20], int n)
{
    int soma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
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
    printf("Soma acima da diagonal principal: %d\n", soma_acima_diag(m, n));
    return 0;
}

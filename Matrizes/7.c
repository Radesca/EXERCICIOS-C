/*
7. Faça um programa que leia uma matriz quadrada com valores inteiros com dimensão definida pelo usuário, leia uma constante x e, através de uma função, multiplique os elementos da diagonal secundária da matriz com essa constante. Ao final, o programa deve exibir a matriz resultante.
*/
#include <stdio.h>

void multiplica_diag_secundaria(int m[20][20], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        m[i][n - 1 - i] *= x;
    }
}

int main()
{
    int m[20][20], n, x;
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
    printf("Digite a constante x: ");
    scanf("%d", &x);
    multiplica_diag_secundaria(m, n, x);
    printf("Matriz resultante:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}

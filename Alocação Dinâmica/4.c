/*
4. Receba uma matriz quadrada de dimensão n alocada dinamicamente. Copie os elementos da diagonal principal para um vetor alocado dinamicamente e exiba o resultado. Verifique e libere memória.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite a dimensão n: ");
    scanf("%d", &n);
    int **matriz = malloc(n * sizeof(int *));
    if (!matriz)
    {
        printf("Erro de memória!\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        matriz[i] = malloc(n * sizeof(int));
        if (!matriz[i])
        {
            printf("Erro de memória!\n");
            return 1;
        }
    }
    printf("Digite a matriz:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matriz[i][j]);
    int *diag = malloc(n * sizeof(int));
    if (!diag)
    {
        printf("Erro de memória!\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
        diag[i] = matriz[i][i];
    printf("Diagonal principal:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", diag[i]);
    printf("\n");
    for (int i = 0; i < n; i++)
        free(matriz[i]);
    free(matriz);
    free(diag);
    return 0;
}

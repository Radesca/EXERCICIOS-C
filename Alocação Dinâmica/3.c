/*
3. Receba uma matriz m x n e um vetor com n elementos, ambos alocados dinamicamente. Calcule o produto da matriz pelo vetor e exiba o resultado. Verifique e libere memória.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    printf("Digite m e n: ");
    scanf("%d %d", &m, &n);
    int **matriz = malloc(m * sizeof(int *));
    if (!matriz)
    {
        printf("Erro de memória!\n");
        return 1;
    }
    for (int i = 0; i < m; i++)
    {
        matriz[i] = malloc(n * sizeof(int));
        if (!matriz[i])
        {
            printf("Erro de memória!\n");
            return 1;
        }
    }
    int *vetor = malloc(n * sizeof(int));
    if (!vetor)
    {
        printf("Erro de memória!\n");
        return 1;
    }
    printf("Digite a matriz:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matriz[i][j]);
    printf("Digite o vetor:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &vetor[i]);
    printf("Produto matriz x vetor:\n");
    for (int i = 0; i < m; i++)
    {
        int soma = 0;
        for (int j = 0; j < n; j++)
            soma += matriz[i][j] * vetor[j];
        printf("Linha %d: %d\n", i, soma);
    }
    for (int i = 0; i < m; i++)
        free(matriz[i]);
    free(matriz);
    free(vetor);
    return 0;
}

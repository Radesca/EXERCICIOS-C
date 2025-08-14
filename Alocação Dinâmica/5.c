/*
5. Receba um número e mostre todos os seus divisores, bem como a quantidade de divisores existentes. Armazene os divisores em um vetor alocado dinamicamente. Verifique e libere memória.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, qtd = 0;
    printf("Digite um número: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            qtd++;
    int *div = malloc(qtd * sizeof(int));
    if (!div)
    {
        printf("Erro de memória!\n");
        return 1;
    }
    int k = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            div[k++] = i;
    printf("Divisores: ");
    for (int i = 0; i < qtd; i++)
        printf("%d ", div[i]);
    printf("\nQuantidade: %d\n", qtd);
    free(div);
    return 0;
}

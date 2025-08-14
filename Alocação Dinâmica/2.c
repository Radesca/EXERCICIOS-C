/*
2. Receba notas dos clientes (1 a 5) em um vetor alocado dinamicamente. Calcule quantidade de nota 5, porcentagem de notas <3 e média. Verifique e libere memória.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, nota, qtd5 = 0, qtdInsatisfeito = 0, soma = 0;
    printf("Quantidade de avaliações: ");
    scanf("%d", &n);
    int *notas = malloc(n * sizeof(int));
    if (!notas)
    {
        printf("Erro de memória!\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Nota %d: ", i + 1);
        scanf("%d", &nota);
        notas[i] = nota;
        soma += nota;
        if (nota == 5)
            qtd5++;
        if (nota < 3)
            qtdInsatisfeito++;
    }
    printf("Nota 5 (satisfeito): %d\n", qtd5);
    printf("Porcentagem insatisfeitos: %.2f%%\n", (float)qtdInsatisfeito / n * 100);
    printf("Média das avaliações: %.2f\n", (float)soma / n);
    free(notas);
    return 0;
}

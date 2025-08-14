/*
9. Função recursiva que mostra o maior elemento de um array de inteiros.
*/
#include <stdio.h>

int maiorElemento(int *vet, int tam)
{
    if (tam == 1)
        return vet[0];
    int maior = maiorElemento(vet, tam - 1);
    return vet[tam - 1] > maior ? vet[tam - 1] : maior;
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Maior elemento: %d\n", maiorElemento(array, 10));
    return 0;
}

/*
6. Função recursiva que calcula a soma dos elementos do array começando do último até o primeiro.
*/
#include <stdio.h>

int soma_array_invertido(int array[], int n)
{
    if (n < 0)
        return 0;
    return array[n] + soma_array_invertido(array, n - 1);
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Soma invertida: %d\n", soma_array_invertido(array, 9));
    return 0;
}

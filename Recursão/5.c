/*
5. Função recursiva para calcular a soma dos elementos de um array.
*/
#include <stdio.h>

int soma_array(int array[], int n)
{
    if (n == 0)
        return 0;
    return array[n - 1] + soma_array(array, n - 1);
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Soma: %d\n", soma_array(array, 10));
    return 0;
}

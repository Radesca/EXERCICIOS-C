/*
1. Faça um programa que receba dois números inteiros representando o intervalo (inicio) e (fim) de uma sequência, e depois imprima todos os números ímpares dentro deste intervalo.
*/
#include <stdio.h>

int main()
{
    int inicio, fim;
    printf("Digite o início e o fim do intervalo: ");
    scanf("%d %d", &inicio, &fim);
    for (int i = inicio; i <= fim; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

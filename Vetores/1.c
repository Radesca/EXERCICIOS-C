/*
1. Faça um programa que leia uma sequência de números qualquer e armazene em um vetor, em seguida, implemente uma função que contabilize e retorne o total de ocorrências do último número lido desta sequência.
*/
#include <stdio.h>

int conta_ocorrencias(int v[], int n, int valor)
{
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == valor)
            cont++;
    }
    return cont;
}

int main()
{
    int v[100], n = 0, num;
    printf("Digite os números (finalize com -1):\n");
    while (1)
    {
        scanf("%d", &num);
        if (num == -1)
            break;
        v[n++] = num;
    }
    if (n > 0)
        printf("Ocorrências do último número (%d): %d\n", v[n - 1], conta_ocorrencias(v, n, v[n - 1]));
    else
        printf("Nenhum número lido.\n");
    return 0;
}

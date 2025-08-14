/*
4. Faça um programa que leia uma sequência de 21 números inteiros e armazene em um vetor. Depois, determine se o último número lido está presente nos 20 primeiros e mostre as posições do vetor em que ele se encontra.
*/
#include <stdio.h>

int main()
{
    int v[21], achou = 0;
    printf("Digite 21 números inteiros:\n");
    for (int i = 0; i < 21; i++)
    {
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        if (v[i] == v[20])
        {
            printf("Encontrado na posição %d\n", i);
            achou = 1;
        }
    }
    if (!achou)
        printf("Não encontrado nos 20 primeiros.\n");
    return 0;
}

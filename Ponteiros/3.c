/*
3. Faça um programa que leia uma sequência de 51 números inteiros, e utilizando uma função com ponteiros, verifique se o último número está presente nos 50 primeiros números e mostre as posições do vetor em que ele está presente.
*/
#include <stdio.h>

void verifica(int *v, int n, int valor)
{
    int achou = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(v + i) == valor)
        {
            printf("Presente na posição %d\n", i);
            achou = 1;
        }
    }
    if (!achou)
        printf("Não encontrado.\n");
}

int main()
{
    int v[51];
    printf("Digite 51 números inteiros:\n");
    for (int i = 0; i < 51; i++)
        scanf("%d", &v[i]);
    verifica(v, 50, v[50]);
    return 0;
}

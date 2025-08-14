/*
3. Faça um programa que leia 50 números inteiros e armazene em um vetor. Em seguida, armazene os números pares no vetor chamado par e os números ímpares no vetor ímpar. Imprima os dois vetores resultantes.
*/
#include <stdio.h>

int main()
{
    int v[50], par[50], impar[50], p = 0, im = 0;
    printf("Digite 50 números inteiros:\n");
    for (int i = 0; i < 50; i++)
    {
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0)
            par[p++] = v[i];
        else
            impar[im++] = v[i];
    }
    printf("Pares: ");
    for (int i = 0; i < p; i++)
        printf("%d ", par[i]);
    printf("\nÍmpares: ");
    for (int i = 0; i < im; i++)
        printf("%d ", impar[i]);
    printf("\n");
    return 0;
}

/*
6. Faça um programa que leia uma sequência de números inteiros e armazene em um vetor. Em seguida, implemente uma função que determine e mostre os números do vetor que são múltiplos de 7.
*/
#include <stdio.h>

void mostra_multiplos7(int v[], int n)
{
    printf("Múltiplos de 7: ");
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 7 == 0)
            printf("%d ", v[i]);
    }
    printf("\n");
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
    mostra_multiplos7(v, n);
    return 0;
}

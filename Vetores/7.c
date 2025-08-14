/*
7. Faça um programa que receba do usuário um vetor de “n” números inteiros, em seguida, implemente uma função que determine e retorne o maior valor do vetor lido.
*/
#include <stdio.h>

int maior(int v[], int n)
{
    int m = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] > m)
            m = v[i];
    }
    return m;
}

int main()
{
    int v[100], n;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    printf("Digite os elementos:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    printf("Maior valor: %d\n", maior(v, n));
    return 0;
}

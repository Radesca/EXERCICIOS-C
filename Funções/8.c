/*
8. Faça uma função que receba um número inteiro qualquer, calcule e mostre todos os seus divisores, bem como a quantidade de divisores existentes.
*/
#include <stdio.h>

int divisores(int n)
{
    int qtd = 0;
    printf("Divisores de %d: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            qtd++;
        }
    }
    printf("\nQuantidade de divisores: %d\n", qtd);
    return qtd;
}

int main()
{
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    divisores(n);
    return 0;
}

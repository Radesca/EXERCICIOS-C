/*
7. Faça uma função que receba um número inteiro qualquer, calcule e mostre a tabuada deste número.
*/
#include <stdio.h>

void tabuada(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main()
{
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    tabuada(n);
    return 0;
}

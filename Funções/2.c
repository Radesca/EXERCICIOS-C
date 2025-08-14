/*
2. Faça uma função que receba como parâmetro um número inteiro e verifique se este é primo ou não.
*/
#include <stdio.h>

int eh_primo(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    if (eh_primo(n))
        printf("%d é primo.\n", n);
    else
        printf("%d não é primo.\n", n);
    return 0;
}

/*
9. Faça um programa que leia um número e verifique se ele é primo ou não.
*/
#include <stdio.h>

int main()
{
    int n, primo = 1;
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n <= 1)
        primo = 0;
    for (int i = 2; i <= n / 2 && primo; i++)
    {
        if (n % i == 0)
            primo = 0;
    }
    if (primo)
        printf("%d é primo.\n", n);
    else
        printf("%d não é primo.\n", n);
    return 0;
}

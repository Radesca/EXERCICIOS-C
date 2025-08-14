/*
7. Função recursiva que contabiliza o número de dígitos de um inteiro positivo n.
*/
#include <stdio.h>

int conta_digitos(int n)
{
    if (n < 10)
        return 1;
    return 1 + conta_digitos(n / 10);
}

int main()
{
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    printf("Dígitos: %d\n", conta_digitos(n));
    return 0;
}

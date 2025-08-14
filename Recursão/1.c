/*
1. Função recursiva que recebe um inteiro positivo par n e imprime todos os pares de 0 até n em ordem decrescente.
*/
#include <stdio.h>

void imprime_pares_decrescente(int n)
{
    if (n < 0)
        return;
    if (n % 2 == 0)
        printf("%d ", n);
    imprime_pares_decrescente(n - 1);
}

int main()
{
    int n;
    printf("Digite um número par: ");
    scanf("%d", &n);
    imprime_pares_decrescente(n);
    printf("\n");
    return 0;
}

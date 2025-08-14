/*
2. Função recursiva que imprime todos os pares de 0 até n em ordem crescente.
*/
#include <stdio.h>

void imprime_pares_crescente(int n)
{
    if (n < 0)
        return;
    imprime_pares_crescente(n - 1);
    if (n % 2 == 0)
        printf("%d ", n);
}

int main()
{
    int n;
    printf("Digite um número par: ");
    scanf("%d", &n);
    imprime_pares_crescente(n);
    printf("\n");
    return 0;
}

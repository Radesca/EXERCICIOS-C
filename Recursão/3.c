/*
3. Função recursiva para converter um número n da base decimal para binária.
*/
#include <stdio.h>

void decimal_para_binario(int n)
{
    if (n > 1)
        decimal_para_binario(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    decimal_para_binario(n);
    printf("\n");
    return 0;
}

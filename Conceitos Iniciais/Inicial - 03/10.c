/*
10. Faça um programa leia uma sequência de números inteiros e mostre quantos números múltiplos de 7 foram digitados no intervalo entre 10 e 50, bem como a média desses números. O programa deve ser encerrado quando for digitado o valor 0.
*/
#include <stdio.h>

int main()
{
    int num, qtd = 0, soma = 0;
    while (1)
    {
        printf("Digite um número (0 para encerrar): ");
        scanf("%d", &num);
        if (num == 0)
            break;
        if (num >= 10 && num <= 50 && num % 7 == 0)
        {
            soma += num;
            qtd++;
        }
    }
    if (qtd > 0)
        printf("Quantidade: %d\nMédia: %.2f\n", qtd, (float)soma / qtd);
    else
        printf("Nenhum múltiplo de 7 no intervalo.\n");
    return 0;
}

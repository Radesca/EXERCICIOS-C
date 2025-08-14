/*
5. Faça um programa que receba uma quantidade de números inteiros, em seguida calcule e mostre a sua média. A quantidade de números deve ser fornecida pelo usuário.
*/
#include <stdio.h>

int main()
{
    int qtd, num, soma = 0;
    printf("Digite a quantidade de números: ");
    scanf("%d", &qtd);
    for (int i = 0; i < qtd; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &num);
        soma += num;
    }
    printf("Média: %.2f\n", qtd ? (float)soma / qtd : 0.0);
    return 0;
}

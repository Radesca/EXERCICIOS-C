/*
12. Faça um programa que receba como entrada 3 números inteiros e exiba esses números em ordem decrescente. Desafio: tente utilizar apenas 4 comandos if.
*/
#include <stdio.h>

int main()
{
    int a, b, c, maior, meio, menor;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    maior = a;
    menor = a;
    if (b > maior)
        maior = b;
    if (c > maior)
        maior = c;
    if (b < menor)
        menor = b;
    if (c < menor)
        menor = c;
    meio = a + b + c - maior - menor;
    printf("%d %d %d\n", maior, meio, menor);
    return 0;
}

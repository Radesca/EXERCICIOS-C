/*
2. Faça um programa que receba 2 números inteiros quaisquer representados por x e y e mostre, em ordem crescente, todos os números entre x e y cujo resto da divisão deles por 5 for igual a 2 ou igual a 3.
*/
#include <stdio.h>

int main()
{
    int x, y, menor, maior;
    printf("Digite x e y: ");
    scanf("%d %d", &x, &y);
    menor = x < y ? x : y;
    maior = x > y ? x : y;
    for (int i = menor + 1; i < maior; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

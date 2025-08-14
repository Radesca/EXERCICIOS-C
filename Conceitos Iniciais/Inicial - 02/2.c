/*
2. Faça um programa que receba como entrada três números inteiros e, em seguida, exiba o menor deles.
*/
#include <stdio.h>

int main()
{
    int a, b, c, menor;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    menor = a;
    if (b < menor)
        menor = b;
    if (c < menor)
        menor = c;
    printf("Menor: %d\n", menor);
    return 0;
}

/*
3. Faça um programa que receba como entrada três números positivos em ponto flutuante, em seguida, mostre quantos deles estão acima da média aritmética.
*/
#include <stdio.h>

int main()
{
    float a, b, c, media;
    int acima = 0;
    printf("Digite três números positivos: ");
    scanf("%f %f %f", &a, &b, &c);
    media = (a + b + c) / 3;
    if (a > media)
        acima++;
    if (b > media)
        acima++;
    if (c > media)
        acima++;
    printf("%d número(s) acima da média.\n", acima);
    return 0;
}

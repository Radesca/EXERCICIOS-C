/*
8. Faça um programa que receba três valores (a, b e c), calcule e mostre as médias geométrica, harmônica e ponderada desses valores. Para a média ponderada, considere os pesos 1, 2 e 3 para os valores armazenados em a, b e c, respectivamente.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Digite três valores: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Média geométrica: %.2f\n", pow(a * b * c, 1.0 / 3));
    printf("Média harmônica: %.2f\n", 3 / (1 / a + 1 / b + 1 / c));
    printf("Média ponderada: %.2f\n", (a * 1 + b * 2 + c * 3) / 6);
    return 0;
}

/*
1. Implemente um programa que leia as variáveis a, b e c e imprima os valores das quatro fórmulas seguintes:
 a) (a * b) / c
 b) a^2 + b + 5c
 c) (a * b * c + b + c) / (3 * 5 - 1)
 d) (a * b * c)^3 / 2
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Digite os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("a) %.2f\n", (a * b) / c);
    printf("b) %.2f\n", pow(a, 2) + b + 5 * c);
    printf("c) %.2f\n", (a * b * c + b + c) / (3 * 5 - 1));
    printf("d) %.2f\n", pow(a * b * c, 3) / 2);
    return 0;
}

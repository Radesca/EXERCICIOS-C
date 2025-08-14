/*
4. Faça um programa que calcule e exiba o valor de S, em que S é dado por:
S = 1/1 + 3/2 + 5/3 + ... + 99/50
*/
#include <stdio.h>

int main()
{
    double S = 0.0;
    int numerador = 1;
    for (int denominador = 1; denominador <= 50; denominador++, numerador += 2)
    {
        S += (double)numerador / denominador;
    }
    printf("Soma: %.6lf\n", S);
    return 0;
}

/*
5. Faça um programa que receba como entrada 3 números reais maiores que zero correspondendo ao comprimento dos lados do triângulo, em seguida, classifique-o em:
1. equilátero (os três lados de comprimentos iguais)
2. isósceles (dois lados de comprimentos iguais)
3. escaleno (os três lados de comprimentos diferentes)
*/
#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Os lados devem ser maiores que zero.\n");
    }
    else if (a == b && b == c)
    {
        printf("Equilátero\n");
    }
    else if (a == b || a == c || b == c)
    {
        printf("Isósceles\n");
    }
    else
    {
        printf("Escaleno\n");
    }
    return 0;
}

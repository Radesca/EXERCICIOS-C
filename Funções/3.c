/*
3. Faça um programa para calcular as raízes da equação de 2º grau. Implemente funções para calcular e retornar o valor de delta e para calcular e retornar os valores das raizes x1 e x2 da equação.
*/
#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c)
{
    return b * b - 4 * a * c;
}

void raizes(float a, float b, float c)
{
    float d = delta(a, b, c);
    if (a == 0)
    {
        printf("Não é uma equação de segundo grau.\n");
    }
    else if (d < 0)
    {
        printf("Não existem raízes reais.\n");
    }
    else
    {
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);
        printf("Raízes: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
}

int main()
{
    float a, b, c;
    printf("Digite os coeficientes a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    raizes(a, b, c);
    return 0;
}

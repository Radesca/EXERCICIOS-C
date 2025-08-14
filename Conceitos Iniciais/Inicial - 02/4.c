/*
4. Faça um programa para calcular as raízes da equação de segundo grau. O programa recebe como entrada os números a, b, c, que correspondem aos coeficientes da equação de segundo grau (ax² + bx + c = 0). Em seguida, o programa deve mostrar as raízes da equação. Caso as raízes não existam, uma mensagem deve ser exibida. Caso a equação não seja de segundo grau, uma mensagem também deve ser exibida.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;
    printf("Digite os coeficientes a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0)
    {
        printf("Não é uma equação de segundo grau.\n");
    }
    else
    {
        delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            printf("Não existem raízes reais.\n");
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Raízes: x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
    }
    return 0;
}

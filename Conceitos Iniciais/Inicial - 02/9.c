/*
9. Faça um programa para ler as coordenadas (X, Y) de um ponto no sistema cartesiano, indicando a qual quadrante ele pertence. Imprima o quadrante correspondente, que pode ser: primeiro, segundo, terceiro, quarto, eixo x, eixo y, origem.
*/
#include <stdio.h>

int main()
{
    float x, y;
    printf("Digite as coordenadas X e Y: ");
    scanf("%f %f", &x, &y);
    if (x == 0 && y == 0)
    {
        printf("Origem\n");
    }
    else if (x == 0)
    {
        printf("Eixo Y\n");
    }
    else if (y == 0)
    {
        printf("Eixo X\n");
    }
    else if (x > 0 && y > 0)
    {
        printf("Primeiro quadrante\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("Segundo quadrante\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("Terceiro quadrante\n");
    }
    else
    {
        printf("Quarto quadrante\n");
    }
    return 0;
}

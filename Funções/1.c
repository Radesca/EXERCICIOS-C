/*
1. Faça uma função para calcular a área de “n” terrenos retangulares, em que “n” é informado pelo usuário. O programa recebe como entrada o comprimento e a largura de cada terreno e, ao final, exibe a sua área correspondente.
*/
#include <stdio.h>

float area(float comprimento, float largura)
{
    return comprimento * largura;
}

int main()
{
    int n;
    float comp, larg;
    printf("Digite o número de terrenos: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("Terreno %d - comprimento e largura: ", i);
        scanf("%f %f", &comp, &larg);
        printf("Área do terreno %d: %.2f\n", i, area(comp, larg));
    }
    return 0;
}

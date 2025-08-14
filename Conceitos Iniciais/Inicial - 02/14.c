/*
14. Faça um programa que receba o trajeto em km percorrido por um veículo, o tipo do veículo e mostre o consumo estimado de combustível, sabendo-se que um veículo tipo A faz 15 km com um litro de gasolina, um veículo tipo B faz 12 km e um veículo tipo C, 10 km por litro.
*/
#include <stdio.h>

int main()
{
    float km, consumo;
    char tipo;
    printf("Digite o trajeto em km: ");
    scanf("%f", &km);
    printf("Digite o tipo do veículo (A/B/C): ");
    scanf(" %c", &tipo);
    if (tipo == 'A' || tipo == 'a')
        consumo = km / 15.0;
    else if (tipo == 'B' || tipo == 'b')
        consumo = km / 12.0;
    else if (tipo == 'C' || tipo == 'c')
        consumo = km / 10.0;
    else
    {
        printf("Tipo inválido!\n");
        return 1;
    }
    printf("Consumo estimado: %.2f litros\n", consumo);
    return 0;
}

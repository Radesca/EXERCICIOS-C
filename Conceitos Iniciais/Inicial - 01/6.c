/*
6. Faça um programa que receba a distância total percorrida em km e o total de combustível gasto em litros, calcule e mostre o consumo médio de um veículo.
*/
#include <stdio.h>

int main()
{
    float km, litros;
    printf("Digite a distância percorrida (km): ");
    scanf("%f", &km);
    printf("Digite o total de combustível gasto (litros): ");
    scanf("%f", &litros);
    printf("Consumo médio: %.2f km/l\n", km / litros);
    return 0;
}

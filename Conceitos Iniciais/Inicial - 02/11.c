/*
11. Nos parques de diversão, alguns brinquedos têm idade e altura mínimas para poder andar neles. Faça um programa que receba a altura e a idade de uma pessoa, identifique quantos brinquedos ele pode andar.
Barca Viking: 1,5m de altura e 12 anos.
Elevator of Death: 1,4m de altura e 14 anos.
Final Killer: 1,7m de altura ou 16 anos.
*/
#include <stdio.h>

int main()
{
    float altura;
    int idade, brinquedos = 0;
    printf("Digite a altura (m): ");
    scanf("%f", &altura);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    if (altura >= 1.5 && idade >= 12)
        brinquedos++;
    if (altura >= 1.4 && idade >= 14)
        brinquedos++;
    if (altura >= 1.7 || idade >= 16)
        brinquedos++;
    printf("Pode andar em %d brinquedo(s).\n", brinquedos);
    return 0;
}

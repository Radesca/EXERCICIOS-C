/*
10. O índice de massa corporal (IMC) é usado para identificar o peso ideal de uma pessoa. Ele é calculado dividindo a massa pelo quadrado da altura. Faça um programa que, dada a massa e altura de uma pessoa, imprima o seu IMC.
*/
#include <stdio.h>

int main()
{
    float massa, altura, imc;
    printf("Digite a massa (kg): ");
    scanf("%f", &massa);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);
    imc = massa / (altura * altura);
    printf("IMC: %.2f\n", imc);
    return 0;
}

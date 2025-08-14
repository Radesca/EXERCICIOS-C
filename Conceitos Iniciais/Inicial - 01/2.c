/*
2. Faça um programa que leia o raio de um círculo, calcule e mostre o seu perímetro (p) e sua área (a).
 p = 2 * pi * raio
 a = pi * raio^2
*/
#include <stdio.h>
#define PI 3.141592653589793

int main()
{
    float raio;
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    printf("Perímetro: %.2f\n", 2 * PI * raio);
    printf("Área: %.2f\n", PI * raio * raio);
    return 0;
}

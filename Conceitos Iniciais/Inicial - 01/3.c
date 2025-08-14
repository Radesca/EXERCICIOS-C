/*
3. Faça um programa que receba as coordenadas de dois pontos (A e B) no plano cartesiano, calcule e mostre a distância entre esses dois pontos.
 d(A,B) = sqrt((x2 - x1)^2 + (y2 - y1)^2)
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, d;
    printf("Digite x1 y1: ");
    scanf("%f %f", &x1, &y1);
    printf("Digite x2 y2: ");
    scanf("%f %f", &x2, &y2);
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distância: %.2f\n", d);
    return 0;
}

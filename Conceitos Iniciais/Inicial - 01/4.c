/*
4. Faça um programa que leia dois valores x e y e permute o conteúdo das duas variáveis, ou seja, o valor de x ser armazenado em y e vice-versa. Ao final, mostre o conteúdo das variáveis.
*/
#include <stdio.h>

int main()
{
    int x, y, temp;
    printf("Digite x e y: ");
    scanf("%d %d", &x, &y);
    temp = x;
    x = y;
    y = temp;
    printf("Após a troca: x = %d, y = %d\n", x, y);
    return 0;
}

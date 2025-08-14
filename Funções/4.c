/*
4. Faça um programa que calcule a potencia de um número qualquer fornecido pelo usuário. Implemente uma função que receba como parâmetro dois números inteiros x e n, calcule e retorne para o programa principal o resultado de x^n. NÃO USE nenhuma função pronta (ou seja, pow()).
*/
#include <stdio.h>

int potencia(int x, int n)
{
    int resultado = 1;
    for (int i = 0; i < n; i++)
    {
        resultado *= x;
    }
    return resultado;
}

int main()
{
    int x, n;
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &x, &n);
    printf("%d^%d = %d\n", x, n, potencia(x, n));
    return 0;
}

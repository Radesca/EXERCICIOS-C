/*
3. Faça um programa que receba como entrada um número inteiro n e exiba o resultado da seguinte soma:
S = 1 + 1/2 + 1/3 + ... + 1/n
*/
#include <stdio.h>

int main()
{
    int n;
    double S = 0.0;
    printf("Digite n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        S += 1.0 / i;
    }
    printf("Soma: %.6lf\n", S);
    return 0;
}

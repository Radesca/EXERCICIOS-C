/*
7. Faça um algoritmo que leia um número inteiro e imprima o seu antecessor (inteiro anterior) e o seu sucessor (inteiro posterior).
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("Antecessor: %d\nSucessor: %d\n", n - 1, n + 1);
    return 0;
}

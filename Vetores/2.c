/*
2. Faça um programa que receba do usuário um vetor de “n” números inteiros e, em seguida, imprima o vetor na ordem inversa.
*/
#include <stdio.h>

int main()
{
    int v[100], n;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    printf("Digite os elementos:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    printf("Vetor inverso:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}

/*
2. Implemente uma função achar( ) que receba um vetor de inteiros e mostra o maior e o menor elemento. Não imprima os valores na função achar(...) e sim na main( ).
*/
#include <stdio.h>

void achar(int v[], int n, int *maior, int *menor)
{
    *maior = *menor = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] > *maior)
            *maior = v[i];
        if (v[i] < *menor)
            *menor = v[i];
    }
}

int main()
{
    int v[100], n, maior, menor;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    printf("Digite os elementos:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    achar(v, n, &maior, &menor);
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}

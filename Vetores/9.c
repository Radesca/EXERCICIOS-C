/*
9. Faça um programa que receba do usuário um vetor de “n” números reais e ordene-os em ordem crescente. Ao final, o programa deve mostrar o vetor ordenado.
*/
#include <stdio.h>

void ordena(float v[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                float temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}

int main()
{
    float v[100];
    int n;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    printf("Digite os elementos:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &v[i]);
    }
    ordena(v, n);
    printf("Vetor ordenado:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", v[i]);
    }
    printf("\n");
    return 0;
}

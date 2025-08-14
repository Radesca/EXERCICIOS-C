/*
10. Faça um programa que receba um vetor de 20 elementos e, em seguida, efetue a troca dos 10 primeiros elementos pelos 10 últimos, exibindo ao final o vetor resultante.
*/
#include <stdio.h>

int main()
{
    int v[20], temp;
    printf("Digite 20 elementos:\n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        temp = v[i];
        v[i] = v[i + 10];
        v[i + 10] = temp;
    }
    printf("Vetor trocado:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}

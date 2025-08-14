/*
9. Faça um programa que receba um vetor de ‘n’ elementos inteiros, em seguida, percorra o vetor através de dois ponteiros, o primeiro a partir do início do vetor, e o segundo a partir do final do vetor até que se encontrem no meio do vetor.
*/
#include <stdio.h>

int main()
{
    int v[100], n;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    printf("Digite os elementos:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    int *p1 = v, *p2 = v + n - 1;
    while (p1 <= p2)
    {
        printf("%d %d\n", *p1, *p2);
        p1++;
        p2--;
    }
    return 0;
}

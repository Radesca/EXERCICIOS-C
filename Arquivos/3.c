/*
3. Leia vetor A de 20 elementos, grave em arquivo, depois leia para vetor B e verifique.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[20], B[20];
    FILE *f = fopen("vetor.txt", "w");
    if (!f)
    {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }
    for (int i = 0; i < 20; i++)
    {
        printf("A[%d]: ");
        scanf("%d", &A[i]);
        fprintf(f, "%d\n", A[i]);
    }
    fclose(f);
    f = fopen("vetor.txt", "r");
    if (!f)
    {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }
    for (int i = 0; i < 20; i++)
        fscanf(f, "%d", &B[i]);
    fclose(f);
    printf("Vetor B lido:\n");
    for (int i = 0; i < 20; i++)
        printf("%d ", B[i]);
    printf("\n");
    return 0;
}

/*
7. Leia 50 números e armazene-os em um arquivo binário. Depois, leia e mostre a soma.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[50], soma = 0;
    FILE *f = fopen("numeros.bin", "wb");
    if (!f)
    {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }
    for (int i = 0; i < 50; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &v[i]);
        fwrite(&v[i], sizeof(int), 1, f);
    }
    fclose(f);
    f = fopen("numeros.bin", "rb");
    if (!f)
    {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }
    for (int i = 0; i < 50; i++)
    {
        fread(&v[i], sizeof(int), 1, f);
        soma += v[i];
    }
    fclose(f);
    printf("Soma dos números: %d\n", soma);
    return 0;
}

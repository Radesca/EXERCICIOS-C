/*
5. Função que recebe vetor e tamanho, grava em arquivo texto, cada valor em uma linha.
*/
#include <stdio.h>

void grava_vetor(const char *nome, int v[], int n)
{
    FILE *f = fopen(nome, "w");
    if (!f)
    {
        printf("Erro ao abrir arquivo!\n");
        return;
    }
    for (int i = 0; i < n; i++)
        fprintf(f, "%d\n", v[i]);
    fclose(f);
}

int main()
{
    int v[5] = {1, 2, 3, 4, 5};
    grava_vetor("vetor2.txt", v, 5);
    printf("Vetor gravado em vetor2.txt\n");
    return 0;
}

/*
6. Função que recebe matriz e tamanho, grava em arquivo texto, cada linha da matriz em uma linha do arquivo.
*/
#include <stdio.h>

void grava_matriz(const char *nome, int m[][3], int l, int c)
{
    FILE *f = fopen(nome, "w");
    if (!f)
    {
        printf("Erro ao abrir arquivo!\n");
        return;
    }
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
            fprintf(f, "%d ", m[i][j]);
        fprintf(f, "\n");
    }
    fclose(f);
}

int main()
{
    int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
    grava_matriz("matriz.txt", m, 2, 3);
    printf("Matriz gravada em matriz.txt\n");
    return 0;
}

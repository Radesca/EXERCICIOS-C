/*
1. (a) Escreva em um arquivo dados formatados sobre livros (título, registro, preço). (b) Leia os dados do arquivo e mostre na tela.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("livros.txt", "w");
    if (!f)
    {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }
    char titulo[30];
    int registro;
    double preco;
    for (int i = 0; i < 3; i++)
    {
        printf("Título: ");
        fgets(titulo, 30, stdin);
        titulo[strcspn(titulo, "\n")] = 0;
        printf("Registro: ");
        scanf("%d", &registro);
        printf("Preço: ");
        scanf("%lf", &preco);
        getchar();
        fprintf(f, "%s;%d;%.2lf\n", titulo, registro, preco);
    }
    fclose(f);
    // Leitura
    f = fopen("livros.txt", "r");
    if (!f)
    {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }
    printf("\nDados lidos:\n");
    while (fgets(titulo, 30, f))
    {
        printf("%s", titulo);
    }
    fclose(f);
    return 0;
}

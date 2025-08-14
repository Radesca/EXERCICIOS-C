/*
2. Use struct para gravar e ler dados dos livros em arquivo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livro
{
    char titulo[30];
    int numRegistro;
    double preco;
};

int main()
{
    FILE *f = fopen("livros_struct.bin", "wb");
    if (!f)
    {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }
    struct livro l;
    for (int i = 0; i < 3; i++)
    {
        printf("Título: ");
        fgets(l.titulo, 30, stdin);
        l.titulo[strcspn(l.titulo, "\n")] = 0;
        printf("Registro: ");
        scanf("%d", &l.numRegistro);
        printf("Preço: ");
        scanf("%lf", &l.preco);
        getchar();
        fwrite(&l, sizeof(struct livro), 1, f);
    }
    fclose(f);
    // Leitura
    f = fopen("livros_struct.bin", "rb");
    if (!f)
    {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }
    printf("\nDados lidos:\n");
    while (fread(&l, sizeof(struct livro), 1, f))
    {
        printf("%s | %d | %.2lf\n", l.titulo, l.numRegistro, l.preco);
    }
    fclose(f);
    return 0;
}

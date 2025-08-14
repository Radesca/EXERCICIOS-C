/*
3. Defina uma estrutura para representar vídeos assistidos em uma plataforma de streaming. Implemente funções para registrar vários vídeos, mostrar os vídeos cadastrados e a quantidade que cada vídeo foi assistido, e pesquisar um vídeo pelo título.
*/
#include <stdio.h>
#include <string.h>
#define MAX 100

struct Video
{
    char titulo[100];
    int assistido;
};

void registrar(struct Video v[], int *n)
{
    printf("Título: ");
    getchar();
    fgets(v[*n].titulo, 100, stdin);
    v[*n].titulo[strcspn(v[*n].titulo, "\n")] = 0;
    printf("Quantidade de vezes assistido: ");
    scanf("%d", &v[*n].assistido);
    (*n)++;
}

void mostrar(struct Video v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s - %d vez(es)\n", v[i].titulo, v[i].assistido);
    }
}

void pesquisar(struct Video v[], int n)
{
    char titulo[100];
    printf("Título para pesquisar: ");
    getchar();
    fgets(titulo, 100, stdin);
    titulo[strcspn(titulo, "\n")] = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(v[i].titulo, titulo) == 0)
        {
            printf("%s - %d vez(es)\n", v[i].titulo, v[i].assistido);
            return;
        }
    }
    printf("Vídeo não encontrado.\n");
}

int main()
{
    struct Video videos[MAX];
    int n = 0, op;
    do
    {
        printf("1-Registrar 2-Mostrar 3-Pesquisar 0-Sair: ");
        scanf("%d", &op);
        if (op == 1)
            registrar(videos, &n);
        else if (op == 2)
            mostrar(videos, n);
        else if (op == 3)
            pesquisar(videos, n);
    } while (op != 0);
    return 0;
}

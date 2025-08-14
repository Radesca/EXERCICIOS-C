/*
8. Defina uma estrutura para representar os produtos vendidos de uma loja (codigo, preço, descrição). Faça um programa que permita reajustar o preço de todos os produtos com base em algum percentual.
*/
#include <stdio.h>
#include <string.h>
#define MAX 100

struct produto
{
    int codigo;
    float preco;
    char descricao[100];
};

void reajustar(struct produto v[], int n, float perc)
{
    for (int i = 0; i < n; i++)
    {
        v[i].preco *= (1 + perc / 100.0);
    }
}

int main()
{
    struct produto v[MAX];
    int n;
    printf("Quantidade de produtos: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Código: ");
        scanf("%d", &v[i].codigo);
        printf("Preço: ");
        scanf("%f", &v[i].preco);
        printf("Descrição: ");
        getchar();
        fgets(v[i].descricao, 100, stdin);
        v[i].descricao[strcspn(v[i].descricao, "\n")] = 0;
    }
    float perc;
    printf("Percentual de reajuste: ");
    scanf("%f", &perc);
    reajustar(v, n, perc);
    printf("Produtos reajustados:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d | %.2f | %s\n", v[i].codigo, v[i].preco, v[i].descricao);
    }
    return 0;
}

/*
1. Defina uma estrutura para representar produtos de uma adega, incluindo o código, preço, descrição e se é bebida alcoólica ou não. Implemente um programa para gerenciar a adega, com funções para cadastrar vários produtos, pesquisar por código e calcular o valor total dos produtos.
*/
#include <stdio.h>
#include <string.h>
#define MAX 100

struct Produto
{
    int codigo;
    float preco;
    char descricao[100];
    int alcoolica;
};

void cadastrar(struct Produto p[], int *n)
{
    printf("Código: ");
    scanf("%d", &p[*n].codigo);
    printf("Preço: ");
    scanf("%f", &p[*n].preco);
    printf("Descrição: ");
    getchar();
    fgets(p[*n].descricao, 100, stdin);
    p[*n].descricao[strcspn(p[*n].descricao, "\n")] = 0;
    printf("É alcoólica? (1-Sim, 0-Não): ");
    scanf("%d", &p[*n].alcoolica);
    (*n)++;
}

void pesquisar(struct Produto p[], int n)
{
    int cod, achou = 0;
    printf("Digite o código: ");
    scanf("%d", &cod);
    for (int i = 0; i < n; i++)
    {
        if (p[i].codigo == cod)
        {
            printf("%d | %.2f | %s | %s\n", p[i].codigo, p[i].preco, p[i].descricao, p[i].alcoolica ? "Alcoólica" : "Não alcoólica");
            achou = 1;
        }
    }
    if (!achou)
        printf("Produto não encontrado.\n");
}

float total(struct Produto p[], int n)
{
    float t = 0;
    for (int i = 0; i < n; i++)
        t += p[i].preco;
    return t;
}

int main()
{
    struct Produto produtos[MAX];
    int n = 0, op;
    do
    {
        printf("1-Cadastrar 2-Pesquisar 3-Total 0-Sair: ");
        scanf("%d", &op);
        if (op == 1)
            cadastrar(produtos, &n);
        else if (op == 2)
            pesquisar(produtos, n);
        else if (op == 3)
            printf("Total: %.2f\n", total(produtos, n));
    } while (op != 0);
    return 0;
}

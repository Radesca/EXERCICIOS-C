/*
6. Cadastre até 100 lojas (nome, endereço, telefone, preço de produto eletrônico). Exiba a média dos preços e as lojas com preço abaixo da média.
*/
#include <stdio.h>
#include <string.h>
#define MAX 100

struct loja
{
    char nome[100];
    char endereco[200];
    char telefone[20];
    float preco;
};

int main()
{
    struct loja v[MAX];
    int n;
    float soma = 0;
    printf("Quantidade de lojas: ");
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        printf("Nome: ");
        fgets(v[i].nome, 100, stdin);
        v[i].nome[strcspn(v[i].nome, "\n")] = 0;
        printf("Endereço: ");
        fgets(v[i].endereco, 200, stdin);
        v[i].endereco[strcspn(v[i].endereco, "\n")] = 0;
        printf("Telefone: ");
        fgets(v[i].telefone, 20, stdin);
        v[i].telefone[strcspn(v[i].telefone, "\n")] = 0;
        printf("Preço: ");
        scanf("%f", &v[i].preco);
        getchar();
        soma += v[i].preco;
    }
    float media = soma / n;
    printf("Média dos preços: %.2f\nLojas abaixo da média:\n", media);
    for (int i = 0; i < n; i++)
    {
        if (v[i].preco < media)
            printf("%s | %s | %s\n", v[i].nome, v[i].endereco, v[i].telefone);
    }
    return 0;
}

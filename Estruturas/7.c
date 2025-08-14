/*
7. Defina uma estrutura para representar funcionários de uma empresa (nome, idade, salário). Permita listar todos os dados e filtrar salários maiores que 10000.
*/
#include <stdio.h>
#include <string.h>
#define MAX 100

struct funcionario
{
    char nome[50];
    int idade;
    float salario;
};

void listar(struct funcionario v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s | %d | %.2f\n", v[i].nome, v[i].idade, v[i].salario);
    }
}

void filtrar(struct funcionario v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i].salario > 10000)
            printf("%s | %d | %.2f\n", v[i].nome, v[i].idade, v[i].salario);
    }
}

int main()
{
    struct funcionario v[MAX];
    int n, op;
    printf("Quantidade de funcionários: ");
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        printf("Nome: ");
        fgets(v[i].nome, 50, stdin);
        v[i].nome[strcspn(v[i].nome, "\n")] = 0;
        printf("Idade: ");
        scanf("%d", &v[i].idade);
        printf("Salário: ");
        scanf("%f", &v[i].salario);
        getchar();
    }
    do
    {
        printf("1-Listar 2-Filtrar >10000 0-Sair: ");
        scanf("%d", &op);
        if (op == 1)
            listar(v, n);
        else if (op == 2)
            filtrar(v, n);
    } while (op != 0);
    return 0;
}

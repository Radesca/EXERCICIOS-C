/*
7. Defina uma struct para representar funcionários (nome, idade, salario). Defina um vetor de struct alocado dinamicamente para armazenar os funcionários. Calcule e mostre a média dos salários. Verifique e libere memória.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario
{
    char nome[50];
    int idade;
    float salario;
};

int main()
{
    int n;
    printf("Quantidade de funcionários: ");
    scanf("%d", &n);
    getchar();
    struct funcionario *v = malloc(n * sizeof(struct funcionario));
    if (!v)
    {
        printf("Erro de memória!\n");
        return 1;
    }
    float soma = 0;
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
        soma += v[i].salario;
    }
    printf("Média dos salários: %.2f\n", soma / n);
    free(v);
    return 0;
}

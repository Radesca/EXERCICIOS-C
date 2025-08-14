/*
4. Implemente funções para ler os dados de até 50 alunos, exibir os dados dos alunos com status, mostrar a média geral da turma e exibir o nome do aluno com a maior nota.
*/
#include <stdio.h>
#include <string.h>
#define MAX 50

struct cadastro
{
    int matricula;
    char nome[50];
    float nota;
};

void ler(struct cadastro v[], int *n)
{
    printf("Quantidade de alunos: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++)
    {
        printf("Matrícula: ");
        scanf("%d", &v[i].matricula);
        printf("Nome: ");
        getchar();
        fgets(v[i].nome, 50, stdin);
        v[i].nome[strcspn(v[i].nome, "\n")] = 0;
        printf("Nota: ");
        scanf("%f", &v[i].nota);
    }
}

void exibir(struct cadastro v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d | %s | %.2f | ", v[i].matricula, v[i].nome, v[i].nota);
        if (v[i].nota >= 7.0)
            printf("Aprovado\n");
        else if (v[i].nota >= 4.0)
            printf("Exame\n");
        else
            printf("Reprovado\n");
    }
}

float media(struct cadastro v[], int n)
{
    float soma = 0;
    for (int i = 0; i < n; i++)
        soma += v[i].nota;
    return n ? soma / n : 0;
}

void maior_nota(struct cadastro v[], int n)
{
    int idx = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i].nota > v[idx].nota)
            idx = i;
    }
    printf("Maior nota: %s\n", v[idx].nome);
}

int main()
{
    struct cadastro alunos[MAX];
    int n = 0, op;
    do
    {
        printf("1-Ler 2-Exibir 3-Média 4-Maior nota 0-Sair: ");
        scanf("%d", &op);
        if (op == 1)
            ler(alunos, &n);
        else if (op == 2)
            exibir(alunos, n);
        else if (op == 3)
            printf("Média geral: %.2f\n", media(alunos, n));
        else if (op == 4)
            maior_nota(alunos, n);
    } while (op != 0);
    return 0;
}

/*
5. Leia os dados de 20 crianças (nome, idade, altura, peso) e mostre o nome do aluno mais novo e o nome do aluno com o maior peso.
*/
#include <stdio.h>
#include <string.h>
#define MAX 20

struct crianca
{
    char nome[50];
    int idade;
    float altura, peso;
};

int main()
{
    struct crianca v[MAX];
    int idx_novo = 0, idx_peso = 0;
    for (int i = 0; i < MAX; i++)
    {
        printf("Nome: ");
        fgets(v[i].nome, 50, stdin);
        v[i].nome[strcspn(v[i].nome, "\n")] = 0;
        printf("Idade: ");
        scanf("%d", &v[i].idade);
        printf("Altura: ");
        scanf("%f", &v[i].altura);
        printf("Peso: ");
        scanf("%f", &v[i].peso);
        getchar();
        if (v[i].idade < v[idx_novo].idade)
            idx_novo = i;
        if (v[i].peso > v[idx_peso].peso)
            idx_peso = i;
    }
    printf("Mais novo: %s\nMaior peso: %s\n", v[idx_novo].nome, v[idx_peso].nome);
    return 0;
}

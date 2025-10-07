/*
Enunciado:

Implemente um programa em C para gerenciar um pequeno catálogo de filmes e séries.

Requisitos:
- Cada registro deve conter: código (int), título (string), tipo ("serie" ou "filme"),
    ano (int), gênero (string), classificação indicativa (int), duração em minutos (int),
    número de likes (int) e número de dislikes (int).
- O programa deve armazenar os registros em memória em um array com capacidade para
    até 100 registros e também persistir os dados em um arquivo texto chamado "registros.txt".
- Operações suportadas via menu:
    1) Cadastrar: solicitar os dados do registro, salvar em memória e anexar ao arquivo.
    2) Consultar: buscar por código e mostrar os dados do registro encontrado.
    3) Alterar: localizar por código, permitir atualizar os campos e refletir a alteração no arquivo.
    4) Remover: excluir um registro por código (substituir pelo último registro em memória)
         e regravar o arquivo com os registros restantes.
    5) Exibir todos os filmes: listar todos os registros armazenados em memória.
    0) Sair: encerrar o programa.

Observações:
- Use funções separadas para cada operação (cadastrar, consultar, alterar, remover, exibirTodos).
- Trate corretamente os limites do array e verifique se o arquivo pode ser aberto.
- Formato do arquivo texto: cada registro pode ser gravado em linhas com rótulos, por exemplo:
        Codigo:<valor>\n Titulo: <valor>\n Tipo:<valor>\n Ano:<valor>\n Genero: <valor>\n Classificacao:<valor>\n Duracao(min):<valor>\n Like:<valor>\n Deslike:<valor>\n

Critérios de avaliação:
- Correção das operações de CRUD em memória e no arquivo.
- Tratamento básico de erros (arquivo não encontrado, limite de registros).
- Organização do código em funções e clareza dos comentários.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REGISTROS 100
#define TAM_TITULO 100
#define TAM_TIPO 20
#define TAM_GENERO 50
#define TAM_CLASSIFICACAO 10

typedef struct
{
    int codigo;
    char titulo[TAM_TITULO];
    char tipo[TAM_TIPO];
    int ano;
    char genero[TAM_GENERO];
    int classificacao;
    int duracao;
    int likes;
    int dislikes;
} Registro;

int main()
{
    Registro registros[MAX_REGISTROS];
    int contador = 0;
    int opcao;

    FILE *arquivo = fopen("registros.txt", "a+");

    rewind(arquivo);
    while (fscanf(arquivo, "Codigo:%d\n Titulo: %s Tipo:%s\n Ano:%d\n Genero: %s\n Classificacao:%d\n Duracao(min):%d\n Like:%d\n Deslike:%d\n",
                  &registros[contador].codigo, registros[contador].titulo, registros[contador].tipo,
                  &registros[contador].ano, registros[contador].genero, &registros[contador].classificacao,
                  &registros[contador].duracao, &registros[contador].likes, &registros[contador].dislikes) == 9)
    {
        contador++;
    }

    do
    {
        printf("\nMenu:\n1. Cadastrar\n2. Consultar\n3. Alterar\n4. Remover\n5. Exibir todos os filmes\n0. Sair\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrar(registros, &contador, arquivo);
            break;
        case 2:
            consultar(registros, contador);
            break;
        case 3:
            alterar(registros, contador, arquivo);
            break;
        case 4:
            remover(registros, &contador, arquivo);
            break;
        case 5:
            exibirTodos(registros, contador);
            break;
        case 0:
            printf("Encerrando o programa.\n");
            break;
        default:
            printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    fclose(arquivo);
    return 0;
}

void cadastrar(Registro registros[], int *contador, FILE *arquivo)
{
    if (*contador >= MAX_REGISTROS)
    {
        printf("Limite de registros alcancado.\n");
        return;
    }
    printf("Cadastrar um novo registro:\nCodigo: ");
    scanf("%d", &registros[*contador].codigo);
    printf("Titulo: ");
    scanf(" %s", registros[*contador].titulo);
    printf("Tipo (serie ou filme): ");
    scanf("%s", registros[*contador].tipo);
    printf("Ano: ");
    scanf("%d", &registros[*contador].ano);
    printf("Genero: ");
    scanf("%s", registros[*contador].genero);
    printf("Classificacao indicativa (número): ");
    scanf("%d", &registros[*contador].classificacao);
    printf("Duracao (minutos): ");
    scanf("%d", &registros[*contador].duracao);
    printf("Likes: ");
    scanf("%d", &registros[*contador].likes);
    printf("Dislikes: ");
    scanf("%d", &registros[*contador].dislikes);

    fprintf(arquivo, "Codigo:%d\n Titulo: %s\n Tipo:%s\n Ano:%d\n Genero: %s\n Classificacao:%d\n Duracao(min):%d\n Like:%d\n Deslike:%d\n",
            registros[*contador].codigo, registros[*contador].titulo, registros[*contador].tipo,
            registros[*contador].ano, registros[*contador].genero, registros[*contador].classificacao,
            registros[*contador].duracao, registros[*contador].likes, registros[*contador].dislikes);

    (*contador)++;
}

void consultar(Registro registros[], int contador)
{
    int codigo;
    printf("Digite o codigo do registro a ser consultado: ");
    scanf("%d", &codigo);

    for (int i = 0; i < contador; i++)
    {
        if (registros[i].codigo == codigo)
        {
            printf("Titulo: %s\n", registros[i].titulo);
            printf("Tipo: %s\n", registros[i].tipo);
            printf("Ano: %d\n", registros[i].ano);
            printf("Genero: %s\n", registros[i].genero);
            printf("Classificacao indicativa: %d\n", registros[i].classificacao);
            printf("Duracao: %d minutos\n", registros[i].duracao);
            printf("Likes: %d\n", registros[i].likes);
            printf("Dislikes: %d\n", registros[i].dislikes);
            return;
        }
    }

    printf("Registro nao encontrado.\n");
}

void alterar(Registro registros[], int contador, FILE *arquivo)
{
    int codigo;
    printf("Digite o codigo do registro a ser alterado: ");
    scanf("%d", &codigo);

    for (int i = 0; i < contador; i++)
    {
        if (registros[i].codigo == codigo)
        {
            printf("Digite os novos dados para o registro:\n");
            printf("Titulo: ");
            scanf(" %s", registros[i].titulo);
            printf("Tipo (serie ou filme): ");
            scanf("%s", registros[i].tipo);
            printf("Ano: ");
            scanf("%d", &registros[i].ano);
            printf("Genero: ");
            scanf("%s", registros[i].genero);
            printf("Classificacao indicativa (número): ");
            scanf("%d", &registros[i].classificacao);
            printf("Duracao (minutos): ");
            scanf("%d", &registros[i].duracao);
            printf("Likes: ");
            scanf("%d", &registros[i].likes);
            printf("Dislikes: ");
            scanf("%d", &registros[i].dislikes);

            fseek(arquivo, i * sizeof(Registro), SEEK_SET);
            fprintf(arquivo, "Codigo:%d\n Titulo: %s\n Tipo:%s\n Ano:%d\n Genero: %s\n Classificacao:%d\n Duracao(min):%d\n Like:%d\n Deslike:%d\n",
                    registros[i].codigo, registros[i].titulo, registros[i].tipo,
                    registros[i].ano, registros[i].genero, registros[i].classificacao,
                    registros[i].duracao, registros[i].likes, registros[i].dislikes);

            printf("Registro alterado com sucesso.\n");
            return;
        }
    }

    printf("Registro nao encontrado.\n");
}

void remover(Registro registros[], int *contador, FILE *arquivo)
{
    int codigo;
    printf("Digite o codigo do registro a ser removido: ");
    scanf("%d", &codigo);

    for (int i = 0; i < *contador; i++)
    {
        if (registros[i].codigo == codigo)
        {
            registros[i] = registros[*contador - 1];
            (*contador)--;

            fclose(arquivo);
            arquivo = fopen("registros.txt", "w");
            for (int j = 0; j < *contador; j++)
            {
                fprintf(arquivo, "Codigo:%d\n Titulo: %s\n Tipo:%s\n Ano:%d\n Genero: %s\n Classificacao:%d\n Duracao(min):%d\n Like:%d\n Deslike:%d\n",
                        registros[j].codigo, registros[j].titulo, registros[j].tipo,
                        registros[j].ano, registros[j].genero, registros[j].classificacao,
                        registros[j].duracao, registros[j].likes, registros[j].dislikes);
            }

            printf("Registro removido com sucesso.\n");
            return;
        }
    }

    printf("Registro nao encontrado.\n");
}

void exibirTodos(Registro registros[], int contador)
{
    if (contador == 0)
    {
        printf("Nenhum filme cadastrado.\n");
        return;
    }

    printf("Exibindo todos os filmes cadastrados:\n");
    for (int i = 0; i < contador; i++)
    {
        printf("Codigo: %d\n", registros[i].codigo);
        printf("Titulo: %s\n", registros[i].titulo);
        printf("Tipo: %s\n", registros[i].tipo);
        printf("Ano: %d\n", registros[i].ano);
        printf("Genero: %s\n", registros[i].genero);
        printf("Classificacao indicativa: %d\n", registros[i].classificacao);
        printf("Duracao: %d minutos\n", registros[i].duracao);
        printf("Likes: %d\n", registros[i].likes);
        printf("Dislikes: %d\n", registros[i].dislikes);
        printf("\n");
    }
}
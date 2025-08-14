/*
1. Cadastre um novo alimento em um vetor de struct alocado dinamicamente. Exiba todos os alimentos cadastrados. Permita buscar um alimento pelo nome e exiba as calorias. Verifique e libere memória.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alimento
{
    char nome[50];
    int calorias;
};

int main()
{
    int n = 0, op;
    struct alimento *alimentos = NULL;
    do
    {
        printf("1-Cadastrar 2-Exibir 3-Buscar 0-Sair: ");
        scanf("%d", &op);
        getchar();
        if (op == 1)
        {
            struct alimento temp;
            printf("Nome: ");
            fgets(temp.nome, 50, stdin);
            temp.nome[strcspn(temp.nome, "\n")] = 0;
            printf("Calorias: ");
            scanf("%d", &temp.calorias);
            getchar();
            struct alimento *novo = realloc(alimentos, (n + 1) * sizeof(struct alimento));
            if (!novo)
            {
                printf("Erro de memória!\n");
                break;
            }
            alimentos = novo;
            alimentos[n++] = temp;
        }
        else if (op == 2)
        {
            for (int i = 0; i < n; i++)
                printf("%s | %d cal\n", alimentos[i].nome, alimentos[i].calorias);
        }
        else if (op == 3)
        {
            char busca[50];
            printf("Nome para buscar: ");
            fgets(busca, 50, stdin);
            busca[strcspn(busca, "\n")] = 0;
            int achou = 0;
            for (int i = 0; i < n; i++)
            {
                if (strcmp(alimentos[i].nome, busca) == 0)
                {
                    printf("%s tem %d calorias\n", alimentos[i].nome, alimentos[i].calorias);
                    achou = 1;
                }
            }
            if (!achou)
                printf("Alimento não encontrado.\n");
        }
    } while (op != 0);
    free(alimentos);
    return 0;
}

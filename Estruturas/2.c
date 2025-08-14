/*
2. Implemente funções para registrar uma nova dose de vacina e mostrar todas as doses cadastradas para a pessoa, usando as structs dose e pessoa.
*/
#include <stdio.h>
#include <string.h>

struct dose
{
    int dose;
    char data[11];
    char fabricante[50];
};

struct pessoa
{
    char nome[50];
    struct dose doses[4];
    int totalDoses;
};

void registrar_dose(struct pessoa *p)
{
    if (p->totalDoses < 4)
    {
        struct dose *d = &p->doses[p->totalDoses];
        d->dose = p->totalDoses + 1;
        printf("Data: ");
        scanf("%s", d->data);
        printf("Fabricante: ");
        getchar();
        fgets(d->fabricante, 50, stdin);
        d->fabricante[strcspn(d->fabricante, "\n")] = 0;
        p->totalDoses++;
    }
    else
        printf("Limite de doses atingido.\n");
}

void mostrar_doses(struct pessoa *p)
{
    printf("Doses de %s:\n", p->nome);
    for (int i = 0; i < p->totalDoses; i++)
    {
        printf("Dose %d: %s - %s\n", p->doses[i].dose, p->doses[i].data, p->doses[i].fabricante);
    }
}

int main()
{
    struct pessoa p;
    p.totalDoses = 0;
    printf("Nome: ");
    fgets(p.nome, 50, stdin);
    p.nome[strcspn(p.nome, "\n")] = 0;
    int op;
    do
    {
        printf("1-Registrar dose 2-Mostrar doses 0-Sair: ");
        scanf("%d", &op);
        if (op == 1)
            registrar_dose(&p);
        else if (op == 2)
            mostrar_doses(&p);
    } while (op != 0);
    return 0;
}

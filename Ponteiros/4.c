/*
4. O coordenador do curso deseja saber quantos alunos estão cursando ao mesmo tempo as disciplinas de Programação I e Programação II. Faça um programa usando ponteiros que leia os códigos de matrícula dos alunos de ambos os cursos e mostre os códigos de matrículas dos alunos que estão cursando ambas as disciplinas.
*/
#include <stdio.h>

int main()
{
    int prog1[100], prog2[100], n1, n2;
    printf("Quantidade de alunos em Prog I: ");
    scanf("%d", &n1);
    printf("Matrículas Prog I:\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &prog1[i]);
    printf("Quantidade de alunos em Prog II: ");
    scanf("%d", &n2);
    printf("Matrículas Prog II:\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &prog2[i]);
    printf("Alunos em ambas:\n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (*(prog1 + i) == *(prog2 + j))
            {
                printf("%d\n", prog1[i]);
                break;
            }
        }
    }
    return 0;
}

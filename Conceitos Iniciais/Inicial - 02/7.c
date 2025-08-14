/*
7. Um escritório de contabilidade deseja realizar o reajuste do salário dos funcionários de todos os seus clientes. Faixa de aumento de salários:
Código | Cargo                 | Reajuste
1      | Vendedor(a)           | 10%
2      | Auxiliar de escritório| 7%
3      | Auxiliar de Enfermagem| 12%
4      | Bibliotecário(a)      | 11%
*/
#include <stdio.h>

int main()
{
    int cargo;
    float salario, reajuste, novo;
    printf("Digite o salário atual: ");
    scanf("%f", &salario);
    printf("Digite o código do cargo (1-4): ");
    scanf("%d", &cargo);
    switch (cargo)
    {
    case 1:
        reajuste = 0.10;
        break;
    case 2:
        reajuste = 0.07;
        break;
    case 3:
        reajuste = 0.12;
        break;
    case 4:
        reajuste = 0.11;
        break;
    default:
        printf("Código inválido!\n");
        return 1;
    }
    novo = salario * (1 + reajuste);
    printf("Reajuste: R$ %.2f\nSalário atualizado: R$ %.2f\n", salario * reajuste, novo);
    return 0;
}

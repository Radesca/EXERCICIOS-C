/*
8. Faça um programa que receba dois números “x” e “y” e execute as operações especificadas na Tabela 3, de acordo com a opção escolhida pelo usuário. Caso a opção escolhida seja inválida, o programa deve mostrar uma mensagem de erro e finalizar sua execução. Na divisão, “y“ deve ser diferente de zero.
Tabela 3: Operações disponíveis
Opção | Operação
1     | Média aritmética entre x e y
2     | Diferença do maior pelo menor número
3     | Produto entre x e y
4     | Divisão entre x e y
*/
#include <stdio.h>

int main()
{
    float x, y;
    int op;
    printf("Digite x e y: ");
    scanf("%f %f", &x, &y);
    printf("Escolha a operação (1-4): ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Média aritmética: %.2f\n", (x + y) / 2);
        break;
    case 2:
        printf("Diferença: %.2f\n", x > y ? x - y : y - x);
        break;
    case 3:
        printf("Produto: %.2f\n", x * y);
        break;
    case 4:
        if (y == 0)
        {
            printf("Erro: divisão por zero!\n");
        }
        else
        {
            printf("Divisão: %.2f\n", x / y);
        }
        break;
    default:
        printf("Opção inválida!\n");
    }
    return 0;
}

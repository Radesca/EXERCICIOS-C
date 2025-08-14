/*
6. Uma pequena mercearia resolveu dar descontos para agradar seus clientes. A mercearia contém apenas 4 itens, cujos preços são dados pela Tabela 1. Se a quantidade de produtos comprados for igual ou maior que 15, ou o valor total da compra for maior ou igual a R$ 40,00, o desconto de 15% é concedido. O cliente só pode comprar um único tipo de produto por vez.
Tabela 1: Preços dos produtos
Código | Preço unitário
1      | R$ 5,30
2      | R$ 6,00
3      | R$ 3,20
4      | R$ 2,50
*/
#include <stdio.h>

int main()
{
    int codigo, qtd;
    float preco, total;
    printf("Digite o código do produto (1-4): ");
    scanf("%d", &codigo);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &qtd);
    switch (codigo)
    {
    case 1:
        preco = 5.30;
        break;
    case 2:
        preco = 6.00;
        break;
    case 3:
        preco = 3.20;
        break;
    case 4:
        preco = 2.50;
        break;
    default:
        printf("Código inválido!\n");
        return 1;
    }
    total = preco * qtd;
    if (qtd >= 15 || total >= 40.0)
    {
        total *= 0.85;
    }
    printf("Valor a pagar: R$ %.2f\n", total);
    return 0;
}

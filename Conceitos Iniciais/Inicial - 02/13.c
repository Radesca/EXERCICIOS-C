/*
13. Uma agência bancária decidiu conceder um crédito especial aos seus clientes de acordo com o saldo médio no último ano. Faça um programa que receba o saldo médio de um cliente e calcule o valor do crédito, com base na tabela a seguir.
Saldo Médio | Valor do Crédito
> 400       | 30% do saldo médio
> 300 até 400| 25% do saldo médio
> 200 até 300| 20% do saldo médio
<= 200      | 10% do saldo médio
*/
#include <stdio.h>

int main()
{
    float saldo, credito;
    printf("Digite o saldo médio: ");
    scanf("%f", &saldo);
    if (saldo > 400)
        credito = saldo * 0.3;
    else if (saldo > 300)
        credito = saldo * 0.25;
    else if (saldo > 200)
        credito = saldo * 0.2;
    else
        credito = saldo * 0.1;
    printf("Crédito: R$ %.2f\n", credito);
    return 0;
}

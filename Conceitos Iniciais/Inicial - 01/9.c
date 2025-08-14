/*
9. Faça um programa que receba o preço de um produto e o percentual de desconto, depois calcule e mostre o preço final após o desconto.
*/
#include <stdio.h>

int main()
{
    float preco, desconto, preco_final;
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &desconto);
    preco_final = preco - (preco * desconto / 100);
    printf("Preço final: %.2f\n", preco_final);
    return 0;
}

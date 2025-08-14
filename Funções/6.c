/*
6. Implemente uma função que receba como parâmetro o peso (em quilos) e a altura (metros) de uma pessoa, calcule e retorne o seu IMC. Implemente outra função que receba como parâmetro o IMC de uma pessoa e a classifique de acordo com a Tabela 1.
*/
#include <stdio.h>

float imc(float peso, float altura)
{
    return peso / (altura * altura);
}

const char *classifica_imc(float imc)
{
    if (imc < 18.5)
        return "Abaixo do peso";
    if (imc <= 24.9)
        return "Peso normal";
    if (imc <= 29.9)
        return "Sobrepeso";
    return "Obeso";
}

int main()
{
    float peso, altura, valor_imc;
    printf("Digite o peso (kg) e altura (m): ");
    scanf("%f %f", &peso, &altura);
    valor_imc = imc(peso, altura);
    printf("IMC: %.2f\nClassificação: %s\n", valor_imc, classifica_imc(valor_imc));
    return 0;
}

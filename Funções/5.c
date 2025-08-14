/*
5. Implemente uma função que receba como parâmetro 2 notas e uma opção correspondendo ao cálculo da média. Caso a opção seja a letra “a”, deve ser calculada a média aritmética; caso a opção seja a letra “p”, deve ser calculada a média ponderada (pesos 3 e 2); caso a opção seja a letra “h”, deve ser calculada a média harmônica. Retorne a média devidamente calculada para o programa principal.
*/
#include <stdio.h>

float media(float n1, float n2, char op)
{
    if (op == 'a')
        return (n1 + n2) / 2;
    if (op == 'p')
        return (n1 * 3 + n2 * 2) / 5;
    if (op == 'h')
        return 2 / (1 / n1 + 1 / n2);
    return -1;
}

int main()
{
    float n1, n2;
    char op;
    printf("Digite as duas notas: ");
    scanf("%f %f", &n1, &n2);
    printf("Digite a opção (a/p/h): ");
    scanf(" %c", &op);
    float resultado = media(n1, n2, op);
    if (resultado >= 0)
        printf("Média: %.2f\n", resultado);
    else
        printf("Opção inválida!\n");
    return 0;
}

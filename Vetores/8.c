/*
8. Faça um programa receba a idade de várias pessoas e armazene em um vetor, em seguida, contabilize e mostre o total de pessoas com menos de 18 anos e o total com mais de 30 anos. O programa deve ser encerrado quando for digitado o valor 0.
*/
#include <stdio.h>

int main()
{
    int v[100], n = 0, idade, menos18 = 0, mais30 = 0;
    printf("Digite as idades (finalize com 0):\n");
    while (1)
    {
        scanf("%d", &idade);
        if (idade == 0)
            break;
        v[n++] = idade;
        if (idade < 18)
            menos18++;
        if (idade > 30)
            mais30++;
    }
    printf("Menos de 18: %d\nMais de 30: %d\n", menos18, mais30);
    return 0;
}

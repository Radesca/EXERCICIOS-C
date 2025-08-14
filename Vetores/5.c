/*
5. Faça um programa em leia uma sequência de números e armazene em um vetor. Em seguida, determine e mostre quantos números lidos estão dentro do intervalo entre 10 e 50. O programa deve ser encerrado quando for lido o número -1.
*/
#include <stdio.h>

int main()
{
    int v[100], n = 0, num, cont = 0;
    printf("Digite os números (finalize com -1):\n");
    while (1)
    {
        scanf("%d", &num);
        if (num == -1)
            break;
        v[n++] = num;
        if (num >= 10 && num <= 50)
            cont++;
    }
    printf("Quantidade no intervalo [10,50]: %d\n", cont);
    return 0;
}

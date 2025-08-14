/*
10. Toda apresentação de trabalho tem seus requisitos mínimos que precisam ser atendidos, caso contrário, ele não é aceito e o aluno fica com nota 0. Dada a entrada, descubra se o aluno ficou com 0 ou o seu trabalho será avaliado. A entrada é composta de 5 números, representando respectivamente Interface Gráfica, Inteligência Artificial, Encapsulamento, Indentação e Structs. Os números podem ser: 0- Se o trabalho não possui tal quesito. 1- Se o trabalho possui tal quesito.
*/
#include <stdio.h>

int main()
{
    int ig, ia, enc, ind, st;
    printf("Digite 5 valores (IG IA Enc Ind Structs): ");
    scanf("%d %d %d %d %d", &ig, &ia, &enc, &ind, &st);
    if ((ig || ia) && (enc && ind) && st)
    {
        printf("Trabalho será avaliado.\n");
    }
    else
    {
        printf("Nota 0.\n");
    }
    return 0;
}

/*
5. Indique quais as saídas produzidas pelo programa a seguir. Faça o teste de mesa de cada instrução e verifique os resultados. Depois, você pode executar o código comparando os resultados.
*/
#include <stdio.h>

int main()
{
    int matriz[2][2] = {{1, 3}, {5, 7}};
    int *p1 = &matriz[0][0];
    int *p2 = &matriz[1][0];
    int **pp1 = &p1;
    int **pp2 = &p2;
    int ***ppp1 = &pp1;

    ***ppp1 = 2;     // matriz[0][0] = 2
    *(*pp1 + 2) = 4; // matriz[1][0] = 4
    *(*pp2 + 1) = 9; // matriz[1][1] = 9

    printf("%d %d\n", matriz[0][0], matriz[0][1]);
    printf("%d %d\n", matriz[1][0], matriz[1][1]);
    return 0;
}
// Saída esperada:
// 2 3
// 4 9

/*
7. Indique quais as saídas produzidas pelo programa a seguir. Faça o teste de mesa de cada instrução e verifique os resultados. Depois, você pode executar o código comparando os resultados.
*/
#include <stdio.h>

int main()
{
    int x = 5, y = 7;
    int *px = &x;
    int *py = &y;
    int **ppx = &px;
    int **ppy = &py;
    int ***pppx = &ppx;
    int ***pppy = &ppy;

    ppx = ppy;
    x = **ppy;
    ***pppy += (**ppx);

    printf("%d %d \n", x, y);
    printf("%d %d %d \n", ***pppx, ***pppy, px != py);
    return 0;
}
// Saída esperada:
// 7 14
// 14 14 0

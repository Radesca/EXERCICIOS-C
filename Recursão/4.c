/*
4. Função recursiva que calcula a multiplicação de dois inteiros usando somas sucessivas.
*/
#include <stdio.h>

int multiplica(int a, int b)
{
    if (b == 0)
        return 0;
    if (b > 0)
        return a + multiplica(a, b - 1);
    return -multiplica(a, -b);
}

int main()
{
    int a, b;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Resultado: %d\n", multiplica(a, b));
    return 0;
}

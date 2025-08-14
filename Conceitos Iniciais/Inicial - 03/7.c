/*
7. Faça um programa que determine e mostre os 50 primeiros números múltiplos de 3 considerando números maiores que 0.
*/
#include <stdio.h>

int main()
{
    int count = 0, num = 1;
    while (count < 50)
    {
        if (num % 3 == 0)
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
    return 0;
}

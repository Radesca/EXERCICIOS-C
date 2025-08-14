/*
1. Faça um programa que receba como entrada um caractere e informe se ele é uma vogal ou não.
*/
#include <stdio.h>

int main()
{
    char ch;
    printf("Digite um caractere: ");
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("É uma vogal.\n");
    }
    else
    {
        printf("Não é uma vogal.\n");
    }
    return 0;
}

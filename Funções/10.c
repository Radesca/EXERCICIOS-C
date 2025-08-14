/*
10. Faça uma função que receba um caractere e verifique se ele é uma vogal ou não.
*/
#include <stdio.h>

int eh_vogal(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

int main()
{
    char ch;
    printf("Digite um caractere: ");
    scanf(" %c", &ch);
    if (eh_vogal(ch))
        printf("É uma vogal.\n");
    else
        printf("Não é uma vogal.\n");
    return 0;
}

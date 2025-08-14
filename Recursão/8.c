/*
8. Função recursiva que retorna verdadeiro se a string é um palíndromo.
*/
#include <stdio.h>
#include <string.h>

int eh_palindromo(char *str, int ini, int fim)
{
    if (ini >= fim)
        return 1;
    if (str[ini] != str[fim])
        return 0;
    return eh_palindromo(str, ini + 1, fim - 1);
}

int main()
{
    char str[100];
    printf("Digite uma palavra: ");
    scanf("%s", str);
    if (eh_palindromo(str, 0, strlen(str) - 1))
        printf("É palíndromo\n");
    else
        printf("Não é palíndromo\n");
    return 0;
}

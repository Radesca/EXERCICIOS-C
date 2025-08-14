/*
8. Faça um programa que leia uma string informada pelo usuário e, em seguida, implemente uma função usando ponteiros que contabilize a quantidade de espaços em branco existente na string lida.
*/
#include <stdio.h>
#include <string.h>

int conta_espacos(char *str)
{
    int cont = 0;
    for (; *str; str++)
    {
        if (*str == ' ')
            cont++;
    }
    return cont;
}

int main()
{
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;
    printf("Espaços em branco: %d\n", conta_espacos(str));
    return 0;
}

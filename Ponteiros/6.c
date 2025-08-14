/*
6. Implemente um programa que leia uma string de tamanho qualquer e depois inverta a string lida.
*/
#include <stdio.h>
#include <string.h>

void inverte(char *str)
{
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++)
    {
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
}

int main()
{
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;
    inverte(str);
    printf("Invertida: %s\n", str);
    return 0;
}

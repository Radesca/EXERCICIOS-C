/*
10. Função recursiva que inverte uma string lida.
*/
#include <stdio.h>
#include <string.h>

void inverte(char *str, int ini, int fim)
{
    if (ini >= fim)
        return;
    char temp = str[ini];
    str[ini] = str[fim];
    str[fim] = temp;
    inverte(str, ini + 1, fim - 1);
}

int main()
{
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;
    inverte(str, 0, strlen(str) - 1);
    printf("Invertida: %s\n", str);
    return 0;
}

/*
6. Receba uma string alocada dinamicamente e contabilize a quantidade de espaços em branco existente na string lida. Verifique e libere memória.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tam;
    printf("Digite o tamanho da string: ");
    scanf("%d", &tam);
    getchar();
    char *str = malloc((tam + 1) * sizeof(char));
    if (!str)
    {
        printf("Erro de memória!\n");
        return 1;
    }
    printf("Digite a string: ");
    fgets(str, tam + 1, stdin);
    str[strcspn(str, "\n")] = 0;
    int cont = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] == ' ')
            cont++;
    printf("Espaços em branco: %d\n", cont);
    free(str);
    return 0;
}

/*
4. Leia os nomes de dois arquivos texto, crie um terceiro com o conteúdo dos dois.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arq1[100], arq2[100], arq3[100], linha[200];
    printf("Arquivo 1: ");
    scanf("%s", arq1);
    printf("Arquivo 2: ");
    scanf("%s", arq2);
    printf("Arquivo 3 (saida): ");
    scanf("%s", arq3);
    FILE *f1 = fopen(arq1, "r"), *f2 = fopen(arq2, "r"), *f3 = fopen(arq3, "w");
    if (!f1 || !f2 || !f3)
    {
        printf("Erro ao abrir arquivos!\n");
        return 1;
    }
    while (fgets(linha, 200, f1))
        fputs(linha, f3);
    while (fgets(linha, 200, f2))
        fputs(linha, f3);
    fclose(f1);
    fclose(f2);
    fclose(f3);
    printf("Conteúdo combinado salvo em %s\n", arq3);
    return 0;
}

/*
9. Faça uma que receba uma determinada hora expressa no formato de horas, minutos e segundos e, em seguida, transforme no valor correspondente em segundos.
*/
#include <stdio.h>

int para_segundos(int h, int m, int s)
{
    return h * 3600 + m * 60 + s;
}

int main()
{
    int h, m, s;
    printf("Digite horas, minutos e segundos: ");
    scanf("%d %d %d", &h, &m, &s);
    printf("Total em segundos: %d\n", para_segundos(h, m, s));
    return 0;
}

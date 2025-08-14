/*
1. Analise a sequência de instruções a seguir:
int x = 10, y = 5;
int *ptr1 = &x;
int *ptr2 = &y;
Quais expressões abaixo são válidas e quais não são válidas? Justifique sua resposta.
(a) y = ptr1 == ptr2;
(b) ptr1 += ptr2;
(c) x = (*ptr1)- (*ptr2);
(d) x = ptr1 || ptr2;
(e) y = (*ptr2)++;
(f) y = ptr1 && ptr2;
*/
// Respostas:
// (a) Válida. Compara se os ponteiros são iguais, resultado 0 ou 1.
// (b) Não válida. Não se pode somar ponteiros dessa forma.
// (c) Válida. Subtrai os valores apontados.
// (d) Válida. Verifica se ambos ponteiros são não nulos, resultado 0 ou 1.
// (e) Válida. Incrementa o valor apontado por ptr2 e atribui a y.
// (f) Válida. Verifica se ambos ponteiros são não nulos, resultado 0 ou 1.

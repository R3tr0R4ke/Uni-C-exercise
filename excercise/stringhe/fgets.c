#include <stdio.h>
#define N 20

void main()
{
    char s[N], s1[N];

    printf("Inserisci una stringa: ");
    s1[0] = *fgets(s, N, stdin);    //"*" casting al puntatore. Se lo levi hai un warning

    printf("\nStringa presa da tastiera: %s", s);
    printf("Valore restituito da fgets: %s\n", s);
}
#include <stdio.h>
// In questo semplice esercizio chiamiamo una funzione utilizzando un puntatore a funzioni 
float calcolaMedia(int, int);

void main(void)
{
    float (*ptrfMedia)(int, int);

    int n1 = 12;
    int n2 = 25;
    float risultato;

    ptrfMedia = calcolaMedia;
    risultato = ptrfMedia(n1, n2);
    printf("%2.2f", risultato);
}

float calcolaMedia(int a, int b)
{
    return (a + b) / 2;
}
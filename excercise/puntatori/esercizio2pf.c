#include <stdio.h>

int funzSomma (int a, int b);
int funDifferenza (int a, int b);

void main()
{
    int (*ptrOperazione)(int a, int b);
    int num1 = 10, num2 = 5, somma = 0, differenza = 0;

    ptrOperazione = funzSomma;
    somma = ptrOperazione(num1, num2);
    printf("La somma è: %d\n", somma);

    ptrOperazione = funDifferenza;
    differenza = ptrOperazione(num1, num2);
    printf("La differenza è: %d", differenza);
}

int funzSomma (int a, int b)
{
    return a + b;
}

int funDifferenza (int a, int b)
{
    return a - b;
}
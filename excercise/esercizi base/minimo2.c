#include <stdio.h>

int trovaMinimo(int a, int b);

void main()
{
    int primoNum;
    printf("Inserisci il primo numero: ");
    scanf("%d", &primoNum);

    int secondoNum;
    printf("Inserisci il secondo numero: ");
    scanf("%d", &secondoNum);

    printf("Il minimo tra i due numeri è: %d", trovaMinimo(primoNum, secondoNum));
}

int trovaMinimo(int a, int b)
{
    if(a == 0 && b == 0)
    {
        return 0;
    }
    else if ( a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
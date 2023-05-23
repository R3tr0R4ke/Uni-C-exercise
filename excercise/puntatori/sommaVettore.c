#include <stdio.h>

int sommaVettore(int* ptrVet);

void main ()
{
    int vettore[] = {5, 10, 15, 20, 25};

    printf("La somma del vettore è : %d", sommaVettore(&vettore));
}

int sommaVettore(int* ptrVet)
{
    int somma = 0;
    for (size_t i = 0; i < 5; i++)
    {
        somma = somma + *ptrVet;
        *ptrVet++;
    }
    return somma;
}
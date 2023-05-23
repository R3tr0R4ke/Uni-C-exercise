#include <stdio.h>

void sottoprogramma(int *v);
void sottoprogramma2(int v[]);

void main()
{
    int mioVettore[] = {3, 5, 7, 9, 4, 1, 0, 6, 2, 10}; // vettore di 10 elementi inizializzati
    
    printf("Array puntato: ");
    sottoprogramma(mioVettore);                         // chiamata di funzione
    
    printf("\nArray non puntato: ");
    sottoprogramma2(mioVettore);
}

// passaggio di array con puntatore e stampa array
void sottoprogramma(int *v)
{
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d, ", *(v + i));
    }
}

//passaggio di array senza puntatore e stampa array
void sottoprogramma2(int v[])
{
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d, ", v[i]);
    }
}
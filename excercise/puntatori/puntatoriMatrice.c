#include <stdio.h>
#define RIGHE 3
#define COLONNE 4

void stampaMatrice(int* ptrMatr);

void main ()
{
    int matrice[3][4] = {{3, 14, 15, 16}, {25, 30, 13, 4}, {15, 19, 33, 7}};
    int *ptrMatr = &matrice[0][0];

    stampaMatrice(ptrMatr);
}

//stampa una matrice utilizzando un puntatore
void stampaMatrice(int* ptrMatr)
{
    for (size_t i = 0; i < RIGHE; i++)
    {
        for (size_t j = 0; j < COLONNE; j++)
        {
            printf("%2d |", *ptrMatr);
            ptrMatr++;
        }
        printf("\n");
    }
}
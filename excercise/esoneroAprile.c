#include <stdio.h>
#include <time.h>

void main()
{
    int matrice[3] [4];
    
    srand(time(NULL));
    //righe
    for (size_t i = 0; i < 3; i++)
    {
        //azzero la somma
        int somma = 0;
        //colonne
        for (size_t j = 0; j < 4; j++)
        {
            //se non stai alla quarta colonna
            if(j < 3)
            {
                //genero un numero da 1 a 100
                matrice[i][j] = rand () % 100 + 1;

                //se il valore della matrice della cella è pari
                if(matrice[i][j] % 2 == 0)
                {
                    //metto nella variabile somma il valore della matrice a tot cella
                    somma = somma + matrice[i][j];
                }
            }
            else
            {
                //assegno alla quarta colonna a tot riga la variabile somma
                matrice[i][j] = somma;
            }
        }
    }

    // stampa della matrice
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            printf("%d\t", matrice[i][j]);
        }
        printf("\n");
    }
}
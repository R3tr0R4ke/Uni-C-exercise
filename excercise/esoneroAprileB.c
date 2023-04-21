#include <stdio.h>
#include <stdbool.h>
#define RIGHE 3
#define COLONNE 3

void main()
{
    int matrice[3][3];
    float mediaRiga;
    float mediaColonna;

    for (size_t i = 0; i < RIGHE; i++)
    {
        for (size_t j = 0; j < COLONNE; j++)
        {
            int numero;
            printf("Inserisci un valore: ");
            scanf("%d", &numero);
            matrice[i][j] = numero;
        }
        printf("\n");
    }

    // stampo matrice
    for (size_t i = 0; i < RIGHE; i++)
    {
        for (size_t j = 0; j < COLONNE; j++)
        {
            printf("%2d |", matrice[i][j]);
        }
        printf("\n");
    }

    puts("");

    // calcolo medie
    for (size_t i = 0; i < RIGHE; i++)
    {
        int sommaRiga = 0;
        int sommaColonna = 0;
        for (size_t j = 0; j < COLONNE; j++)
        {
            sommaRiga += matrice[i][j];
            mediaRiga = (float)sommaRiga / 3;

            sommaColonna += matrice[j][i];
        }
        printf("Media riga %d: %.2f;\t", i + 1, mediaRiga);
        mediaColonna = (float)sommaColonna / 3;
        printf("Media colonna %d: %.2f;\n", i + 1, mediaColonna);
    }
}
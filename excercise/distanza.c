#include <stdio.h>
#include <math.h>

//Prototipo di funzione, trova la distanza di due punti
int distanzaPunti(int a[], int b[]);

void main()
{
    int puntoA[2] = {0};
    int puntoB[2] = {0};
    int ascisse, ordinata;

    for (size_t i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            printf("Inserisci l'ascisse punto A: ");
            scanf("%d", &ascisse);
            puntoA[0] = ascisse;

            printf("Inserisci l'ordinata punto A: ");
            scanf("%d", &ordinata);
            puntoA[1] = ordinata;
        }
        else
        {
            printf("\nInserisci l'ascisse punto B: ");
            scanf("%d", &ascisse);
            puntoB[0] = ascisse;

            printf("Inserisci l'ordinata punto B: ");
            scanf("%d", &ordinata);
            puntoB[1] = ordinata;
        }
    }
    printf("La distanza dei due punti è di: %d", distanzaPunti(puntoA, puntoB));
}

//Funzione per trovare la distanza tra due punti situati in un piano cartesiano
int distanzaPunti(int a[], int b[])
{
    //radice quadra della somma tra il quadrato della differenza delle ascisse e il quadrato della differenza delle ordinate
    int distanza = sqrt((pow(a[0] - b[0], 2) + pow(a[1] - b[1], 2)));
    return distanza;
}
#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100

int somma(int somma, int vettore[]);

int main(void)
{
    int a, b, somma, nMax = 0, nMin = MAX_SIZE;
    int valori[MAX_SIZE] = {0};
    float media, mediaMaxMin;

    printf("Inserisci valore intero A: ");
    scanf("%d", &a);
    printf("Inserisci valore intero B: ");
    scanf("%d", &b);

    somma = 0;
    for (size_t i = 0; i < MAX_SIZE; i++)
    {
        int valore;
        printf("\nInserisci valore intero: ");
        scanf("%d", &valore);

        valori[i] = valore;
        somma += valori[i];
        media = (float) somma / (i + 1);

        if(valori[i] > nMax)
        {
            nMax = valori[i];
        }
        else if(valori[i] < nMin)
        {
            nMin = valori[i];
        }

        if (valore < a || valore > b)
        {
            i = MAX_SIZE;
        }
    }

    printf("La media dei valori inseriti è di: %.2f", media);
    int sommaMaxMin = nMax + nMin;
    mediaMaxMin = (float) sommaMaxMin / 2;
    printf("\nLa media tra il valore massimo e minimo è di: %.2f", mediaMaxMin);
    return 0;
}

int somma(int somma, int vettore[])
{
    for(size_t i = 0; i < MAX_SIZE; i++)
    {
        somma += vettore[i];
    }

    return somma;
}
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#define MAX_SIZE 10     //dimensione massima dell'array

void main()
{
    int vetVoti[MAX_SIZE] = {0};
    int contaVoti = 0;  //variabile che agisce da indice per il vettore

    bool termina = false;
    do
    {
        int voto;           //variabile dei voti inseriti

        printf("Inserisci un voto: ");
        scanf("%d", &voto);

        if(voto < 4 || voto > 10)
        {
            bool votoInserito = false;
            do
            {
                printf("\nIl voto deve essere un numero compreso tra 4 e 10...\n");
                printf("Inserisci un voto: ");
                scanf("%d", &voto);

                if (voto >= 4 && voto <= 10)
                {
                    votoInserito = true;
                }
            } 
            while (!votoInserito);
        }

        vetVoti[contaVoti] = voto;
        contaVoti ++;

        int scelta;
        printf("\nVuoi inserire un'altro voto?\n1: SI\n2: NO\nInserisci scelta: ");
        scanf("%d", &scelta);
        if (scelta == 1)
        {
            puts("");
            termina = false;
        }
        else
        {
            puts("");
            termina = true;
        }
    } 
    while (!termina);
    
    printf("Voti: ");
    for (int i = 0; i < contaVoti; i++)
    {
        printf(" %d,", vetVoti[i]);
    }

    float media;
    int somma = 0;
    for(size_t i = 0; i < contaVoti; i++)
    {
        somma += vetVoti[i];
    }
    media = (float)somma / contaVoti;
    printf("\nMedia: %.2f", media);

    if (media >= 6)
    {
        printf("\nPROMOSSO");
    }
    else
    {
        printf("\nBOCCIATO");
    }
}
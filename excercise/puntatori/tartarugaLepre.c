#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_QUADRATO 69

void muoviTartaruga (unsigned int *ptrTart);
void muoviLepre (unsigned int *ptrLepre);
void stampaPosCorrente (unsigned int pTartaruga, unsigned int pLepre);

void main ()
{
    srand(time(NULL));

    unsigned int tartaruga = 1, lepre = 1;      //posizioni iniziali tartaruga e lepre
    unsigned int timer = 0;                     //tick di orologio

    while (tartaruga != 70 && lepre != 70)
    {
        muoviTartaruga(&tartaruga);
        muoviLepre(&lepre);
        stampaPosCorrente(tartaruga, lepre);
        timer++;
    }

    if (tartaruga >= lepre)
    {
        puts("\nTARTARUGA VINCE!!!");
    }
    else
    {
        puts("LEPRE VINCE!!!");
    }
    
    printf("TEMPO SCADUTO = %u secondi\n", timer);
}

void muoviTartaruga (unsigned int *ptrTart)
{
    int x = rand() % 10 + 1;    //genero numero a caso da 1 a 10

    //passo veloce
    if(x >= 1 && x <= 5)
    {
        *ptrTart += 3;      //vado avanti di 3 quadrati
    }
    //scivolata
    else if(x > 5 && x < 8)
    {
        *ptrTart -= 6;      //torno indietro di 6 quadrati
    }
    //passo lento
    else
    {
        *ptrTart++;
    }

    //controlla confini circuito
    if (*ptrTart < 1)
    {
        *ptrTart = 1;   //ritorno alla posizione 1 se tartaruga scivola nelle prime 6 posizioni
    }

    if (*ptrTart > 70)
    {
        *ptrTart = 70;  //la tartaruga ha raggiunto il traguardo
    }
}

void muoviLepre (unsigned int *ptrLepre)
{
    int y = rand () % 10 + 1;   //genero numero casuale da 1 a 10

    //grande balzo
    if (y == 3 || y == 4)
    {
        *ptrLepre += 9;
    }
    //grande scivolata
    else if (y == 5)
    {
        *ptrLepre -= 12;
    }
    //piccolo balzo
    else if (y >= 6 && y <= 8)
    {
        *ptrLepre++;
    }
    //piccola scivolata
    else if (y == 10)
    {
        *ptrLepre -= 2;
    }

    //controlla confini circuito
    if (*ptrLepre < 1)
    {
        *ptrLepre = 1;
    }

    if (*ptrLepre > 70)
    {
        *ptrLepre = 70;
    }
}

void stampaPosCorrente (unsigned int pTartaruga, unsigned int pLepre)
{
    for (size_t count = 1; count <= 70; count++)
    {
        if(count == pTartaruga && count == pLepre)
        {
            printf("%s", "OUCH!!!");
        }
        else if (count == pLepre)
        {
            printf("%s", "H");
        }
        else if (count == pTartaruga)
        {
            printf("%s", "T");
        }
        else
        {
            printf("%s", " ");
        }
    }
}
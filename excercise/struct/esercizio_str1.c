#include <stdio.h>

struct Carta
{
    char *numCarta;
    char *seme;
};


void main()
{
    struct Carta assoSpada = {"Ace", "Spade"};

    struct Carta *cardPtr = &assoSpada;

    printf("La carta è: %s di %s\n", assoSpada.numCarta, assoSpada.seme);
    printf("La carta è: %s di %s\n", cardPtr->numCarta, cardPtr->seme);
    printf("La carta è: %s di %s\n", (*cardPtr).numCarta, (*cardPtr).seme);
}
#include <stdio.h>
#include <stdbool.h>

void leggiIntervallo(int a, int b);


void main ()
{
    //register int tmp; //register usalo per mandare il valore anzichè nello stack, nei registri(rende veloce il programma)
    int valA, valB;

    leggiIntervallo(valA, valB);
    
    
}

void leggiIntervallo(int a, int b)
{
    bool valInseriti = false;
    do
    {
        printf("Inserisci limite iniziale: ");
        scanf("%d", &a);

        printf("Inserisci limite finale: ");
        scanf("%d", &b);
    } 
    while (valInseriti != true);
}

/*void serieValori(int a, int b)
{
    if ()
    {

    }
}*/
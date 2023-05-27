#include <stdio.h>
#include <stdbool.h>

int main ()
{
    int x, y, z;
    int scelta;
    bool termina = false;

    do
    {
        printf("Inserisci il primo lato: ");
        scanf("%d", &x);

        printf("Inserisci il secondo lato: ");
        scanf("%d", &y);

        printf("Inserisci il terzo lato: ");
        scanf("%d", &z);

        determinaTriangolo(x, y, z);

        printf("\nVuoi trovare un altro triangolo o terminare il programma?\n1: Trova triangolo\n2: Termina\nInserisci scelta: ");
        scanf("%d", &scelta);

        if (scelta == 1)
        {
            termina = false;
        }
        else if (scelta == 2)
        {
            termina = true;
        }
        else 
        {
            printf("\nInserimento errato...");
        }

    } while (termina == false);
    return 0;
}

void determinaTriangolo (int x, int y, int z)
{
    if ((x < y + z) && (y < x + z) && (z < x + y))
    {
        if (x == y || y == z || x == z)
        {
            printf("\nI lati formano un triangolo isoscele\n");
        }
        else if (x == y && y == z)
        {
            printf("\nI lati formano un triangolo equilatero\n");
        }
        else
        {
            printf("\nI lati formano un triangolo scaleno\n");
        }
    }
    else
    {
        printf("\nI lati dati non formano un triangolo\n");
    }
    return;
}
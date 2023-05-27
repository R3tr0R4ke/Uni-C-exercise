#include "esercizio_extern2.h"
#include <stdio.h>

int main ()
{
    extern contatore;

    for (contatore; contatore <= 9; contatore++)
    {
        printf("\nIncremento contatore: %d", contatore);
    }
    return 0;
}
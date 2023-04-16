#include "esercizio_extern1.h"
#include <stdio.h>

int main ()
{
    extern numero;
    printf ("Il numero globale è: %d", numero);
    return 0;
}
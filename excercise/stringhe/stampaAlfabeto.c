#include <stdio.h>
#include <stdlib.h>

void stampaAlfabeto();

void main()
{
    stampaAlfabeto();
}

void stampaAlfabeto()
{
    char x;

    for (x = 65; x <= 122; x++)
    {
        if (x >= 'A' && x <= 'Z')
        {
            printf("%c ha codice %d è Maiuscola\n", x, x);
        }
        else if (x >= 'a' && x <= 'z')
        {
            printf("%c ha codice %d è Minuscola\n", x, x);
        }
        else
        {
            printf("%c ha codice %d è Altro\n", x, x);
        }
    }
}
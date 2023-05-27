#include <stdio.h>

void main()
{
    printf("Inserisci carattere: ");
    char ch = getchar();

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        printf("CARATTERE VALIDO!!!\n");
    }
    else
    {
        printf("Errore di inserimento!\n");
    }
}
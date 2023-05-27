#include <stdio.h>

void main()
{
    printf("Inserisci carattere: ");
    char ch = getchar();

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        int pos = ch;

        printf("Il carattere %c è una lettera alla posizione %d", ch, pos);
    }
    else
    {
        printf("Il carattere inserito non è una lettera");
    }
}
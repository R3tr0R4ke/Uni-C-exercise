#include <stdio.h>

void main()
{
    printf("Inserisci primo carattere: ");
    char ch = getchar();

    fflush(stdin);

    printf("Inserisci secondo carattere: ");
    char ch2 = getchar();

    if (ch < ch2)
    {
        printf("%c viene prima di %c", ch, ch2);
    }
    else if (ch == ch2)
    {
        printf("%c è uguale a %c", ch, ch2);
    }
    else
    {
        printf("%c viene dopo di %c", ch, ch2);
    }
}
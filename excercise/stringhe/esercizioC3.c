#include <stdio.h>

void main()
{
    printf("Inserisci numero: ");
    char ch = getchar();

    fflush(stdin);

    printf("Inserisci lettera Maiuscola: ");
    char ch2 = getchar();

    if (ch >= '0' && ch <= '5')
    {
        if (ch2 >= 'A' && ch2 <= 'F')
        {
            printf("%c%c è una classe\n", ch, ch2);
        }
        else
        {
            printf("%c%c non è una classe\n", ch, ch2);
        }
    }
    else
    {
        printf("%c%c non è una classe\n", ch, ch2);
    }
}
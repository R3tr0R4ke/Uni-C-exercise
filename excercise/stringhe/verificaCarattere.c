#include <stdio.h>

void main()
{
    char ch;

    printf("Inserisci carattere: ");
    ch = getchar();

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c lettera maiuscola\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c lettera minuscola\n", ch);
    }
    
    
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("%c lettera \n", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c cifra numerica\n", ch);
    }
    else
    {
        printf("%c non è una lettera o un numero\n", ch);
    }
}
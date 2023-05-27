#include <stdio.h>

void main()
{
    printf("Inserisci vocale maiuscola: ");
    char vocale = getchar();

    fflush(stdin);

    printf("Inserisci operatore aritmetico: ");
    char operatore = getchar();

    if(vocale == 'A' || vocale == 'E' || vocale == 'I' ||vocale == 'O' || vocale == 'U')
    {
        if(operatore == '+' || operatore == '-' || operatore == '*' || operatore == '/')
        {
            printf("CARATTERI CORRETTI!\n");
        }
        else
        {
            printf("CARATTERI ERRATI: Il carattere %c non è un operatore aritmetico", operatore);
        }
    }
    else
    {
        printf("CARATTERI ERRATI: Il carattere %c non è una vocale maiuscola", vocale);
    }
}
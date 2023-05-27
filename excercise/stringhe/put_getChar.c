#include <stdio.h>

void main()
{
    char ch;

    printf("Inserisci carattere: ");
    ch = getchar();
    putchar(ch);

    fflush(stdin);      //libero il buffer per il prossimo carattere

    printf("\n\nInserisci carattere: ");
    scanf("%c", &ch);
    printf("Carattere inserito: %c\n", ch);

    //non svuoto il buffer e quindi il blocco nel while non viene eseguito
    while(getchar() != '\n')
    {
        printf("\n\nInserisci carattere: ");
        ch = getchar();
        putchar(ch);
    }

}
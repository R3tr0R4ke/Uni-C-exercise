#include <stdio.h>
#include <string.h>

#define MAXSTRING 30

void main()
{
    char strA[] = "alticciato";
    char c = 't';
    int trovato = 0;
    int i;

    //ricerco un singolo carattere nella stringa
    for (i = 0; strA[i] != '\0' && trovato == 0; i++)
    {
        if (strA[i] == c)
        {
            trovato = 1;
        }
    }

    if (trovato == 1)
    {
        printf("Trovato in posizione: %d\n", i - 1);
    }

    //ricerco un carattere diverse volte nella stringa
    char sa[MAXSTRING] = "Tarantella tristemente triste";
    int posizioni[MAXSTRING];
    int j = 0;
    trovato = 0;

    for (i = 0; sa[i] != '\0'; i++)
    {
        if (sa[i] == c)
        {
            posizioni[j] = i;
            j++;
            trovato = 1;
        }
    }

    if (trovato == 1)
    {
        printf("Trovato in posizione: ");

        for (i = 0; i < j; i++)
        {
            printf("%d - ", posizioni[i]);
        }
    }

    puts("");

    //in modo analogo posso utilizzare la funzione strchr(str, 'char');
    char myString[] = "Buongiorno";
    c = 'g';
    char* ret;

    ret = strchr(myString, c);
    printf("%c", *ret);

    int posizione = ret - myString;
    printf("\n si trova in posizione %d", posizione);
}
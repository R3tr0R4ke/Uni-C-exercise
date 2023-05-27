#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main()
{
    const int MAX = 20;
    char strA[MAX];
    char strB[MAX];
    bool uguali;
    int i;

    printf("Inserisci prima stringa: ");
    gets(strA);
    printf("Inserisci seconda stringa: ");
    gets(strB);

    uguali = 1; //true
    //controllo per ogni elemento se le stringhe siano uguali
    for (i = 0; (strA[i] != 0 && strB[i] != 0); i++)
    {
        if(strA[i] != strB[i])
        {
            uguali = 0; //false
        }
    }

    //controlla che entrambe le stringhe siano arrivate al terminatore
    if (strA[i] != 0 || strB[i] != 0)
    {
        uguali = 0; //false
    }

    printf("Uguaglianza: %d", uguali);
}
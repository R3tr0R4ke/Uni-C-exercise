#include <stdio.h>
#include <string.h>

void stampaStringa(char * s);

void main()
{
    const int MAX_SRC = 20, MAX_DEST = 30;
    char src[MAX_SRC + 1];
    char dest[MAX_DEST + 1];
    int i;

    //chiedo in input una stringa e la inserisco in src[MAX_SRC + 1]
    printf("Inserisci stringa: ");
    gets(src);

    for(i = 0; src[i] != 0; i++)
    {
        dest[i] = src[i];   //copia valore di src[i] in dest[i]
    }

    dest[i] = 0;    //aggiungo il terminatore

    stampaStringa(src);
    stampaStringa(dest);

    //uso della funzione strcpy(dst, src);
    //chiedo in input una stringa e la inserisco in src[MAX_SRC + 1]
    printf("Inserisci stringa: ");
    gets(src);

    strcpy(dest, src);  //analogo al ciclo di sopra, copia una stringa in un altra

    stampaStringa(src);
    stampaStringa(dest);
}

void stampaStringa(char * s)
{
    for(size_t i = 0; *(s + i) != 0; i++)
    {
        printf("%c", *(s + i));
    }
    puts("");
}
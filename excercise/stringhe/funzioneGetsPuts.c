#include <stdio.h>
#include <string.h>

void main()
{
    const int MAX = 20;
    char nome[MAX+1];
    char cognome[MAX+1];

    printf("Come ti chiami? ");
    scanf("%s", nome);      //scanf sconsigliata per inserire nomi quali "Pier Paolo" etc.

    fflush(stdin);  //devo svuotare il buffer se non uso gets()

    printf("Il tuo nome? ");
    gets(nome);
    //non serve svuotare il buffer se chiamo più volte gets()
    printf("Il tuo cognome? ");
    gets(cognome);

    puts(nome);     //stampa stringa, va automaticamente a capo
    puts(cognome);
}
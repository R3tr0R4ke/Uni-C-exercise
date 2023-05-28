#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

//Prototipi di funzione

void getParola (char str[]);
void inizialeMaiusc (char str[]);

void main()
{
    char frase[MAX_SIZE];
    
    getParola(frase);

    inizialeMaiusc(frase);
}

//Chiede una stringa in input da tastiera e restituisce la sua stampa
void getParola (char str[])
{
    printf("Inserisci stringa: ");
    gets(str);

    printf("Hai inserito la stringa \"%s\"\n", str);

    str = (char *) '\n';        //termino la stringa con newline
}

//Trasfroma le iniziali di una parola in lettera maiuscole e il resto in minuscole
void inizialeMaiusc (char str[])
{
    for (int i = 0; i <= strlen(str); i++)
    {
        //controllo che ci sia una lettera e che sia l'inizio della prima parola o della prossima
        if (isalpha(str[i]) != 0 && (i == 0 || str[i - 1] == ' '))  //isalpha controlla che sia una lettera o no
        {
            //trasfromo la lettera in maiuscola
            str[i] = toupper(str[i]);
        }
        else
        {
            //trasformo la lettera in minuscola
            str[i] = tolower(str[i]);
        }
    }

    printf("La stringa trasfromata è: %s", str);
}
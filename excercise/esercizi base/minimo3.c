#include <stdio.h>

//Prototipo di funzione, controlla il numero minore tra tre numeri
int minimoNum(int a, int b, int c);

void main()
{
    int primo, secondo, terzo;

    printf("Inserisci il primo numero: ");
    scanf("%d", &primo);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &secondo);

    printf("Inserisci il terzo numero: ");
    scanf("%d", &terzo);

    printf("Il numero più piccolo tra quelli inseriti è: %d", minimoNum(primo, secondo, terzo));
}

//Funzione che ritorna i valore minimo tra tre numeri forniti dall'utente
int minimoNum(int a, int b, int c)
{
    //Controllo che a sia minore di b e c
    if (a < b && a < c)
    {
        return a;
    }
    else if(b < a && b < c)     //Controllo che b sia minore di a e c
    {
        return b;
    }
    else if(c < a && c < b)     //Controllo che c sia minore di a e b
    {
        return c;
    }
}
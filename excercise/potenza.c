#include <stdio.h>

//Prototipo di funzione per calcolare la Potenza
int calcolaPotenza(int a, int b);

void main()
{
    int base;
    printf("Inserisci la base: ");
    scanf("%d", &base);

    int potenza;
    printf("Inserisci la potenza: ");
    scanf("%d", &potenza);

    printf("Il risultato è: %d", calcolaPotenza(base, potenza));
}

//Funziona che calcola la potenza di un numero dato l'esponente e la base dall'utente
int calcolaPotenza(int a, int b)
{
    int x = 1;
    //Iterazione definita utile a riemulare il procedimento del calcolo della potenza
    for(size_t i = 0; i < b; i++)
    {
        x *= a;
    }
    return x;
}
#include <stdio.h>
#include <stdbool.h>

int main ()
{
    bool isZero = false;    //variabile bool che permette l'uscita dal while se settata a true
    int num1, num2;         //valori numeri che l'utente inserirà
    float media;              //variabile che contiene la media dei numeri inseriti
    
    do
    {
        printf("\nInserisci il primo valore: ");
        scanf("%d", &num1);

        printf("Inserisci il secondo valore: ");
        scanf ("%d", &num2);

        if (num1 == 0 || num2 == 0)
        {
            isZero = true;
            printf("\nNon ti chiederò altri valori...");
        }

        media =(float) (num1 + num2) / 2;
        printf("\nLa media dei numeri inseriti è di: %.2f", media);

        if (num2 > media)
        {
            printf("\n%d", num2); 
        }
        if (num1 > media)
        {
            printf("\n%d", num1);
        }
        
        printf("\n");
    } while (!isZero);
    
    printf("\nTermino il programma...");
    return 0;
}
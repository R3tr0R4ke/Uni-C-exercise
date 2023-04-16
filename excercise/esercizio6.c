#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numRand = rand();
    int numUtente;

    do
    {
        printf("\nInserisci un numero: ");
        scanf("%d", &numUtente);

        if(numUtente > numRand)
        {
            printf("\nIl numero inserito è maggiore del numero generato randomicamente...");
        }
        else
        {
            printf("\nIl numero inserito è minore del numero generato randomicamente...");
        }
        
        if (numUtente == numRand)
        {
            printf("\nComplimenti ha trovato il numero");
        }
    } 
    while (numUtente != numRand);
    
    return 0;
}
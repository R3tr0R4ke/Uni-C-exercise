#include <stdio.h>
#define VAL_MAX 6

void main()
{
    int vet[10] = {2, 4, 5, 1, 3, 6, 6, 5, 3, 1};

    for (size_t i = VAL_MAX; i > 0; i--)
    {
        printf("%d|", i);
        //Stampa istogramma
        for (int j = 0; j < 10; j++)
        {
            if (vet[j] >= i)
            {
                printf("* "); // stampa un asterisco se il valore del vettore è maggiore o uguale a i
            }
            else
            {
                printf("  "); // altrimenti stampa uno spazio vuoto
            }
        }
        printf("\n");
    }

    printf("  ");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }
}
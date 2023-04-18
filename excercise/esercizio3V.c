#include <stdio.h>
#include <time.h>
#define SIZE 10

void stampaVettore(int vettore[], int n);
void stampaPosizione(int vettore[], int n);
 
void main ()
{
    int vettore[SIZE] = {0};
    int contaPari = 0, contaDispari = 0;

    srand(time(NULL));

    for (size_t i = 0; i < SIZE; i++)
    {
        vettore[i] = rand();

        if (vettore[i] % 2 == 0)
        {
            contaPari++;
        }
        else
        {
            contaDispari++;
        }
    }

    stampaVettore(vettore, SIZE);

    puts("\n");

    stampaPosizione(vettore, SIZE);
}

void stampaVettore (int vettore[], int n)
{
    printf("Vettore: ");
    for(size_t i = 0; i < n; i++)
    {
        printf("%d, ", vettore[i]);
    }
}

void stampaPosizione(int vettore[], int n)
{
    for(size_t i = 0; i < n; i++)
    {
        if (vettore[i] % 2 == 0)
        {
            printf("Posizione: %d\t | Numero: %d\t | Pari\n", i, vettore[i]);
        }
        else
        {
            printf("Posizione: %d\t | Numero: %d\t | Dispari\n", i, vettore[i]);
        }
    }
}
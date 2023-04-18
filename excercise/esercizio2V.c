#include <stdio.h>
#include <time.h>
#define SIZE 10
#define NMAX 50     //Numero massimo generabile nel vettore

void stampaVettore(int vettore[], int n);

void main()
{
    int vettore[SIZE] = {0};
    int numMax = 0, numMin = NMAX;

    srand(time(NULL));

    for (size_t i = 0; i < SIZE; i++)
    {
        vettore[i] = rand() % 50;

        if(vettore[i] > numMax)
        {
            numMax = vettore[i];
        }
        else if(vettore[i] < numMin)
        {
            numMin = vettore[i];
        }
    }

    stampaVettore(vettore, SIZE);

    printf("NumMax: %d\n", numMax);
    printf("NumMin: %d", numMin);
}

void stampaVettore (int vettore[], int n)
{
    printf("Vettore: ");
    for(size_t i = 0; i < n; i++)
    {
        printf("%d, ", vettore[i]);
    }
    puts("");
}
#include <stdio.h>
#include <time.h>
#define SIZE 10

void riordinaCresc(int vettore[], int n);
void riordinaDecresc(int vettore[], int n);

void main()
{
    int vetCresc[SIZE] = {0};
    int vetDecresc[SIZE] = {0};
    
    srand(time(NULL));

    for (size_t i = 0; i < SIZE; i++)
    {
        vetCresc[i] = rand() % 50;
        vetDecresc[i] = rand() % 50;
    }

    printf("Vettore crescente originale\t: ");
    stampaVetCresc(vetCresc, SIZE);

    riordinaCresc(vetCresc, SIZE);

    printf("\nVettore crescente riordinato    : ");
    stampaVetCresc(vetCresc, SIZE);

    printf("\n\nVettore decrescente originale   : ");
    stampaVetDecresc(vetDecresc, SIZE);

    riordinaDecresc(vetDecresc, SIZE);

    printf("\nVettore decrescente riordinato  : ");
    stampaVetDecresc(vetDecresc, SIZE);
}

void riordinaCresc(int vettore[], int n)
{
    //bubble sort
    //ciclo per num di passate
    for (unsigned int pass = 1; pass < SIZE; pass++)
    {
        //ciclo per num di confronti a ogni passata
        for (size_t i = 0; i < SIZE - 1; i++)
        {
            if (vettore[i] > vettore[i + 1])
            {
                int tmp = vettore[i];
                vettore[i] = vettore[i + 1];
                vettore[i + 1] = tmp;
            }
        }
    }
}

void riordinaDecresc(int vettore[], int n)
{
    //sinkin sort
    //ciclo per num di passate
    for (unsigned int pass = 1; pass < SIZE; pass++)
    {
        //ciclo per num di confronti a ogni passata
        for (size_t i = 0; i < SIZE - 1; i++)
        {
            if (vettore[i] < vettore[i + 1])
            {
                int tmp = vettore[i];
                vettore[i] = vettore[i + 1];
                vettore[i + 1] = tmp;
            }
        }
    }
}

void stampaVetCresc (int vettore[], int n)
{
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%4d, ", vettore[i]);
    }
}

void stampaVetDecresc (int vettore[], int n)
{
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%4d, ", vettore[i]);
    }
}
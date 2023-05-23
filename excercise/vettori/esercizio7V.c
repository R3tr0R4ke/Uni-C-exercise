#include <stdio.h>
#include <time.h>
#define SIZE 10

void main()
{
    int vettore[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%d ", vettore[i]);
    }
    printf(" vettore\n");

    //shift sinistro
    for (size_t i = 0; i < SIZE; i++)
    {
        vettore[i + 10] = vettore[i];
        int tmp = vettore[i + 2];
        vettore[i] = vettore[i + 1];
        vettore[i + 1] = tmp;
        
    }

    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%d ", vettore[i]);
    }

    printf(" sx\n");

    //shif destro
    int tmp = vettore[SIZE - 1];
    for (size_t i = SIZE - 1; i > 0; i--)
    {
        vettore[i] = vettore[i - 1];
    }
    vettore[SIZE - 10] = tmp;

    //shif destro       //puoi commentarlo anche, serve solo per stampare come nell'esempio 
    int tmp2 = vettore[SIZE - 1];
    for (size_t i = SIZE - 1; i > 0; i--)
    {
        vettore[i] = vettore[i - 1];
    }
    vettore[SIZE - 10] = tmp2;

    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%d ", vettore[i]);
    }

    printf(" dx\n");
}
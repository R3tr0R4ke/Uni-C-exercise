#include <stdio.h>
#include <time.h>
#define MAX 10

int main()
{
    int vGen[MAX] = {0};
    int vFreq[MAX] = {0};
    
    srand(time(NULL));

    // genero numeri random e aggiorno le frequenze della loro generazione
    printf("Vettore generatore : ");
    for (size_t i = 0; i < MAX; i++)
    {
        vGen[i] = rand() % 10;
        printf("%d, ", vGen[i]);
    }

    for (size_t i = 0; i< MAX; i++)
    {
        for (size_t j = 0; j < MAX; j++)
        {
            if (vGen[i]==vGen[j]) 
            {
                vFreq[i]++;  
            } 
        } 
    }

    puts("");

    // stampo vettore frequenze
    printf("Vettore frequenze  : ");
    for (size_t i = 0; i < MAX; i++)
    {
        printf("%d, ", vFreq[i]);
    }

    return 0;
}
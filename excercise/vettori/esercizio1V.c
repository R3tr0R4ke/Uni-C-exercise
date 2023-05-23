#include <stdio.h>
#include <time.h>
#define SIZE 10

float calcolaMedia(int vettore[], int n);

void main()
{
    int vettore[SIZE] = {0};
    float mediaNum;

    srand(time(NULL));

    for (size_t i = 0; i < SIZE; i++)
    {
        vettore[i] = rand() % 20;
        mediaNum = calcolaMedia(vettore, SIZE);
    }

    // carico numeri casuali e stampo istogramma
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%2d | ", vettore[i]);

        for (size_t j = 0; j < vettore[i]; j++)
        {
            printf("*");
        }
        printf("\t\t\tScarto: %.2f", vettore[i] - mediaNum);
        puts("");
    }
}

float calcolaMedia(int vettore[], int n)
{
    int sommaNum = 0;

    for (size_t i = 0; i < n; i++)
    {
        sommaNum = sommaNum + vettore[i];
    }

    float media = (float)sommaNum / n;
    return media;
}

#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#define SIZE 10

int main()
{
    int vettore[SIZE] = {0};
    int numTmp, i;
    bool isDiverso;

    srand(time(NULL)); // setto il seme di generazione casuale

    for (i = 0; i < SIZE; i++)
    {
        do
        {
            isDiverso = true;
            numTmp = rand() % 10;

            for (size_t j = 0; j < i; j++) // al primo ciclo lo salto perchè j == i e non j < i
            {
                if (vettore[j] == numTmp)
                {
                    isDiverso = false;
                }
            }
        } while (isDiverso == false);

        vettore[i] = numTmp; // assegno il valore nella variabile temporanea al vettore
    }

    printf("Vettore: ");
    // stampo il vettore
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", vettore[i]);
    }
    return 0;
}
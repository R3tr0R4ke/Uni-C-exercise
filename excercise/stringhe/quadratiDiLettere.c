#include <stdio.h>

#define DIM_MAX 26

void main()
{
    char ch;
    int dim = 1;

    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        for (size_t i = 0; i < dim; i++)
        {
            for (size_t j = 0; j < dim; j++)    
            {
                printf("%c", ch);   //stampo la lettera in base alla lunghezza di dim
            }
            printf("\n");       //torno a capo e stampo nuova riga quadrato
        }
        if (dim != DIM_MAX)
        {
            dim++;              //incremento la dimensione del prossimo quadrato
            printf("\n");       //ritorno a capo per la stampa del prossimo quadrato
        }
    }
}
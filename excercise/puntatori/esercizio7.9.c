#include <stdio.h>
#define SIZE 5

void main()
{
    unsigned int values[SIZE] = {2, 4, 6, 8, 10};
    unsigned int *vPtr;

    //notazione indice degli array
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%d ", values[i]);
    }

    puts("");

    vPtr = values;
    vPtr = &values[0];      //cerca di usare sempre questa, è più chiara per me

    //stampa con notazione puntatore/offset
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%d ", *(vPtr + i));
    }

    puts("");

    //stampo con natazione puntatore/offset usando nome array come puntatore
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%d ", *(values + i));
    }

    puts("");

    //stampo usando puntatore all'array con l'indice
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%d ", vPtr[i]);
    }

    //punto al 5 elemento dell'array
    values[4];      //notazione indece dell'array
    *(values + 4);  //puntatore/offset usando il nome dell'array
    vPtr[4];        //notazione con indice usando puntatore
    *(vPtr + 4);    //puntatore/offset

    printf("\n%p\n%d", vPtr + 3, *(vPtr + 3));

    vPtr = &values[5];
    printf("\n%d", *(vPtr - 4));
}
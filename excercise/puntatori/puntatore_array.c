#include <stdio.h>

void main()
{
    int a[5] = {9, 5, 7, 10, 15};   //dichiaro array di dimensione 5 con elementi inizializzati
    int *p = &a[0];                 //dichiaro il puntatore che punta al primo elemento dell'array

    //printf("Il valore di p è: %d\n", *p);

    //p++;    //incremento il puntatore

    //printf("Il valore di p è: %d", *p);

    for (size_t i = 0; i < 5; i++)
    {
        printf("Il valore di p è: %d\n", *p);
        p++;
    }
}
#include <stdio.h>

void main()
{
    long value1 = 200000, value2;
    long *lPtr;

    lPtr = &value1;
    printf("Valore value1: %d", *lPtr);

    lPtr = &value2;
    printf("\nValore value2: %d", *lPtr);
    printf("\nIndirizzo value2: %p", &value2);

    printf("\nIndirizzo value1: %p", &value1);

    printf("\nIndirizzo lPtr: %p", lPtr);
}
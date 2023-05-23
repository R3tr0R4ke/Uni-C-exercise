#include <stdio.h>

void main()
{
    int vettore[] = {9, 5, 6, 7, 10};

    int* ptrVet = &vettore[0];
    printf("Primo valore : %d\n", *ptrVet);

    ptrVet++;
    printf("ptr++ : %d\n", *ptrVet);

    ptrVet--;
    printf("ptr-- : %d\n", *ptrVet);   

    ptrVet += 2;
    printf("ptr+2 : %d\n", *ptrVet);   

    ptrVet += 2;
    printf("ptr+2 : %d\n", *ptrVet);   
}